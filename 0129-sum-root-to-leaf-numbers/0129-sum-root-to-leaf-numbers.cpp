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
    int path_sum(TreeNode *root,int sum){
        if(root == NULL){
            return 0;
        }

        sum = sum*10+ root->val ;

        if(root->left == NULL && root->right == NULL){
            return sum;
        }

        int left_sum = path_sum(root->left,sum);
        int right_sum = path_sum(root->right,sum);
        return left_sum+right_sum;

    }


    int sumNumbers(TreeNode* root) {

        return path_sum(root,0);
    }
};