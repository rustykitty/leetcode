/*
146. LRU Cache

Submitted: November 30, 2024

Runtime: 67 ms (beats 85.54%)
Memory: 173.16 MB (beats 55.15%)
*/

class LinkedList {
public:
    struct Node {
        int key;
        int val;
        Node* prev;
        Node* next;
        Node(int key, int val, Node* prev, Node* next) : key(key), val(val), prev(prev), next(next) {}
        inline Node(int key, int val) : Node(key, val, nullptr, nullptr) {}
    };
    typedef unsigned short size_type;
private:
    Node* const head = new Node(-1, -1);
    Node* const tail = new Node(-2, -2);
    size_type currentSize = 0; 

    inline void validateNode(Node* node) const {
        if (node == nullptr) throw invalid_argument("Node cannot be null");
        if (node == head || node == tail) throw invalid_argument("Cannot modify head/tail node");
    }
public:
    LinkedList() {
        head->next = tail;
        tail->prev = head;
    }

    Node* remove(Node* node) {
        validateNode(node);
        Node *prev = node->prev, *next = node->next;
        prev->next = next;
        next->prev = prev;
        currentSize--;
        return node;
    }

    inline void removeAndDelete(Node* node) {
        validateNode(node);
        delete remove(node);
    }

    inline Node* addToHead(int key, int val) {
        Node* newNode = new Node(key, val, head, head->next);
        addToHead(newNode);
        return newNode;
    }

    void addToHead(Node* node) {
        node->prev = head;
        node->next = head->next;
        head->next->prev = node;
        head->next = node;
        currentSize++;
    }

    inline void moveToHead(Node* node) {
        validateNode(node);
        // cout << node->val << endl;
        remove(node);
        addToHead(node);
    }

    inline void removeAndDeleteFromTail() {
        removeAndDelete(tail->prev);
    }

    inline void removeFromTail() {
        remove(tail->prev);
    }

    size_type size() const {
        return currentSize;
    }

    Node* back() const {
        return tail->prev;
    }

};

class LRUCache {
private:
    const LinkedList::size_type capacity;
    unordered_map<int, LinkedList::Node*> map;
    LinkedList list;
public:
    LRUCache(int capacity) : capacity((LinkedList::size_type) capacity) {}
    
    int get(int key) {
        if (map.count(key)) {
            list.moveToHead(map[key]);
            return map[key]->val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (map.count(key)) {
            list.moveToHead(map[key]);
            map[key]->val = value;
        } else {
            if (list.size() == capacity) {
                map.erase(list.back()->key);
                list.removeAndDeleteFromTail();
            }
            map[key] = list.addToHead(key, value);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
