#define _CRT_SECURE_NO_WARNINGS 1

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


//struct TreeNode* invertTree(struct TreeNode* root) {
//    if (root == NULL)
//        return NULL;
//
//    struct TreeNode* tmp = root->left;
//    root->left = root->right;
//    root->right = tmp;
//
//
//    invertTree(root->left);
//    invertTree(root->right);
//    return root;
//}

//
//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q != NULL)
//        return false;
//
//    if (p != NULL && q == NULL)
//        return false;
//
//    if (p == NULL && q == NULL)
//        return true;
//
//    if (p->val != q->val)
//        return false;
//
//    if (p->left && q->left && p->left->val != q->left->val)
//        return false;
//
//    if (p->right && q->right && p->right->val != q->right->val)
//        return false;
//
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}


//bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
//    if (p == NULL && q != NULL)
//        return false;
//
//    if (p != NULL && q == NULL)
//        return false;
//
//    if (p == NULL && q == NULL)
//        return true;
//
//    if (p->val != q->val)
//        return false;
//
//
//    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d %d", &n, &m);
//
//    int* Count = (int*)malloc(sizeof(int) * n);
//    memset(Count, 0, sizeof(int) * n);
//
//    int count = n;
//    int j = 0;
//    int num = 1;
//    while (count > 1)
//    {
//        if (Count[j] != m)
//        {
//            Count[j] = num++;
//            if (Count[j] == m)
//            {
//                count--;
//            }
//        }
//        
//        j++;
//        if (j >= n)
//        {
//            j = 0;
//        }
//        if (num > m)
//        {
//            num = 1;
//        }
//
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        if (Count[i] != m)
//        {
//            printf("%d\n", i + 1);
//        }
//    }
//    return 0;
//}


