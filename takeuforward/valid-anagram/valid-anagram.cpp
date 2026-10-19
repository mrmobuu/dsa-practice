class Solution {
   public:
    bool anagramStrings(string &s, string &t) {
        // your code goes here
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        for (auto it : s) {
            mp1[it]++;
        }
        for (auto it : t) {
            mp2[it]++;
        }
        if (mp1 == mp2) {
            return true;
        } else {
            return false;
        }
    }
};
