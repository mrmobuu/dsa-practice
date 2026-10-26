class Solution {
public:
    string winningPlayer(int x, int y) {
        bool isBob = false;
        while(x >= 0 && y >= 0){
            x--;
            y -= 4;
            isBob = !isBob;
        }
        return isBob ? "Bob" : "Alice";
    }
};
