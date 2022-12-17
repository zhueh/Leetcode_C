/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <stdio.h>
struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
struct TreeNode *minTree(int *nums, int left, int right)
{
    if (left > right)
    {
        return NULL;
    }
    int mid = (left + right) >> 1;
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = nums[mid];
    root->left = minTree(nums, left, mid - 1);
    root->right = minTree(nums, mid + 1, right);
    return root;
}
struct TreeNode *sortedArrayToBST(int *nums, int numsSize)
{
    return minTree(nums, 0, numsSize - 1);
}