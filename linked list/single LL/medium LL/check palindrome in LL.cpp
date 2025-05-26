/* T.C=O(N) S.C=O(N)
bool isPalindrome(ListNode* head) {
        ListNode *temp=head;
        string check="";
        while(temp!=NULL){
            check+=to_string(temp->val);
            temp=temp->next;
        }
        string checkRev="";
        for(int i=check.length()-1;i>=0;i--){
            checkRev+=check[i];
        }
        if(checkRev==check){
            return true;
        }
        else{
            return false;
        }
    }
*/

/* OPTIMAL SOLUTION

*/