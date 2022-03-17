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
class FindElements {
public:
    //constructor
    unordered_set<int>st;
    
    
    void helper(TreeNode *root,int parent){
        if(root==NULL) return;
        root->val=parent;
        st.insert(parent);
        
        int left=2*parent+1;
        int right=2*parent+2;
        
        helper(root->left,left);
        helper(root->right,right);
    }
    FindElements(TreeNode* root) {
      helper(root,0);  
    }
    
    bool find(int target) {
       
       if(st.find(target)!=st.end()){
           return true;
       } 
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */