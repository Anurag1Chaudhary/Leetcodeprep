/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder1(TreeNode* root, vector<int> &res) {
        if (root == NULL) return;
        
        stack<TreeNode*> st;
        st.push(root);
        
        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            res.push_back(node->val);
            
            if (node->right) st.push(node->right);
            if (node->left) st.push(node->left);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorder1(root, res);
        return res;
    }
};