/*
1603. Design Parking System

Runtime: 4 ms (beats 77.81%)
Memory: 38.86 MB (beats 6.40%)
*/

class ParkingSystem {
public:
    unsigned short big, medium, small;
    inline ParkingSystem(int big, int medium, int small) : big(big), medium(medium), small(small) {}

    inline bool addCar(int carType) {
        switch (carType) {
            case 1:
                if (big == 0) return false;
                big--;
                return true;
            case 2:
                if (medium == 0) return false;
                medium--;
                return true;
            case 3:
                if (small == 0) return false;
                small--;
                return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
