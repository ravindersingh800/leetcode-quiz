
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
       int length=0;
       ListNode*temp= head;
       while(temp!=NULL){
        length++;
        temp= temp->next;
       } 
       int middle=length/2;
       ListNode*remp= head;
       while(middle!=0){
        remp= remp->next;
        middle--;
       }
       return remp;
    }
};