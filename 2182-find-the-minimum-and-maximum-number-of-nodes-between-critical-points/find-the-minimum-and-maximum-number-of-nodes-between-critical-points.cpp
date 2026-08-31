/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* curr = head->next;
        ListNode* previ = head;
        ListNode* front = head->next->next;
        vector<int> ans;
        int idx = 2;
        int first = 0, last = 0, mindist = INT_MAX, prev_idx = 0;

        while (curr->next != NULL) {
            if ((curr->val > previ->val && curr->val > front->val) ||
                (curr->val < previ->val && curr->val < front->val)) {
                if (first == 0) {
                    first = idx;
                } else {
                    mindist = min(mindist, idx - prev_idx);
                }
                last = idx;
                prev_idx = idx;
            }
            previ = curr;
            curr = front;
            front = front->next;
            idx++;
        }
        if (first == 0 || last == 0 || first==last) {
            return {-1, -1};
        }
        return {mindist, last - first};
    }
};