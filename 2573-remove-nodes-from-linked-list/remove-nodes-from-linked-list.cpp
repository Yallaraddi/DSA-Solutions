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
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        ListNode* temp = head;
        ListNode* previ = NULL;
        ListNode* front;
        while (temp != NULL) {
            front = temp->next;
            temp->next = previ;
            previ = temp;
            temp = front;
        }
        ListNode* curr = previ;
        // ListNode* dummy = new ListNode(-1);
        ListNode* bc = NULL;
        ListNode* newnode=NULL;
        while (curr != NULL) {
            while (!st.empty() && curr->val >= st.top()) {
                st.pop();
            }

            if (st.empty()) {
                newnode = new ListNode(curr->val);
                if(bc!=NULL){
                newnode->next=bc;}
                bc = newnode;
            }
            st.push(curr->val);
            curr=curr->next;
        }
        return newnode;
    }
};