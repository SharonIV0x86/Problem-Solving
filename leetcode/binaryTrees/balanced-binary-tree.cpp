/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };     remember this->>>>>>>              // Height of left ST - height of right ST <= 1
 */
//OPTIMAL AF, BEATS 100%%%
class Solution {
public:
    int dfsHeight(TreeNode* node){
        if(node == nullptr)
            return 0;
        
        int lh = dfsHeight(node->left);
        if(lh == -1) return -1;
        int rh = dfsHeight(node->right);
        if(rh == -1) return -1;

        if(std::abs(lh - rh) > 1) return -1;
    
        return std::max(lh, rh) + 1;
    }
    bool isBalanced(TreeNode* root) { 
        if(dfsHeight(root) == -1)
            return false;
        else
            return true;
     }
};



// BRUTE BRUH!!
class Solution
{
public:
    int getSubTreeHeight(TreeNode *node)
    {
        if (node == nullptr)
            return 0;
        int lh = getSubTreeHeight(node->left);
        int rh = getSubTreeHeight(node->right);

        return 1 + max(lh, rh);
    }
    void inorder(TreeNode *root, std::vector<TreeNode *> &vec)
    {
        if (root == NULL)
            return;

        inorder(root->left, vec);
        vec.push_back(root);
        inorder(root->right, vec);
    }
    bool isBalanced(TreeNode *root)
    {

        std::vector<TreeNode *> in;
        inorder(root, in);
        for (int i = 0; i < in.size(); i++)
        {
            int l = getSubTreeHeight(in[i]->left);
            int r = getSubTreeHeight(in[i]->right);
            if (std::abs(l - r) != 1 && std::abs(l - r) != 0)
                return false;
        }
        return true;
    }
};