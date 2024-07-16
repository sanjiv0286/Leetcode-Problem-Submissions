class LRUCache {
public:
    list<int> dll;
    map<int, pair<list<int>::iterator, int>> mp;
    int n;
    LRUCache(int capacity) { n = capacity; }

    void solve(int key) {
        dll.erase(mp[key].first);
        dll.push_front(key);
        mp[key].first = dll.begin();
    }

    int get(int key) {
        if (mp.find(key) == mp.end()) {
            return -1;
        }
        solve(key);
        return mp[key].second;
    }

    void put(int key, int value) {

        if (mp.find(key) != mp.end()) {
            mp[key].second = value;
            solve(key);

        } else {
            dll.push_front(key);
            mp[key] = {dll.begin(), value};
            n--;
        }
        if (n < 0) {
            mp.erase(dll.back());
            dll.pop_back();
            n++;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

// class LRUCache {
// public:
//     list<int> dll; //it contains the key
//     map<int, pair<list<int>::iterator, int>> cache; //key->(list_node, value)
//     int capacity;

//     LRUCache(int capacity) {
//         this->capacity = capacity;
//     }

//     void makeMostRecentlyUsed(int key) {
//         dll.erase(cache[key].first);
//         dll.push_front(key);
//         cache[key].first = dll.begin();
//     }

//     int get(int key) {
//         if(!cache.count(key))
//             return -1;

//         makeMostRecentlyUsed(key);
//         return cache[key].second;
//     }

//     void put(int key, int value) {
//         if(cache.count(key)) {
//             cache[key].second = value;
//             makeMostRecentlyUsed(key);
//         } else {
//             dll.push_front(key);
//             cache[key] = {dll.begin(), value};
//             capacity--;
//         }

//         if(capacity < 0) {
// cache.erase(dll.back());
// dll.pop_back();
// capacity++;
//         }
//     }
// };
