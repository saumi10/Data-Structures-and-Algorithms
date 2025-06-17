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

vector<int> traversal(TreeNode* root) {
        vector<int> order;
        stack<pair<TreeNode*,int>> st;
        st.push({root,1});

        vector<int>pre,in,post;
        if(root==NULL) return;

        while(!st.empty()){
            auto it =st.top();
            st.pop();
            //pre
            if(it.second==1){//step1:check
                pre.push_back(it.first->val); //step2:push in respective vector
            
                it.second++;//make change and push it back in stack
                st.push(it);
                if(it.first->left!=NULL){//check if left exist , go left for pre
                   st.push({it.first->left,1});
                }
            }

            //inorder
            if(it.second==2){//step1:check
                in.push_back(it.first->val);//step2:push in respective vector
                it.second++;//make change and push it back in stack
                st.push(it);
                if(it.first->right!=NULL){//check if right exist , go right for in
                    st.push({it.first->right,1});
                }
            }
            //post i.e (it.second==3)
            else{
                post.push_back(it.first->val);
                //dont push it back in the stack now
            }
            
        }
    }