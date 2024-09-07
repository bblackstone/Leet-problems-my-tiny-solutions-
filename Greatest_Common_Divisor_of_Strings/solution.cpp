// Online C++ compiler to run C++ program online
#include <algorithm>
#include <iostream>
#include <set>
#include <string>
using namespace std;
class Solution {
public:
    // string gcdOfStrings(string str1, string str2) {

    //     if (str1 == str2.substr(0, str1.size()) || str2 == str1.substr(0, str2
        .size())) {
    //     string elements = min(str1, str2); 
    //     set<char> mySet;

        
    //     for (char it : elements) {
    //         mySet.insert(it);
    //     }

    //     string result;
    //     for (char str3 : mySet) {
    //         result += str3;
    //     }

    //     return result;
    // } else {
    //     return "";
    // }
    // }

    bool valid(string str1, string str2, int k) {
        int len1 = str1.size(), len2 = str2.size();
        if (len1 % k > 0 || len2 % k > 0) {
            return false;
        } else {
            string base = str1.substr(0, k);
            int n1 = len1 / k, n2 = len2 / k;
            return str1 == joinWords(base, n1) && str2 == joinWords(base, n2);
        }
    }
    string joinWords(string str, int k) {
        string ans = "";
        for (int i = 0; i < k; ++i) {
            ans += str;
        }
        return ans;
    }
    
    
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length(), len2 = str2.length();
        for (int i = min(len1, len2); i >= 1; --i) {
            if (valid(str1, str2, i)) {
                return str1.substr(0, i);
            }
        }
        return "";
    }

};