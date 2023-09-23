#define _CRT_SECURE_NO_WARNINGS 1



//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//        return true;
//
//    if (p == NULL || q == NULL)
//        return false;
//
//    if (p->val != q->val)
//        return false;
//
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}

//
//bool isUnivalTree(struct TreeNode* root) {
//    if (root == NULL)
//        return true;
//
//    if (root->left && root->val != root->left->val)
//        return false;
//
//    if (root->right && root->val != root->right->val)
//        return false;
//
//    return isUnivalTree(root->left) && isUnivalTree(root->right);
//}


//void PreOrder(struct TreeNode* root, int* a, int* j)
//{
//    if (root == NULL)
//        return;
//
//    a[(*j)++] = root->val;
//    PreOrder(root->left, a, j);
//    PreOrder(root->right, a, j);
//}
//
//
//int* preorderTraversal(struct TreeNode* root, int* returnSize) {
//    int n = TraTree(root);
//    int* a = (int*)malloc(sizeof(int) * n);
//
//    int i = 0;
//    PreOrder(root, a, &i);
//
//    *returnSize = n;
//    return a;
//}


//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q == NULL)
//        return true;
//
//    if (p == NULL || q == NULL)
//        return false;
//
//    if (p->val != q->val)
//        return false;
//
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}
//
//
//bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot) {
//    if (root == NULL)
//        return false;
//
//    if (root->val == subRoot->val)
//    {
//        if (isSameTree(root, subRoot))
//            return true;
//        // return isSametree( , ) // err
//    }
//
//    //return isSameTree(root->left, subRoot) || isSametree(root, subRoot);
//    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
//}


