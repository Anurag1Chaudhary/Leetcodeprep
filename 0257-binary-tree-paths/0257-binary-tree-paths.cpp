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
    string convert(vector<int> &path)
    {
        string ans="";
        for(int i=0;i<path.size()-1;i++)
        {
            ans+=to_string(path[i]);
            ans.push_back('-');
            ans.push_back('>');
        }
        ans+=to_string(path[path.size()-1]);
        return ans;
    }
    void solve(TreeNode* root,vector<int> &path,vector<string> &ans)
    {
        if(!root) return ;
        path.push_back(root->val);
        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(convert(path));
        }
        solve(root->left,path,ans);
        solve(root->right,path,ans);
        path.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<int> path;
        vector<string> ans;
       
        solve(root,path,ans);
        return ans;
    }
};