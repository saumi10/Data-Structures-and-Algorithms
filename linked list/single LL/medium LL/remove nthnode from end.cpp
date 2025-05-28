//19.https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthNode(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        ListNode* fast=head;
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        if(fast==NULL){ //i.e we wanna remove head ,i.e n=size of linked list
            ListNode* delNode=head;
            return head->next;
            free(delNode);
        }
        ListNode* slow=head;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* delNode=slow->next;
        slow->next=slow->next->next;
        free(delNode);
        return head;
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
    head= removeNthNode(head,n);
    

    // Now ,traversing and printing the LL
    ListNode *temp = head;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}    