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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *dum=new ListNode(0);
        ListNode *sum2=dum;
        ListNode *curr=head->next;
        ListNode * temp=head;
        int sum=0;
        while(curr!=NULL){
            if(curr->val!=0){
                sum=sum+curr->val;
        }
        else{
        dum->next=new ListNode(sum);
        dum=dum->next;
        sum=0;
        }
         curr=curr->next;

        }
        return sum2->next;
    }
};