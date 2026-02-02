# My Approach
```cpp
class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length())
      return false;
    unordered_map<char, int> freq;
    for (char ch : s)
      freq[ch]++;
    for (char ch : t) {
      if (freq[ch] == 0)
        return false;
      freq[ch]--;
    }

    return true;
  }
};
```
# Optimised Approach
```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> res;
        for(auto i:s){
            res[i]++;
        }
        for(auto i:t){
            res[i]--;
        }
        for(auto i:res){
            if(i.second != 0){
                return false;
            }
        }
        return true;
    }
};
```
