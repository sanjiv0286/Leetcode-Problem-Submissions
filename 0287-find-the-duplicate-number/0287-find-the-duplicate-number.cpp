class Solution {
public:
// hair and tortoise method 
// tc O(n)  sc O(n)
    int findDuplicate(vector<int>& nums) {

        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];
        fast = nums[nums[fast]];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow ;
    }
};