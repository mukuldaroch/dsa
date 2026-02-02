# My Appraoch 
```cpp
class Solution {
  public:
    bool hasCycle(ListNode *head) {
        struct ListNode *slow = head, *fast = head;
        while (slow != nullptr || fast != nullptr) {
            if (slow == fast) {
                if (fast == head) {
                    return 1;
                } 
            }
            slow = head->next;
            fast = head->next->next;
        }
        return 0;
    }
};
```
# Better Appraoche 
```cpp
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        if (!head) {
            return false;
        }
        ListNode* p = head;
        ListNode* q = head;

        while (q != nullptr && q->next != nullptr) {
            p = p->next;
            q = q->next->next;

            if (p == q) {
                return true;
            }
        }
        return false;
    }
};       
```

# Better Appraoche 
```cpp
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL or head->next == NULL) return 0;
        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast != slow){
            if(fast->next == NULL){
                return 0;
            }

            if(fast->next->next == NULL) return 0;

            slow = slow->next;
            fast = fast->next->next;
        }

        return 1;

    
    }
};
```

# Optimised Appraoch 
```cpp
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL){
            return false;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow) return true;
        }
        return false;
    }
};
```
# Learnings 
1) fast and slow pointers in llist
2) circular llist
3) ❌ while (q != nullptr && q->next != nullptr)
      > Ensures that the fast pointer can take one step — but not necessarily two.
      > If q->next is valid but q->next->next is invalid, it could still cause a segmentation fault when you try to move q two steps forward.

4) ✅ while (fast->next && fast->next->next)
      > Ensures that the fast pointer can safely take two steps.
      > Stops early if fast cannot take two steps — which is exactly what we need for the fast and slow pointer technique.
