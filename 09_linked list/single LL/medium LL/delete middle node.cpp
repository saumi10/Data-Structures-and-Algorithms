//2095.https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL){
            //even nodes
            if(fast->next->next==NULL || fast->next->next->next==NULL){
                ListNode* delNode=slow->next;
                slow->next=slow->next->next;
                return head;
                free(delNode);
            }
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return NULL;
    }

int main(){
    vector<int> v={1,2,3,4,5,6,7,53,38687,73,88,99,10,12};
    ListNode * head=new ListNode (v[0]); // Create the head ListNode
    ListNode * mover=head; // Pointer to track the last ListNode
    for(int i=1;i<v.size();i++){
        ListNode * temp=new ListNode (v[i]);    // Create a new node
        mover->next=temp;    // Link the previous node to the new one
        mover=temp; // Move the pointer to the new node
    }
    int n;
    cin>>n;
    head= deleteMiddle(head);
    

    // Now ,traversing and printing the LL
    ListNode *temp = head;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}    