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
        ListNode* curr=previ;
        int maxi=-1;
        ListNode* newnode=NULL;
        ListNode* bc=NULL;
        while(curr!=NULL){
            if(curr->val >= maxi){
                newnode=new ListNode(curr->val);
                if(bc!=NULL){
                    newnode->next=bc;
                }
                bc=newnode;
                maxi=curr->val;
            }
            curr=curr->next;
        }
        return newnode;
    }
};