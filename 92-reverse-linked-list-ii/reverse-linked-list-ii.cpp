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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        vector<int>result;
        while(temp!=NULL){
            result.push_back(temp->val);
            temp=temp->next;
        }
        reverse(result.begin()+left-1,result.begin()+right);

        ListNode* resultt=new ListNode(0);
        ListNode* finall=resultt;
        for(int i=0;i<result.size();i++){
            resultt->next=new ListNode(result[i]);
            resultt=resultt->next;

        }
        return finall->next;
    }
};