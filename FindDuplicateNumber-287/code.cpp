//Using HashMap:  (128 ms)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int num:nums){
            if(map.count(num)){
                return num;
            }
            map[num] = 1;
        }
        return -1;
    }
};

//Using Floyd tortoise hare approach (71 ms)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int tortoise = nums[0];
        int hare = nums[0];
        while(true){
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
            if(tortoise == hare) break;
        }
        int ptr1 = nums[0];
        int ptr2 = tortoise;
        while(ptr1 != ptr2){
            ptr1 = nums[ptr1];
            ptr2 = nums[ptr2];
        }
        return ptr1;
    }
};

