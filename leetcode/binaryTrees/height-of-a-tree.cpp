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
//BETTER/OPTIMAL BRUH
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;

        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);
        return 1 + std::max(leftHeight, rightHeight);
    }
};



// BRUTE!! LEVEL ORDER TRAVERSAL
class Solution {
public:
    int maxDepth(TreeNode* root) {
        std::vector<int> in;
        std::vector<std::vector<int>> ans;
        if(root == nullptr)
            return 0;
        std::queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            std::vector<int> level;
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left != nullptr)
                    q.push(node->left);
                if(node->right != nullptr)
                    q.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans.size();
    }
};