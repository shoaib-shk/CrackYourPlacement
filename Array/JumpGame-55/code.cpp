class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int goal = n-1;
        int curr = n-2;
        for(int i = 0;i<nums.size()-1;i++){
            if(curr + nums[curr] >= goal){
                goal = curr;
            }
            curr--;
        }
        return goal == 0;
    }
};