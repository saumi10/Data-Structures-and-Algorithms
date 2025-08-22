//328. https://leetcode.com/problems/odd-even-linked-list/
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        int count=1;
        ListNode* temp=head;
        ListNode* evenHead=head->next;
        while(temp!=NULL){
            //odd end case case
            if(count%2!=0 && temp->next==NULL){
                temp->next=evenHead;
                return head;
            }
            //even end case
            else if(count%2!=0 && temp->next->next==NULL){
                temp->next=evenHead;
                return head;
            }
            ListNode* front=temp->next;
            temp->next=temp->next->next;
            temp=front;
            count++;

        }
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
    
    head= oddEvenList(head);
    

    // Now ,traversing and printing the LL
    ListNode *temp = head;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}    