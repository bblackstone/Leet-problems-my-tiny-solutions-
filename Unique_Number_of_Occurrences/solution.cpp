#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> ocur_map;
        unordered_set<int> check_uni;
        for(auto it:arr) {
            ++ocur_map[it];
        }

        for(auto it:ocur_map){
            if(!check_uni.insert(it.second).second) return false;
        }
        return true;

        

    }
};