class Solution {
public:
    string reverseWords(string str) {
        reverse(str.begin(),str.end());
        string ans="";
        int n = str.length();
        for(int i = 0; i<n; i++){
            string word="";
            while(i<n && str[i]!=' '){
                word+=str[i];
                i++;
            }
            reverse (word.begin(),word.end());
            if(word.length()>0){
                ans+=" "+word;
            }
        }
        return ans.substr(1);
    }
};