/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow_p=head;
        ListNode *fast_p=head;
        ListNode *entry=head;
        while(fast_p!=NULL && fast_p->next!=NULL)
        {
            slow_p=slow_p->next;
            fast_p=fast_p->next->next;
            if(slow_p==fast_p)
            break;
        }
        if(fast_p==NULL || fast_p->next==NULL)
        return 0;
        while(entry!=slow_p)
        {
            entry=entry->next;
            slow_p=slow_p->next;
        }
        return entry;
    }
};