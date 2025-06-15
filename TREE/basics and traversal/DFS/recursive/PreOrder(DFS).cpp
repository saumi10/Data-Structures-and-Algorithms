#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void preorder(TreeNode *root, vector<int> &order)
{
    if (root == NULL)
        return;
    order.push_back(root->val);
    preorder(root->left, order);
    preorder(root->right, order);
}
vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> order;
    preorder(root, order);
    return order;
}