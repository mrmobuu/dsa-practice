class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long a = 0;
        long long b = 1;
        long long c = 1;
        map<long long,int> mpp;
        mpp[2] = 1;
        while(b < n){
            int val = b + c;
            a = b;
            b = c;
            c = val;
            long long sum = a + b + c;
            mpp[sum]++;
        }
        return mpp.find(n) == mpp.end() ? false : true;
    }
};
