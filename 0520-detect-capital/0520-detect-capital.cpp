class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        int n = word.size();

        for (auto x : word) {
            if (isupper(x)) {
                count++;
            }
        }

        if (count == n) return true;                 
        if (count == 0) return true;                 
        if (count == 1 && isupper(word[0])) return true; 

        return false;
    }
};
