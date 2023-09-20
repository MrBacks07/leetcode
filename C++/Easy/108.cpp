#include <iostream>
#include <vector>

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
    TreeNode* sortedArrayToBST(vector<int>& nums, int start, int end) 
    {
    if (start > end) {
        return nullptr; // Warunek zakończenia rekurencji
    }

    int mid = start + (end - start) / 2; // Znajdowanie środkowego indeksu
    TreeNode* root = new TreeNode(nums[mid]); // Tworzenie węzła z wartością środkowego elementu

    root->left = sortedArrayToBST(nums, start, mid - 1); // Tworzenie lewego poddrzewa
    root->right = sortedArrayToBST(nums, mid + 1, end); // Tworzenie prawego poddrzewa

    return root; // Zwracanie utworzonego drzewa
    }

    // Funkcja pomocnicza, która wywołuje główną funkcję sortedArrayToBST
    TreeNode* sortedArrayToBST(vector<int>& nums) 
    {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};