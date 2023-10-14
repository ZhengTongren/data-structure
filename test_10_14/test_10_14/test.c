#include <stdio.h>

//
//int maxDepth(struct TreeNode* root) {
//    if (root == NULL)
//        return 0;
//
//    int height1 = maxDepth(root->left);
//    int height2 = maxDepth(root->right);
//    int height = height1 > height2 ? height1 : height2;
//
//
//    return height + 1;
//}


//bool isUnivalTree(struct TreeNode* root) {
//    if (root == NULL)
//        return true;
//
//    if (root->left && root->val != root->left->val)
//        return false;
//
//
//    if (root->right && root->val != root->right->val)
//        return false;
//
//    return isUnivalTree(root->left) && isUnivalTree(root->right);
//}


