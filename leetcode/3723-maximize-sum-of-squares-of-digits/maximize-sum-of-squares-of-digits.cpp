class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        if(sum > (9 * num)) return ans;
        int ansInt = 0;
        while(num){
            if(sum >= 10){
                ansInt += 9 * 9;
                sum -= 9;
                ans += "9";
            }else{
                ansInt += (sum * sum);
                ans += to_string(sum);
                sum = 0;
            }
            num--;
        }
        // cout << ansInt << endl;                             
        return ans;
    }
};
