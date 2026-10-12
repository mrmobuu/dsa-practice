class BusBooking {
public:
    vector<vector<int>> freeSeats;
    vector<vector<int>> bookSeats;
    map<pair<int,int>,int> mpp;
    int totalTime = -1;
    int minTime = -1;
    int size;
    BusBooking(int n) {
        vector<int> seats = {0, 0, 0, 0};
        vector<int> empty = {0, 0, 0, 0};
        size = n;
        for (int i = 0; i < n; i++) {
            freeSeats.push_back(seats);
            bookSeats.push_back(empty);
        }
    }

    void toggle(string seat) {
        if(minTime != -1){
            minTime = -1;
        }
        if(totalTime != -1){
            totalTime = -1;
        }
        int seatRow = stoi(seat.substr(1));
        int seatCol = seat[0] - 'A';
        if (freeSeats[seatRow - 1][seatCol] == 0) {
            freeSeats[seatRow - 1][seatCol] = -1;
            if (seatCol == 1 || seatCol == 2) {
                bookSeats[seatRow - 1][seatCol] = 1;
                mpp[{seatRow - 1,seatCol}] = 1;
            } else if (seatCol == 0) {
                if (bookSeats[seatRow - 1][seatCol + 1] == 1) {
                    bookSeats[seatRow - 1][seatCol] = 3;
                    mpp[{seatRow - 1,seatCol}] = 3;
                } else {
                    bookSeats[seatRow - 1][seatCol] = 1;
                    mpp[{seatRow - 1,seatCol}] = 1;
                }
            } else {
                if (bookSeats[seatRow - 1][seatCol - 1] == 1) {
                    bookSeats[seatRow - 1][seatCol] = 3;
                    mpp[{seatRow - 1,seatCol}] = 3;
                } else {
                    bookSeats[seatRow - 1][seatCol] = 1;
                    mpp[{seatRow - 1,seatCol}] = 1;
                }
            }
        } else {
            freeSeats[seatRow - 1][seatCol] = 0;
            bookSeats[seatRow - 1][seatCol] = 0;
            mpp.erase({seatRow - 1,seatCol});

        }
    }

    int getTotalTime() {
        if(totalTime != -1){
            return totalTime;
        }
        int time = 0;
        for(auto it : mpp){
            time += it.second; 
        }
        totalTime = time;
        return time;
    }

    int getMinTime() {
        if(minTime != -1){
            return minTime;
        }

        int time = 0;
        for(auto it : mpp){
            if(it.second != 0){
                time++;             
            }
        }
        minTime = time;
        return time;

    }
};

/**
 * Your BusBooking object will be instantiated and called as such:
 * BusBooking* obj = new BusBooking(n);
 * obj->toggle(seat);
 * int param_2 = obj->getTotalTime();
 * int param_3 = obj->getMinTime();
 */
