class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> temp;
        vector<vector<int>> ans = {{-1, -1}, {-1, -1}};
        for (int i = 0; i < n; i++) {
            temp.push_back({nums[i], i});
        }
        sort(temp.begin(), temp.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });
        // for (auto it : temp) {
        //     cout << it[0] << " " << it[1] << endl;
        // }
        int left = 0, right = n - 1;
        while (left < right) {
            int sum = temp[left][0] + temp[right][0];
            if (sum == target) {
                // cout << temp[left][0] << " " << temp[right][0] << endl;
                if (temp[left][0] != temp[right][0]) {
                    if (ans[1][0] == -1 && ans[1][1] == -1) {
                        if (temp[left][0] > temp[right][0]) {
                            ans = {{temp[left][0], temp[right][0]},
                                   {temp[left][1], temp[right][1]}};
                        } else {
                            ans = {{temp[right][0], temp[left][0]},
                                   {temp[right][1], temp[left][1]}};
                        }
                    } else {
                        int exisitingPrd = ans[0][0] * ans[0][1];
                        int prd = temp[left][0] * temp[right][0];
                        // cout << ans[0][0] << " " << ans[0][1] << " ans "
                        //      << exisitingPrd << endl;
                        // cout << temp[left][0] << " " << temp[right][0]
                        //      << " tem " << exisitingPrd << endl;
                        if (prd > exisitingPrd) {
                            if (temp[left][0] > temp[right][0]) {
                                ans = {{temp[left][0], temp[right][0]},
                                       {temp[left][1], temp[right][1]}};
                            } else {
                                ans = {{temp[right][0], temp[left][0]},
                                       {temp[right][1], temp[left][1]}};
                            }
                        }
                    }
                }
                left++;
                right--;
                while (left < right && temp[left - 1][0] == temp[left][0]) {
                    left++;
                }
                while (left < right && temp[right + 1][0] == temp[right][0]) {
                    right--;
                }
            } else if (sum > target) {
                right--;
            } else {
                left++;
            }
        }
        return {ans[1][0], ans[1][1]};
    }
};
