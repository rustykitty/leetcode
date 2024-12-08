/*
1845. Seat Reservation Manager

Submitted: December 7, 2024

Runtime: 47 ms (beats 96.42%)
Memory: 155.57 MB (beats 27.02%)
*/

class SeatManager {
private:
    const int capacity;
    // priority queue uses reversed ordering for some reason
    priority_queue<int, vector<int>, greater<int> > seats;
public:
    SeatManager(int n) : capacity(n) {
        // all seats initially available
        for (int i = 1; i <= n; ++i) seats.push(i);
    }

    int reserve() {
        // lowest seat number
        int seatNumber = seats.top();
        seats.pop();
        return seatNumber;
    }
    
    void unreserve(int seatNumber) {
        // seat is now available
        seats.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
