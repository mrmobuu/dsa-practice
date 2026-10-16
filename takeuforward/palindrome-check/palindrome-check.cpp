class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            int n = s.size();
            int i = 0, j = n - 1;
            while(i <= j){
                if(s[i] != s[j]){
                    return false;
                }
                j--;
                i++;
            }
            return true;
		}
};
