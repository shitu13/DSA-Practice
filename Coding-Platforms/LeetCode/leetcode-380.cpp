// Insert Delete GetRandom O(1) - LEETCODE 380


class RandomizedSet {
    vector<int> v;
    unordered_map<int, int> mp;

public:
    RandomizedSet() {}

    bool insert(int val) {
        if (mp.find(val) != mp.end())
            return false;

        v.push_back(val);
        mp[val] = v.size() - 1;
        return true;
    }

    bool remove(int val) {
        if (mp.find(val) == mp.end())
            return false;

        int idx = mp[val];
        int lastElement = v.back();
        v.back() = val;

        v[idx] = lastElement;
        mp[lastElement] = idx;
        v.pop_back();
        mp.erase(val);
        return true;
    }

    int getRandom() {
        int n = v.size();
        int ranidx = rand() % n;
        return v[ranidx];
    }
};