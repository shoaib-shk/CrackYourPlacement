//Solution 1
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i = 1;i<nums.size();i++){
            if(nums[i] != nums[i-1]){
                nums[j] = nums[i];
                j++;
            }   
        }
        return j;
    }
};
/* Solution 2
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int i = 0;
        for(auto n:m){
            nums[i] = n.first;
            i++;
        }
        return i;
    }
};*/