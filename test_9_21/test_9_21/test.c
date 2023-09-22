#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType val;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;


BTNode* BTBuyNode(BTDataType x)
{
	BTNode* tmp = (BTNode*)malloc(sizeof(BTNode));
	if (tmp == NULL)
	{
		perror("malloc");
		exit(-1);
	}

	tmp->val = x;
	tmp->left = tmp->right = NULL;
	return tmp;
}


void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%d ", root->val);
	PrevOrder(root->left);
	PrevOrder(root->right);
}


void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ", root->val);
	InOrder(root->right);
}


void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->val);
}


int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	else if (root->left != root->right)
	{
		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
	}
	else
	{
		return 1;
	}
}


int BinaryTreeLevelKSize(BTNode* root, int k)
{
	//assert(root);
	assert(k > 0);

	if (root == NULL)
	{
		return 0;
	}
	else if (k == 1)
	{
		return 1;
	}
	else
	{
		return BinaryTreeLevelKSize(root->left, k - 1) + BinaryTreeLevelKSize(root->right, k - 1);
	}
}

//
//BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
//{
//	if (root->val == x)
//	{
//		return root;
//	}
//	if (x > root->val)
//	{
//		return BinaryTreeFind(root->right, x);
//	}
//	if (x < root->val)
//	{
//		return BinaryTreeFind(root->left, x);
//	}
//}


BTNode* BinaryTreeFind(BTNode* root, BTDataType x)
{
	if (root->val == x)
	{
		return root;
	}
	if (root->left)
	//return BinaryTreeFind(root->left, x) || BinaryTreeFind(root->right, x);
}

int main()
{
	BTNode* n1 = BTBuyNode(1);
	BTNode* n2 = BTBuyNode(2);
	BTNode* n3 = BTBuyNode(3);
	BTNode* n4 = BTBuyNode(4);
	BTNode* n5 = BTBuyNode(5);
	BTNode* n6 = BTBuyNode(6);

	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n4->left = n5;
	n4->right = n6;

	//PrevOrder(n1);
	//printf("\n");
	//InOrder(n1);
	//printf("\n");
	//PostOrder(n1);
	//printf("\n");


	/*int size = TreeLeafSize(n1);
	printf("%d\n", size);*/

	/*int sz = BinaryTreeLevelKSize(n1, 3);
	printf("%d", sz);*/

	printf("%d", BinaryTreeFind(n1, 3)->val);
	return 0;
}