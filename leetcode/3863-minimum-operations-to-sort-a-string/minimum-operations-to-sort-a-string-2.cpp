class Solution {
public:
    int minOperations(string s) {
        string temp = s;
        int n = s.size();
        if(n == 2 && s[0] > s[1]){
            return -1;
        }
        sort(temp.begin(), temp.end());
        if (s == temp) {
            return 0;
        }
        char minEl = 'z';
        char maxEl = 'a';
        unordered_map<char,int> mpp;
        for (auto it : s) {
            minEl = min(minEl, it);
            maxEl = max(maxEl, it);
            mpp[it]++;
        }
        // cout << minEl << " " << maxEl << endl;
        int ans = 0;
        if(s[0] == minEl){
            return 1;
        }
        if(s[n - 1] == maxEl){
            return 1;
        }
        if(s[n - 1] == minEl && s[0] == maxEl && mpp[minEl] == 1 && mpp[maxEl] == 1){
            return 3;
        }
        return 2;
    }
};
