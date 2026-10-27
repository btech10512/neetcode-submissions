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
    void dfs(TreeNode* root,int &goodNodes,int maxVal) {
                if(!root) return;

                        if(root->val >= maxVal) {
                                    goodNodes++;
                                                maxVal = root->val;
                                                        }
                                                                dfs(root->left,goodNodes,maxVal);
                                                                        dfs(root->right,goodNodes,maxVal);
                                                                                return;
                                                                                    }
                                                                                        int goodNodes(TreeNode* root) {
                                                                                                int goodNodes = 0;

                                                                                                        dfs(root,goodNodes,root->val);

                                                                                                                return goodNodes;
                                                                                                                    
    }
};
