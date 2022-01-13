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
    
 
    
    
//  //using bfs
//     int deepestLeavesSum(TreeNode* root) {
// //queue
//         // so basically we will find sum of 
//         int level_sum=0;
//         //we pushed the root in queue
//         queue<TreeNode*>q;
//         q.push(root);
        
//         while(!q.empty()){
//             level_sum=0; // initialize everytime with 0
//             int size = q.size(); //this is the size of the queue
//             //this loop is for traversing the level
            
//             for(int i=0;i<size;i++){
                
//                 TreeNode *n = q.front(); 
//                 level_sum += n->val;
//                 q.pop();
//                 if(n->left){
//                     q.push(n->left);
//                 }
//                 if(n->right){
//                     q.push(n->right);
//                 }
                
                
//             }
//         }
//         return level_sum;
        
         
//     }
    int deepest = 0, sum = 0;
int deepestLeavesSum(TreeNode* root, int depth = 0) {
	if(!root) return 0;  // current node is NULL - just return.
	if(!root -> left && !root -> right) // if current is a leaf node
		if(depth == deepest) sum += root -> val;  // if depth is exactly equal to deepest, add to sum
		else if(depth > deepest) sum = root -> val, deepest = depth; // found a more deeper leaf node, reset sum and update deepest
	deepestLeavesSum(root -> left, depth + 1);   // recurse for the left, 
	deepestLeavesSum(root -> right, depth + 1);  // and the right node of the current node
	return sum; // finally return the sum accumulated till now which will be sum of value of deepest leaves
}
};