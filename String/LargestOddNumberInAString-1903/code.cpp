class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length()-1;
        for(int i = n;i>=0;i--){
            // num[idx] - '0' converts the number character into an integer
            if((num[i] -'0') % 2 != 0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};