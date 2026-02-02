# My Approach 
```cpp
class Solution {
  public:
    void deleteNode(ListNode *node) {
        node->val = node->next->val;
        if (node->next == nullptr) {
            return;
        }
        node->next = node->next->next;
    }
};
```
# Better Approach 
```cpp
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
```

