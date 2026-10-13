class Solution {
   public:
    map<int, int> storeMarks(vector<int>& roll, vector<int>& marks) {
        // your code goes here
        map<int, int> mpp;
        int n = roll.size();
        for (int i = 0; i < n; i++) {
            mpp[roll[i]] = marks[i];
        }
        return mpp;
    }
};
