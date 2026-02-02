# My approach

```cpp
class Solution {
  public:
    ListNode *deleteMiddle(ListNode *head) {
        if (head->next == nullptr) {
            return nullptr;
        }
        if (head->next->next == nullptr) {
            head->next = nullptr;
            return head;
        }
        ListNode *temp = head;
        int count = 0;
        while (temp) {
            temp = temp->next;
            count++;
        }
        count = count / 2;
        ListNode *temp2 = head;
        for (int i = 1; i < count; i++) {
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
    }
};
```

# Better Code

```cpp
class Solution {
  public:
    ListNode *deleteMiddle(ListNode *head) {
        if (!head || !head->next) {  // If only one node is present, return nullptr.
            delete head;
            return nullptr;
        }

        ListNode *slow = head, *fast = head, *prev = nullptr;

        // Using slow and fast pointer approach to find middle node
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node
        prev->next = slow->next;
        delete slow; // Prevent memory leak

        return head;
    }
};
```

# Optimised Approach

```cpp
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
         if(!head || !head->next)
        {
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head->next->next;
        while( fast!= NULL && fast->next != NULL )
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};
```
# Learnings 
1) It is a good practice to delete nodes for the interview 
2) Fast and Slow pointer pattern 

