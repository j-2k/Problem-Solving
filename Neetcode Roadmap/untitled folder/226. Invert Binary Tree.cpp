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
    TreeNode* PostOrderTraversal(TreeNode* currNode)
    {
        if(currNode == nullptr)
            return nullptr;

        
        PostOrderTraversal(currNode->left);

        PostOrderTraversal(currNode->right);

        cout << currNode->val << ',';
        TreeNode* temp = currNode->left;
        currNode->left = currNode->right;
        currNode->right = temp;
        return currNode;
    }

public:
    TreeNode* invertTree(TreeNode* root) {

        return PostOrderTraversal(root);
    }
};
