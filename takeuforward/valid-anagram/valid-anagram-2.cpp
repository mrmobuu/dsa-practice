class Solution{	
	public:
		bool anagramStrings(string &s,string &t){
			//your code goes here
            vector<int> cnt(26,0);
            for(auto it : s){
                cnt[it - 'a']++;
            }
            for(auto it : t){
                cnt[it - 'a']--;
            }
            for(auto it : cnt){
                if(it != 0){
                    return false;
                }
            }
            return true;
		}
};
