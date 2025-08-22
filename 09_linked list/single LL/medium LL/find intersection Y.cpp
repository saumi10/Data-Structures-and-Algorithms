#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* t1=headA;
        ListNode* t2 =headB;
        if(headA==NULL || headB==NULL){
            return NULL;
        }

        while(t1!=t2){
            t1=t1->next;
            t2=t2->next;
            if(t1==t2){
                return t1;
            }
            if(t1==NULL){
                t1=headB;
            
            }
            if(t2==NULL){
                t2=headA;
            }
            
        }
        return t1;
    }
int main(){
    vector<int> v1={1,2,3,4,5,6,7,53,38687,200000};
    ListNode * head1=new ListNode (v1[0]); // Create the head ListNode
    ListNode * mover1=head1; // Pointer to track the last ListNode
    for(int i=1;i<v1.size();i++){
        ListNode * temp=new ListNode (v1[i]);    // Create a new node
        mover1->next=temp;    // Link the previous node to the new one
        mover1=temp; // Move the pointer to the new node
    }
    vector<int> v2={0,4,4,9,54};
    ListNode * head2=new ListNode (v2[0]); // Create the head ListNode
    ListNode * mover2=head2; // Pointer to track the last ListNode
    for(int i=1;i<v2.size();i++){
        ListNode * temp=new ListNode (v2[i]);    // Create a new node
        mover2->next=temp;    // Link the previous node to the new one
        mover2=temp; // Move the pointer to the new node
    }
    int n;
    cin>>n;
    head1= getIntersectionNode(head1,head2);
    

    // Now ,traversing and printing the LL
    ListNode *temp = head1;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}        