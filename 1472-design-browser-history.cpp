/*
1472. Design Browser History

Submitted: March 19, 2025

Runtime: 20 ms (beats 77.32%)
Memory: 62.60 MB (beats 87.07%)
*/

class BrowserHistory {
public:
    typedef vector<string> container_type;
private:
    container_type container;
    container_type::iterator pos;

public:
    BrowserHistory(string homepage) {
        container.push_back(homepage);
        pos = container.begin();
    }
    
    void visit(string url) {
        container.erase(pos + 1, container.end());
        container.push_back(url);
        pos = container.end() - 1;
    }
    
    string back(int steps) {
        return *(pos = max(container.begin(), pos - steps));
    }
    
    string forward(int steps) {
        return *(pos = min(container.end() - 1, pos + steps));
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */