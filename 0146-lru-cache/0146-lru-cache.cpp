#include <unordered_map>

struct Node {
    int key;
    int value;
    Node* prev;
    Node* next;
    Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
private:
    int capacity;
    std::unordered_map<int, Node*> cache;
    Node* head;
    Node* tail;

    void remove(Node* node) {
        if (node->prev) {
            node->prev->next = node->next;
        } else {
            head = node->next;
        }
        if (node->next) {
            node->next->prev = node->prev;
        } else {
            tail = node->prev;
        }
    }

    void insertToHead(Node* node) {
        node->next = head;
        node->prev = nullptr;
        if (head) {
            head->prev = node;
        }
        head = node;
        if (!tail) {
            tail = head;
        }
    }

public:
    // Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap) : capacity(cap), head(nullptr), tail(nullptr) {}

    // Function to return value corresponding to the key.
    int get(int key) {
        if (cache.find(key) == cache.end()) {
            return -1;
        }
        Node* node = cache[key];
        remove(node);
        insertToHead(node);
        return node->value;
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            node->value = value;
            remove(node);
            insertToHead(node);
        } else {
            if (cache.size() >= capacity) {
                cache.erase(tail->key);
                remove(tail);
            }
            Node* newNode = new Node(key, value);
            insertToHead(newNode);
            cache[key] = newNode;
        }
    }
};
