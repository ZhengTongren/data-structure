#define _CRT_SECURE_NO_WARNINGS 1


//typedef int DataType;
//
//struct Node
//{
//	struct Node* firstchild;
//	struct Node* nextbrother;
//	DataType val;
//};

//
//typedef int DataType;
//
//struct Node
//{
//	struct Node* firstchild;
//	struct Node* nextbrother;
//	DataType val;
//};


typedef int DataType;

struct Node
{
	DataType val;
	int parent;
};