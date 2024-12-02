/*
146. LRU Cache

Submitted: November 27, 2024

Runtime: 81 ms (beats 66.53%)
Memory: 182.14 MB (beats 24.43%)
*/

class LinkedList {
public:
    struct Node {
        int val;
        Node* prev;
        Node* next;
        Node(int val, Node* prev, Node* next) : val(val), prev(prev), next(next) {}
        Node(int val) : Node(val, nullptr, nullptr) {}
    };
    typedef unsigned short size_type;
private:
    Node* const head = new Node(-1);
    Node* const tail = new Node(-2);
    size_type currentSize = 0; 
public:
    LinkedList() {
        head->next = tail;
        tail->prev = head;
    }

    void removeNode(Node* node) {
        if (node == head || node == tail) throw invalid_argument("Cannot remove head/tail node");
        else {
            Node *prev = node->prev, *next = node->next;
            prev->next = next;
            next->prev = prev;
            delete node;
            currentSize--;
        }
    }

    Node* addToHead(int val) {
        Node* newNode = new Node(val, head, head->next);
        head->next->prev = newNode;
        head->next = newNode;
        currentSize++;
        return newNode;
    }

    void removeFromTail() {
        removeNode(tail->prev);
    }

    size_type size() {
        return currentSize;
    }

    Node* back() {
        return tail->prev;
    }

};

class LRUCache {
private:
    const LinkedList::size_type capacity;
    unordered_map<int, pair<int, LinkedList::Node*>> map;
    LinkedList list;
public:
    LRUCache(int capacity) : capacity((LinkedList::size_type) capacity) {}
    
    int get(int key) {
        if (map.count(key)) {
            list.removeNode(map[key].second);
            map[key].second = list.addToHead(key);
            return map[key].first;
        }
        else return -1;
    }
    
    void put(int key, int value) {
        if (map.count(key)) list.removeNode(map[key].second);
        map[key] = { value, list.addToHead(key) };
        while (list.size() > capacity) {
            map.erase(list.back()->val);
            list.removeFromTail();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
