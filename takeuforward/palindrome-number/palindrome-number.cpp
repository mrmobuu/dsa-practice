class Solution {
public:
    bool isPalindrome(int n) {
        int anotherNum = 0;
        int temp = n;
        while(temp){
            int rightPart = temp % 10;
            anotherNum = (anotherNum* 10) + rightPart;
            temp /= 10;
        }
        return n == anotherNum;
    }
};
