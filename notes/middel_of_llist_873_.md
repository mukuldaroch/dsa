# My Approach 
```cpp
class Solution {
  public:
    ListNode *middleNode(ListNode *head) {
        struct ListNode *temp = head, *temp2 = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        count /= 2;
        for (int i = 0; i < count; i++) {
            temp2 = temp2->next;
        }
        return temp2;
    }
};
```
# Better Approach 
```cpp
ListNode* middleNode(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
```
# Learnings 
1) fast and slow pointer in linked list
