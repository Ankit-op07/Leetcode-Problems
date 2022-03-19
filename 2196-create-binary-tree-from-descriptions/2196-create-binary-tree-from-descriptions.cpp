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
    TreeNode* createBinaryTree(vector<vector<int>>& des) {
        unordered_map<int,TreeNode*>mpp;
        unordered_set<int>par;
        unordered_set<int>ch;
        for(auto v:des){
            int parent=v[0];
            int child=v[1];
            int b=v[2];
            par.insert(parent);
            ch.insert(child);
            if(mpp.find(parent)==mpp.end()){
                TreeNode* node=new TreeNode(parent);
                mpp[parent]=node;
            }
            
            if(b==1){
                if(mpp.find(child)!=mpp.end()){
                    mpp[parent]->left=mpp[child];
                }else{
                TreeNode* node=new TreeNode(child);
                mpp[parent]->left=node;
                mpp[child]=node;
                }
                
            }else{
                   if(mpp.find(child)!=mpp.end()){
                    mpp[parent]->right=mpp[child];
                }else{
                TreeNode* node=new TreeNode(child);
                mpp[parent]->right=node;
                mpp[child]=node;
                }
            }
            
           
        }
        TreeNode*root;
        for(auto s:par){
            if(ch.find(s)==ch.end()){
                root=mpp[s];
            }
        }
        return root;
        
    }
};