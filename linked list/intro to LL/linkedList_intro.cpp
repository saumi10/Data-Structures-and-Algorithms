#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
};

int main()
{
    vector<int> arr = {1, 2, 4, 9};
    Node *y = new Node(arr[2], nullptr);
    cout << y->data+2 << endl; // prints the memory location to which y is pointing
}