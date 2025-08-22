#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        prev = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node *convertArr2DLL(vector<int> &arr)
{
    // return type is a ptr
    //(which is pointing to the head)
    //  i.e Node*
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// Function to reverse a doubly linked list
Node *reverseDLL(Node *head)
{

    // edge case
    if (head->next == NULL || head == NULL)
        return head;

    Node *temp = head;
    Node *tempPrev = NULL;

    // swapping node links
    while (temp != NULL)
    {
        tempPrev = temp->prev;
        temp->prev = temp->next;
        temp->next = tempPrev;
        temp = temp->prev;
    }
    return tempPrev->prev;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 8, 5, 97, 42};
    Node *head = convertArr2DLL(arr);
    // cout << head->data << endl;

    head = reverseDLL(head);

    // Now ,traversing and printing the LL
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}