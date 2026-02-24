
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int length=0;
        ListNode* temp=head;
        while(temp !=NULL){
            length++;
            temp= temp->next;
        }
        if(length==1)return NULL;
        int middle= length/2;
        ListNode*prev=head;
        ListNode*agge= head;
        while(middle!=0){
            prev=agge;
            agge= agge->next;
            middle--;
        } 
        prev->next= agge->next;
        delete(agge);
        return head;
    }
};