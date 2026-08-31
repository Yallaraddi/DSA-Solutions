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
        ListNode* curr=head->next;
        ListNode* previ=head;
        ListNode* front=head->next->next;
        vector<int> ans;
        int idx=2;
        int maxd=INT_MIN,mind=INT_MAX;
        vector<int> arr;
        while(curr->next!=NULL){
            if(curr->val > previ->val && curr->val > front->val){
                arr.push_back(idx);
            }else if(curr->val < previ->val && curr->val < front->val){
                arr.push_back(idx);
            }
            previ=curr;
            curr=front;
            front=front->next;
            idx++;
        }
        int n=arr.size();
        if(n==0 || n==1){
            return {-1,-1};
        }
        maxd=arr[n-1]-arr[0];
        for(int i=1;i<n;i++){
            int dis=arr[i]-arr[i-1];
            mind=min(mind,dis);
            if(mind==1){
                break;
            }
        }
        return {mind,maxd};
    }
};