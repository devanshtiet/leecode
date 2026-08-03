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
        if(head==NULL || head->next==NULL || head->next->next==NULL)
            return {-1,-1};
        vector<int>critical;
        ListNode* prev=head;
        ListNode*curr=head->next;
        int index=1;
        while(curr->next!=NULL)
        {
            ListNode* next=curr->next;
            bool maxima=(curr->val>prev->val && curr->val>next->val);
            bool minima=(curr->val<prev->val && curr->val<next->val);
            if(maxima || minima){
                critical.push_back(index);
            }
            prev=curr;
            curr=next;
            index++;


        }
        if(critical.size()<2){
            return{-1,-1};
        }
        int mini=INT_MAX;
        for(int i=1;i<critical.size();i++){
            mini=min(mini,critical[i]-critical[i-1]);
        }
        int maxi=critical.back()-critical.front();
        return {mini,maxi};
        
    }
};