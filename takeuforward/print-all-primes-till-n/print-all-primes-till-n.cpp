class Solution{
    public:
        vector<int> primeTillN(int n){
            //your code goes here
            vector<long long> isPrime(n + 1,1);
            vector<int> ans;
            
            for(long long i = 2;i <= n;i++){

                if(isPrime[i]){
                    ans.push_back(i);

                    for(long long j = i * i;j <= n;j += i){
                        isPrime[j] = false;
                    }
                }
            }
            return ans;
        }
};
