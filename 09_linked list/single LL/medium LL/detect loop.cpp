/*

bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        bool check=false;
        while(fast!=NULL && fast->next!=NULL){
            
            if(fast->next==slow || fast==slow){
                check=true;
                break;
            }
            slow=slow->next;
            fast=fast->next->next;
        }
        return check;

}

*/