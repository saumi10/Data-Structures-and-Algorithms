 /*
 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1=l1;
        ListNode* t2=l2;
        ListNode* t3Head=new ListNode();
        ListNode* temp=t3Head;
        int carry=0;
        while(t1!=NULL || t2!=NULL){
            int sum=0;
            if(t1==NULL){
                sum=t2->val+carry;
                t2=t2->next;
            }
            else if(t2==NULL){
                sum=t1->val+carry;
                t1=t1->next;
            }
            else{
                sum=t1->val+t2->val+carry;
                t1=t1->next;
                t2=t2->next;
            }
            if(sum>=10){
                sum-=10;
                carry=1;
            }
            else{
                carry=0;
            }
           
            temp->next=new ListNode(sum);
            temp=temp->next;
            
            
        }
        if(carry==1){
            ListNode* newTail=new ListNode(1);
            temp->next=newTail;
            

        }
        return t3Head->next;
        
        

    }
*/
