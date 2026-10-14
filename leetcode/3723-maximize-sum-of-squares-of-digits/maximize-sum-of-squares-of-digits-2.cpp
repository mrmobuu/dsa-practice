class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        if (sum > (9 * num))
            return ans;
        while (num) {
            if (sum >= 10) {
                sum -= 9;
                ans += "9";
            } else {
                ans += to_string(sum);
                sum = 0;
            }
            num--;
        }
        return ans;
    }
};
