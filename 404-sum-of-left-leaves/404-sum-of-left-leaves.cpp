/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int sumOfLeftLeaves(TreeNode *root)
        {

            int sum = 0;
            fun(root, sum,-1);
            return sum;
        }

    void fun(TreeNode *root, int &sum,int dir)
    {

        if (root == NULL)
        {
            return;
        }

        fun(root->left,sum,0);

        if (root->left == NULL && root->right == NULL && dir ==0)
        {
            sum += root->val;
            return;
        }
        fun(root->right,sum,1);
    }
};