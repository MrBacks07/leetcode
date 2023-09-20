#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root)
    {
        if (root == nullptr)
            return true;
        
        return isSymmetricHelper(root->left, root->right);
    }
    
    bool isSymmetricHelper(TreeNode* left, TreeNode* right) 
    {
        // Jeśli oba poddrzewa są puste, to są symetryczne.
        if (left == nullptr && right == nullptr)
            return true;
        
        // Jeśli tylko jedno z poddrzew jest puste, to nie są symetryczne.
        if (left == nullptr || right == nullptr)
            return false;
        
        // Jeśli wartości węzłów lewego i prawego poddrzewa są różne, to nie są symetryczne.
        if (left->val != right->val)
            return false;
        
        // Rekurencyjnie sprawdzamy symetrię lewego i prawego poddrzewa.
        return isSymmetricHelper(left->left, right->right) && isSymmetricHelper(left->right, right->left);
    }
};

int main() {
    // Tworzenie drzewa [1, null, 2, 3]
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(2);

    Solution solution;

    cout << solution.isSymmetric(p);

    return 0;
}