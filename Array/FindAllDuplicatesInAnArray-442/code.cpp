class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>m;
        vector<int> arr;
        for(int i = 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int i = 0;
        for(auto n:m){
            if(n.second >= 2){
                arr.push_back(n.first);
                i++;
            }
        }
        return arr;
    }
};