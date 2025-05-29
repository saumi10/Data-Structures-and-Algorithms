#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeTwoSortedLL(ListNode* head1,ListNode* head2) {
    ListNode* t1=head1;
    ListNode* t2=head2;

    ListNode* dummy=new ListNode(-1);
    ListNode* temp=dummy;

    while(t1!=NULL && t2!=NULL){
        if(t1->val <= t2->val){
            temp->next=t1;
            temp=temp->next;
            t1=t1->next;
        }
        else{
            temp->next=t2;
            temp=temp->next;
            t2=t2->next;
        }
    }
    if(t1!=NULL){
        temp->next=t1;
        t1=t1->next;
    }
    else if(t2!=NULL){
        temp->next=t2;
        t2=t2->next;
    }
    return dummy->next;




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
    head1= mergeTwoSortedLL(head1,head2);
    

    // Now ,traversing and printing the LL
    ListNode *temp = head1;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}    