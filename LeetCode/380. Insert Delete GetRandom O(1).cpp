/***  KNOWLEDGE IS POWER  ***/
class RandomizedSet {
public:
    unordered_map<int, int> mapVal2Idx;
    vector<int> list;
    
    bool insert(int val) {
        if (mapVal2Idx.count(val)) return false;
        mapVal2Idx[val] = list.size();
        list.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if (!mapVal2Idx.count(val)) return false;
        int todoRemoveIdx = mapVal2Idx[val];
        mapVal2Idx.erase(val);
        if (todoRemoveIdx < list.size() - 1) { // if we can replace with last value
            int lastVal = list[list.size() - 1];
            list[todoRemoveIdx] = lastVal;
            mapVal2Idx[lastVal] = todoRemoveIdx;
        }
        list.pop_back();
        return true;
    }
    
    int getRandom() {
        return list[rand() % list.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
