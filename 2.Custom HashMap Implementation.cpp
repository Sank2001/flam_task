#include <vector>
#include <list>

class MyHashMap {
private:
    struct KeyValue {
        int key;
        int value;
    };
    
    static const int BUCKET_SIZE = 1000;
    std::vector<std::list<KeyValue>> buckets;
    
    int hash(int key) {
        return key % BUCKET_SIZE;
    }
    
public:
    MyHashMap() {
        buckets.resize(BUCKET_SIZE);
    }
    
    void put(int key, int value) {
        int index = hash(key);
        for (auto& kv : buckets[index]) {
            if (kv.key == key) {
                kv.value = value;
                return;
            }
        }
        buckets[index].push_back({key, value});
    }
    
    int get(int key) {
        int index = hash(key);
        for (auto& kv : buckets[index]) {
            if (kv.key == key) {
                return kv.value;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = hash(key);
        auto& bucket = buckets[index];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->key == key) {
                bucket.erase(it);
                return;
            }
        }
    }
};