class Solution {
public:
    string toLowerCase(string str) {
        string result ="";
        for(auto ch:str){
            if(ch >='A' &&  ch <='Z'){
                result+= ch+32;
            }
            else{
                result+=ch;
            }
        }
        return result;
        
    }
};