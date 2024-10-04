class Solution {
public:
    char kthCharacter(int k) {
        string str = "a";
        while(str.length()<500){
            string s="";
            
            for(int j = 0;j<str.length();j++){
                int ascii = (int) str[j];
                ascii++;
                s+= char(ascii);
            }
            str+=s;
        }
        return str[k-1];
    }
};