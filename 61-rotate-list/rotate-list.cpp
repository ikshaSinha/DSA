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

    ListNode* findK(ListNode*head,int cnt){
        ListNode* temp=head;
        while(cnt>1){
            temp=temp->next;
            cnt--;
        }    
        return temp;    
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* tail=head;
        int len=1;
        while(tail->next!=NULL){
            tail=tail->next;
            len++;
        }
            if(k%len==0) return head;
                k=k%len;
                int cnt=len-k;
                tail->next=head;
                ListNode* temp=findK(head , cnt);
                ListNode* newHead=temp->next;
                temp->next=NULL;
                
            
            return newHead;
    }
};