class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
    // if(strs.empty()){
    //     return "";
    // }
    //sorting the strstor
    sort(strs.begin(), strs.end());
    // holding the first and last string
    string first = strs[0];
    string last = strs[strs.size()-1];
    int index = 0;
    while(index < first.size() && index < last.size() && first[index] == last[index]) 
        {
        result += first[index];
        index++;
    }

    return result;
    }
    
};