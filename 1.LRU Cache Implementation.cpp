#include <unordered_map>
#include <list>

class LRUCache {
private:
    int capacity;
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> cacheMap;
    std::list<std::pair<int, int>> cacheList;

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        auto it = cacheMap.find(key);
        if (it == cacheMap.end()) {
            return -1;
        }
        
        // Move accessed item to front of list
        cacheList.splice(cacheList.begin(), cacheList, it->second);
        return it->second->second;
    }
    
    void put(int key, int value) {
        auto it = cacheMap.find(key);
        if (it != cacheMap.end()) {
            // Update existing value and move to front
            it->second->second = value;
            cacheList.splice(cacheList.begin(), cacheList, it->second);
            return;
        }
        
        // Check capacity and remove LRU item if needed
        if (cacheMap.size() == capacity) {
            int lruKey = cacheList.back().first;
            cacheMap.erase(lruKey);
            cacheList.pop_back();
        }
        
        // Add new item to front
        cacheList.emplace_front(key, value);
        cacheMap[key] = cacheList.begin();
    }
};