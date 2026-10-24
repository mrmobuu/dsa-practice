class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        map<int, int> mpp; // 1  2.  3.  4.  5.  6.  7.  8.  9   10. 11. 12
        vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        vector<int> monthsPreSum;
        monthsPreSum.push_back(0);
        for (int i = 1; i < 12; i++) {
            monthsPreSum.push_back(monthsPreSum[i - 1] + months[i - 1]);
        }

        int arrivedAliceMonth = stoi(arriveAlice.substr(0, 2));
        int arrivedAliceDay = stoi(arriveAlice.substr(3, 4));

        int arrivedBobMonth = stoi(arriveBob.substr(0, 2));
        int arrivedBobDay = stoi(arriveBob.substr(3, 4));

        int startDate = 0;
        if (arrivedAliceMonth == arrivedBobMonth) {
            int bothArrivedAt = max(arrivedAliceDay, arrivedBobDay);
            startDate += monthsPreSum[arrivedAliceMonth - 1];
            startDate += bothArrivedAt;
        } else {
            int bothArrivedAtMonth = max(arrivedAliceMonth, arrivedBobMonth);
            startDate += monthsPreSum[bothArrivedAtMonth - 1];
            startDate +=
                (bothArrivedAtMonth == arrivedAliceMonth ? arrivedAliceDay
                                                         : arrivedBobDay);
        }

        int leaveAliceMonth = stoi(leaveAlice.substr(0, 2));
        int leaveAliceDay = stoi(leaveAlice.substr(3, 4));

        int leaveBobMonth = stoi(leaveBob.substr(0, 2));
        int leaveBobDay = stoi(leaveBob.substr(3, 4));

        int endDate = 0;
        // cout << leaveAliceMonth << " l " << leaveBobMonth << endl;
        // cout << leaveAliceDay << " d " << leaveBobDay << endl;
        if (leaveAliceMonth == leaveBobMonth) {
            int bothArrivedAt = min(leaveAliceDay, leaveBobDay);
            endDate += monthsPreSum[leaveAliceMonth - 1];
            endDate += bothArrivedAt;
        } else {
            int bothArrivedAtMonth = min(leaveAliceMonth, leaveBobMonth);
            // cout << bothArrivedAtMonth << endl;
            endDate += monthsPreSum[bothArrivedAtMonth - 1];
            endDate += (bothArrivedAtMonth == leaveAliceMonth ? leaveAliceDay
                                                              : leaveBobDay);
        }
        cout << endDate << " " << startDate << endl;
        return (endDate - startDate + 1) < 0 ? 0 : (endDate - startDate + 1);
    }
};
