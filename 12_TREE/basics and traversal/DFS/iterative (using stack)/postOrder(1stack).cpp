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

//same as 2 stack just instead of 2 stack store directly in vector and reverse befre returning
vector<int> postorderTraversal(TreeNode* root) {
        vector<int> order;
        if(root==NULL) return order;

        stack<TreeNode*> st1;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* node = st1.top();
            st1.pop();
            order.push_back(node->val);
            if(node->left!=NULL)st1.push(node->left);
            if(node->right!=NULL)st1.push(node->right);
        }
        reverse(order.begin(),order.end());
        return order;
    }