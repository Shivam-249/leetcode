class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;

        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                curr->next = l1;
                l1 = l1->next;
            } else {
                curr->next = l2;
                l2 = l2->next;
            }

            curr = curr->next;
        }

        if (l1 != nullptr)
            curr->next = l1;

        if (l2 != nullptr)
            curr->next = l2;

        return dummy->next;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;

        int k = lists.size();

        while (k > 1) {
            int i = 0;
            int j = 0;

            while (i < k) {
                if (i + 1 < k)
                    lists[j++] = mergeTwoLists(lists[i], lists[i + 1]);
                else
                    lists[j++] = lists[i];

                i += 2;
            }

            k = j;
        }

        return lists[0];
    }
};
