#include <iostream>
#include <list>

using namespace std;

class MyHashSet {
public:
    MyHashSet() {
    }
    list<int> numbers;

    void add(int key) {
        numbers.push_back(key);
    }
    
    
    void remove(int key) {
        numbers.remove(key);
    }
    
    bool contains(int key) {
        list<int>::iterator it = find(numbers.begin(), numbers.end(), key);
        if (it != numbers.end())
            return true;
        
        return false;
    }
};