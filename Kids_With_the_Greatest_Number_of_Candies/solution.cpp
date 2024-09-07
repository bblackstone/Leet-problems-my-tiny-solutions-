#include <algorithm>

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_value = *max_element(candies.begin(), candies.end());
        int index = 0;
        int result = 0;
        vector<bool> resultBool;
        for(int index=0; index < candies.size(); index++){
            result = candies[index] + extraCandies;
            if(result>=max_value){
                resultBool.push_back(true);
            }
            else
            resultBool.push_back(false);
            
        }
       
        return resultBool;
    }
};