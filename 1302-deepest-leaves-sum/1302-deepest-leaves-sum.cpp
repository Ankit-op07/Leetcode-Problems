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
  //Dfs lagaunga me to
    
 
    
    
 //using bfs
    int deepestLeavesSum(TreeNode* root) {
//queue
        // so basically we will find sum of 
        int level_sum=0;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            level_sum=0; // initialize everytime with 0
            int size = q.size(); //this is the size of the queue
            for(int i=0;i<size;i++){
                
                TreeNode *n = q.front(); 
                level_sum += n->val;
                q.pop();
                if(n->left){
                    q.push(n->left);
                }
                if(n->right){
                    q.push(n->right);
                }
                
                
            }
        }
        return level_sum;
        
         
    }
};