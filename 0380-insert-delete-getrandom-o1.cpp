/*
380. Insert Delete GetRandom O(1)

Submitted: January 2, 2025

Runtime: 26 ms (beats 97.77%)
Memory: 113.02 MB (beats 36.95%)
*/

class RandomizedSet {
private:
    unordered_map<int, int> map;
    vector<int> arr;
public:
    RandomizedSet() { }
    
    bool insert(int val) {
        if (map.find(val) != map.end()) return false;
        map[val] = arr.size(); // store index of val in arr
        arr.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (map.find(val) == map.end()) return false;
        int pos = map[val];
        map.erase(val);
        if (pos == arr.size() - 1) {
            arr.erase(arr.end() - 1);
            return true;
        }
        /*
        remove val from arr in constant time:
        since we don't care about the order of the elements in arr,
        we can just swap val with the last element and then pop_back
        */
        map[arr.back()] = pos;
        swap(arr[pos], arr.back());
        arr.erase(arr.end() - 1);
        return true;
    }
    
    int getRandom() {
        return arr[rand() % arr.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */