#include <bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//t.c=O(3N) s.c=O(1) brute force 
/*

Node* reverse(Node* head) {
        
        Node* temp=head;
        Node* prev=nullptr;
        while(temp!=NULL){
            //storing before changing link
            Node* front=temp->next;
            temp->next=prev;
            //moving forward
            prev=temp;
            temp=front;
        }
        return prev;
}
    Node* addOne(Node* head) {
        // Your Code here
        head=reverse(head);
        int carry=1;
        Node* temp=head;
        while(temp!=NULL){
            temp->data+=carry;
            if(temp->data<10){
                carry=0;
                break;
            }
            else{
                temp->data=0;
            }
            temp=temp->next;
        }
        head=reverse(head);
        if(carry==1){
            Node* newHead=new Node(1);
            newHead->next=head;
            return newHead;
        }
        return head;
        
        // return head of list after adding one
    }
*/

int helper(ListNode* temp){
    if(temp==NULL){
        return 1;
    }
    int carry=helper(temp->next);
    temp->val+=carry;
    if(temp->val<10){
        return 0;
    }
    
        temp->val=0;
        return 1;
    
}

ListNode* myFunc(ListNode* head){
    int carry=helper(head);
    if(carry==1){
        ListNode* newHead=new ListNode(1);
        newHead->next=head;
        return newHead;
    }
    return head;
}

int main(){
    vector<int> v={1,2,3,4,5,6,7};
    ListNode * head=new ListNode (v[0]); // Create the head ListNode
    ListNode * mover=head; // Pointer to track the last ListNode
    for(int i=1;i<v.size();i++){
        ListNode * temp=new ListNode (v[i]);    // Create a new node
        mover->next=temp;    // Link the previous node to the new one
        mover=temp; // Move the pointer to the new node
    }
    
    head= myFunc(head);
    

    // Now ,traversing and printing the LL
    ListNode *temp = head;
    cout<<"Updated LL: ";
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

