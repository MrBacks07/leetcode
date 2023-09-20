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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr) 
            return true;

        if (p == nullptr || q == nullptr) 
            return false;

        if (p->val != q->val) 
            return false;
        
        if (!isSameTree(p->left, q->left) || !isSameTree(p->right, q->right))
            return false;

        return true;
    }
};

int main() {
    // Tworzenie drzewa [1, null, 2, 3]
    TreeNode* p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->left = new TreeNode(3);

    TreeNode* q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->left = new TreeNode(3);

    Solution solution;

    cout << solution.isSameTree(p,q);

    return 0;
}
