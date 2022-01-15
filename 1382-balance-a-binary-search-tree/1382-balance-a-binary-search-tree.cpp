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
// class Solution {
// public:
//     void helper(TreeNode*root,vector<int>&values){
//         if(root==NULL)return;
        
//         values.push_back(root->val);
        
        
//         helper(root->left,values);
//         helper(root->right,values);
//         return;
        
//     }
    
    
    
    
//     TreeNode* balanceBST(TreeNode* root) {
//         if(root==NULL) return NULL;
//         vector<int>values;
//         helper(root,values);
            
//           sort(values.begin(),values.end());
        
//         int l=0;
//         int r=values.size()-1;
        
//         return Btree(l,r,values);
        
//     }
    
//     TreeNode *Btree(int l,int r,vector<int>v){
//         if(l>r) return NULL;
//         int mid =l+(r-l)/2;
//         TreeNode *root=new TreeNode(v[mid]);
//         root->left=Btree(l,mid-1,v);
//         root->right=Btree(mid+1,r,v);
//         return root;
//     }
    
// };
class Solution {
public:
    vector<TreeNode*> sortedArr;
    TreeNode* balanceBST(TreeNode* root) {
        inorderTraverse(root);
        return sortedArrayToBST(0, sortedArr.size() - 1);
    }
    void inorderTraverse(TreeNode* root) {
        if (root == NULL) return;
        inorderTraverse(root->left);
        sortedArr.push_back(root);
        inorderTraverse(root->right);
    }
    TreeNode* sortedArrayToBST(int start, int end) {
        if (start > end) return NULL;
        int mid = (start + end) / 2;
        TreeNode* root = sortedArr[mid];
        root->left = sortedArrayToBST(start, mid - 1);
        root->right = sortedArrayToBST(mid + 1, end);
        return root;
    }
};