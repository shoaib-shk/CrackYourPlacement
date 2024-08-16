class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxSize = 0;
        int first = 0;
        int last = height.size()-1;
        while(first<last){
            maxSize = max(maxSize,(last-first)*min(height[first],height[last]));
            if(height[last]>height[first]){
                first++;
            }else{
                last--;
            }
        }
        return maxSize;
    }
};