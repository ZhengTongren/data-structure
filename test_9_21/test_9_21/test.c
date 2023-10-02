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


#include "Queue.h"


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


//int TreeLeafSize(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//	else if (root->left != root->right)
//	{
//		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
//	}
//	else
//	{
//		return 1;
//	}
//}


int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	if (root->left != root->right)
	{
		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
	}

	return 1;
}


int TreeLevelKSize(BTNode* root, int k)
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
		return TreeLevelKSize(root->left, k - 1) + TreeLevelKSize(root->right, k - 1);
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


// 只能走到左子树(return了)，找不到右子树
//BTNode* TreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	if (root->val == x)
//	{
//		return root;
//	}
//	
//	return TreeFind(root->left, x);
//	return TreeFind(root->right, x);
//}

//
//BTNode* TreeFind(BTNode* root, BTDataType x)
//{
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	if (root->val == x)
//	{
//		return root;
//	}
//
//	BTNode* ret = NULL;
//	ret = TreeFind(root->left, x);
//	if (ret)
//	{
//		return ret;
//	}
//
//	ret = TreeFind(root->right, x);
//	if (ret)
//	{
//		return ret;
//	}
//	return NULL;
//}


BTNode* TreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
	{
		return;
	}

	if (root->val != x)
	{
		return;
	}

	BTNode* ret = NULL;
	ret = TreeFind(root->left, x);
	if (ret)
	{
		return ret;
	}

	ret = TreeFind(root->right, x);
	if (ret)
	{
		return ret;
	}
	return NULL;
}

//
//void TreeDestroy(BTNode* root)
//{
//	if (root == NULL)
//		return;
//
//	if (root->left)
//		TreeDestroy(root->left);
//
//	if (root->right)
//		TreeDestroy(root->right);
//
//	free(root);
//}


void TreeDestroy(BTNode* root)
{
	if (root == NULL)
		return;

	TreeDestroy(root->left);
	TreeDestroy(root->right);

	free(root);
}


//void LevelOrder(BTNode* root)
//{
//	Que q;
//	QueueInit(&q);
//	
//	if (root)
//		QueuePush(&q, root);
//
//	while (!QueueEmpty(&q))
//	{
//		BTNode* front = QueueFront(&q);
//		printf("%d ", front->val);
//
//		if (front->left)
//			QueuePush(&q, front->left);
//
//		if (root->right)
//			QueuePush(&q, front->right);
//
//		QueuePop(&q);
//	}
//	printf("\n");
//
//	QueueDestroy(&q);
//}


//int TreeSize(BTNode* root)
//{
//	if (root == NULL)
//		return 0;
//	return TreeSize(root->left) + TreeSize(root->right) + 1;
//}


int TreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;

	return TreeSize(root->left) + TreeSize(root->right) + 1;
}


// 层序
//void LevelOrder(BTNode* root)
//{
//	Que q;
//	QueueInit(&q);
//
//	if (root)
//		QueuePush(&q, root);
//
//	while (!QueueEmpty(&q))
//	{
//		BTNode* front = QueueFront(&q);
//		printf("%d ", front->val);
//
//		if (front->left)
//			QueuePush(&q, front->left);
//
//		if (front->right)
//			QueuePush(&q, front->right);
//		QueuePop(&q);
//	}
//
//	QueueDestroy(&q);
//}


void LevelOrder(BTNode* root)
{
	Que q;
	QueueInit(&q);

	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		printf("%d ", front->val);

		if (front->left)
			QueuePush(&q, front->left);

		if (front->right)
			QueuePush(&q, front->right);

		QueuePop(&q);
	}
	printf("\n");

	QueueDestroy(&q);
}


//int TreeComplete(BTNode* root)
//{
//	Que q;
//	QueueInit(&q);
//
//	if (root)
//		QueuePush(&q, root);
//
//	while (!QueueEmpty(&q))
//	{
//		BTNode* front = QueueFront(&q);
//		if (front == NULL)
//		{
//			break;
//		}
//		QueuePush(&q, front->left);
//		QueuePush(&q, front->right);
//		QueuePop(&q);
//	}
//
//	while (!QueueEmpty(&q))
//	{
//		BTNode* front = QueueFront(&q);
//		/*QueuePush(&q, front->left);
//		QueuePush(&q, front->right);*/
//
//
//		if (front != NULL)
//		{
//			QueueDestroy(&q);
//			return 0;
//		}
//		QueuePop(&q);
//	}
//
//
//	QueueDestroy(&q);
//	return 1;
//}

//
//int TreeComplete(BTNode* root)
//{
//	Que q;
//	QueueInit(&q);
//
//	if (root)
//		QueuePush(&q, root);
//
//	while (!QueueEmpty(&q))
//	{
//		BTNode* front = QueueFront(&q);
//		if (front == NULL)
//		{
//			break;
//		}
//
//		QueuePush(&q, front->left);
//		QueuePush(&q, front->right);
//		QueuePop(&q);
//	}
//
//	while (!QueueEmpty(&q))
//	{
//		BTNode* front = QueueFront(&q);
//		QueuePop(&q);
//
//		if (front != NULL)
//		{
//			QueueDestroy(&q);
//			return 0;
//		}
//
//	}
//
//	QueueDestroy(&q);
//	return 1;
//}


int TreeComplete(BTNode* root)
{
	Que q;
	QueueInit(&q);

	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		if (front == NULL)
			break;

		QueuePush(&q, front->left);
		QueuePush(&q, front->right);

		QueuePop(&q);
	}

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		if (front != NULL)
		{
			QueueDestroy(&q);
			return 0;
		}

		QueuePop(&q);
	}
	return 1;
}

//
//int TreeHeight(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//
//	int height1 = TreeHeight(root->left);
//	int height2 = TreeHeight(root->right);
//	return height1 > height2 ? height1 + 1 : height2 + 1;
//}


int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	int h1 = TreeHeight(root->left);
	int h2 = TreeHeight(root->right);

	return h1 > h2 ? h1 + 1: h2 + 1;
}


//int TreeHeight(BTNode* root)
//{
//	if (root == NULL)
//	{
//		return 0;
//	}
//
//	return fmax(TreeHeight(root->left), TreeHeight(root->right)) + 1;
//}


int main()
{
	BTNode* n1 = BTBuyNode(1);
	BTNode* n2 = BTBuyNode(2);
	BTNode* n3 = BTBuyNode(3);
	BTNode* n4 = BTBuyNode(4);
	BTNode* n5 = BTBuyNode(5);
	BTNode* n6 = BTBuyNode(6);
	BTNode* n7 = BTBuyNode(7);
	BTNode* n8 = BTBuyNode(8);
	BTNode* n9 = BTBuyNode(9);
	/*BTNode* n10 = BTBuyNode(10);
	BTNode* n11 = BTBuyNode(11);
	BTNode* n12 = BTBuyNode(12);*/


	n1->left = n2;
	n1->right = n4;
	n2->left = n3;
	n4->left = n5;
	n4->right = n6;

	n2->right = n7;
	n3->right = n8;
	n3->left = n9;
	//n6->left = n10;
	/*n9->left = n10;
	n10->left = n11;
	n11->left = n12;*/

	//PrevOrder(n1);
	//printf("\n");
	//InOrder(n1);
	//printf("\n");
	//PostOrder(n1);
	//printf("\n");


	/*int size = TreeLeafSize(n1);
	printf("%d\n", size);*/
	printf("TreeLeafSize:%d\n", TreeLeafSize(n1));

	/*int sz = BinaryTreeLevelKSize(n1, 3);
	printf("%d", sz);*/

	//printf("%d", TreeFind(n1, 3)->val);
	/*BTNode* p = TreeFind(n1, 6);
	printf("%d\n", p->val);*/

	LevelOrder(n1);

	printf("TreeSize:%d\n", TreeSize(n1));
	printf("TreeComplete:%d\n", TreeComplete(n1));
	printf("TreeHeight:%d\n", TreeHeight(n1));

	TreeDestroy(n1);
	return 0;
}