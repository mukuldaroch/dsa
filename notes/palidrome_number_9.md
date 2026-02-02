# My Approach
```cpp
class Solution {
public:
  bool isPalindrome(int x) {
    int dup = x;
    long rev = 0;
    while (dup > 0) {
      int y = dup % 10;
      rev = (rev * 10) + y;
      dup = dup / 10;
    }
    return x == rev;
  }
};
```
# Optimised Approach
```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        int onum=x;
        if(x<0){return false;}
        int rem,rev=0;
        while(x!=0){
            rem= x%10;
            if(rev > INT_MAX/10){return false;}
            rev=rev*10+rem;
            x=x/10;
        }
        if(onum==rev){return true;}
        else{return false;}
    }
};
```
