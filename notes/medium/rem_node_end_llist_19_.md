# My Approach 
```cpp
class Solution {
  public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        if (count == n) {
            return head->next;
        }
        ListNode *temp2 = head;
        for (int i = 0; i < count - n - 1; i++) {
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
    }
};
```
# Better Approach/Code 
```cpp
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast=head;
        ListNode* slow=head;
      
        while(n>0){
            fast=fast->next;
            n--;
        }
        
        if(fast==NULL)
        return head->next;
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow->next==NULL)
        return NULL;
        slow->next=slow->next->next;
        return head;
    }
};
```
# Learnings 
1) fast and slow ponter pattern 

