class Solution {
    int recursion(int n) {
        if (n == 1) {
            return 1;
        } else if (n <= 0) {
            return 0;
        }
        return recursion(n - 1) + recursion(n - 2);
    }

public:
    int fib(int n) { 
        if (n == 1) {
            return 1;
        } else if (n <= 0) {
            return 0;
        }
        int ans = 0;
        int b = 1;
        int a = 0;
        for(int i = 2;i <= n;i++){
            ans = a + b;
            a = b;
            b = ans;
        }
        return ans;

}
};
