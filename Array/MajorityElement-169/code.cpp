//More's Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ele;
        for(int i = 0;i<nums.size();i++){
            if(count == 0){
                ele = nums[i];
            }
            if(ele == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        return ele;
    }
};

//Using HashMap
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto ele : m){
            if(ele.second > (nums.size()/2)){
                return ele.first;
            }
        }
        return -1;
    }
};