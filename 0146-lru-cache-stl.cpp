/*
146. LRU Cache

Submitted: December 21, 2024

Runtime: 71 ms (beats 78.21%)
Memory: 182.15 MB (beats 27.80%)
*/

class LRUCache {
private:
    const int capacity;
    unordered_map<int, list<pair<int, int>>::iterator> map;
    list<pair<int, int>> list;
public:
    LRUCache(int capacity) : capacity(capacity) {}
    
    int get(int key) {
        if (map.count(key)) {
            int val = (*map[key]).second;
            list.erase(map[key]);
            list.push_front({ key, val });
            map[key] = list.begin();
            return val;
        }
        return -1;
    }

    void put(int key, int value) {
        if (map.count(key)) {
            list.erase(map[key]);
            list.push_front({ key, value });
            map[key] = list.begin();
        } else {
            if (list.size() == capacity) {
                map.erase(list.back().first);
                list.pop_back();
            }
            list.push_front({ key, value });
            map[key] = list.begin();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
