// #include <utility>
// #include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> mySet1(nums1.begin(), nums1.end());
        set<int> mySet2(nums2.begin(), nums2.end());
        unordered_map<int,int> umap_1;
        unordered_map<int,int> umap_2;
        vector<vector<int>> diff_1(2);
        for(auto it:mySet1) {
            ++umap_1[it];
        }
        
        for(auto it:mySet2) {
            ++umap_2[it];
        }

        for(auto it:mySet1){
            if(umap_2.find(it)==umap_2.end()){
                diff_1[0].push_back(it);
            }
        }

        for(auto it:mySet2){
            if(umap_1.find(it) == umap_1.end()){
                diff_1[1].push_back(it);
            }
        }
        return diff_1;
    }
};