﻿#pragma region Pointer复习

//#include <iostream>
//using namespace std;
//
//class tmp
//{
//public: 
//	int value;
//
//	tmp(int a) :value(a) {}
//};
//
//void Change(int* a, int* b)
//{
//	*a = 11;
//	*b = 22;
//}
//
//void Change(tmp* &a, tmp* &b)
//{
//	a->value = 10000;
//	b->value = 20000;
//}
//
//int main()
//{
//	//int a = 90, b = 100;
//	//int* i = &a;
//	//int* j = &b;
//
//	//Change(i, j);
//
//	//cout << *i << "   " << *j << endl;
//	//cout << a << "   " << b << endl;
//
//	tmp* a = new tmp(10);
//	tmp* b = new tmp(20);
//
//	Change(a, b);
//
//	cout << a->value << endl;
//	cout << b->value << endl;
//
//	system("pause");
//
//	return 0;
//}

#pragma endregion

#pragma region 二叉搜索树的测试
//#include <iostream>
//#include "BSTree.h"
//
//static int arr[] = { 1,5,4,3,2,6 };
//#define TBL_SIZE(a) ((sizeof(a)) / (sizeof(a[0])))
//
//int main()
//{
//	int i, ilen;
//	BSTree<int>* tree = new BSTree<int>();
//	
//	std::cout << "== 依次添加: ";
//	ilen = TBL_SIZE(arr);
//	for (i = 0; i < ilen; i++)
//	 {
//	     std::cout << arr[i] << " ";
//	     tree->Insert(arr[i]);
//	 }
//	
//	std::cout << "\n== 前序遍历: ";
//	tree->PreOrder();
//
//	std::cout << "\n== 中序遍历: ";
//	tree->InOrder();
//
//	std::cout << "\n== 后序遍历: ";
//	tree->PostOrder();
//	std::cout << std::endl;
//	//
//	std::cout << "== 最小值: " << tree->Minimum() << std::endl;
//	std::cout << "== 最大值: " << tree->Maximum() << std::endl;
//	std::cout << "== 树的详细信息: " << std::endl;
//	tree->Print();
//
//	std::cout << "\n== 删除根节点: " << arr[3];
//	tree->Remove(arr[3]);
//
//	std::cout << "\n== 中序遍历: ";
//	tree->InOrder();
//	std::cout << std::endl;
//	// 销毁二叉树
//	tree->Destroy();
//	system("pause");
//	return 0;
//}
#pragma endregion

#pragma region 数组栈的测试
//#include <iostream>
//#include "ArrayStack.h"
//
//int main()
//{
//	ArrayStack<int> *stack = new ArrayStack<int>();
//
//	stack->Push(1);
//	stack->Push(2);
//	stack->Push(3);
//
//	while (!stack->IsEmpty())
//	{
//		std::cout << stack->Pop() << std::endl;
//	}
//
//	system("pause");
//}
#pragma endregion

#pragma region 数组队列的测试
//#include <iostream>
//#include "ArrayQueue.h"
//
//int main()
//{
//	ArrayQueue<int> *queue = new ArrayQueue<int>();
//
//	queue->Add(1);
//	queue->Add(2);
//	queue->Add(3);
//
//	while (!queue->IsEmpty())
//	{
//		std::cout << queue->Pop() << std::endl;
//	}
//
//	system("pause");
//}
#pragma endregion

#pragma region AVL树的测试

#include "AVLTree.h"
#include <iostream>

static int arr[] = {3, 2, 1, 4, 5, 6, 7, 16, 15, 14, 13, 12, 11, 10, 8, 9};
#define TBL_SIZE(a) ( (sizeof(a)) / (sizeof(a[0])) )

int main()
{
	int i, iLen;
	AVLTree<int> *tree = new AVLTree<int>();
	
	std::cout << "== 依次添加：";
	iLen = TBL_SIZE(arr);
	for(i = 0; i < iLen; i++)
	{
		std::cout << arr[i] << " ";
		tree->Insert(arr[i]);	
	}

	std::cout << "\n== 前序遍历：";
	tree->PreOrder();

	std::cout << "\n== 中序遍历：";
	tree->InOrder();

	std::cout << "\n== 后序遍历：";
	tree->PostOrder();
	std::cout << std::endl;
	
	std::cout << "== 高度：" << tree->Height() << std::endl;
	std::cout << "== 最小值：" << tree->Minimum() << std::endl;
	std::cout << "== 最大值：" << tree->Maximum() << std::endl;
	std::cout << "== 树的详细信息：" << std::endl;
	tree->Print();

	i = 8;
	std::cout << "\n== 删除根节点：" << i;
	tree->Remove(i);

	std::cout << "\n== 高度：" << tree->Height();
	std::cout << "\n== 中序遍历：";
	tree->InOrder();
	std::cout << "\n== 树的详细信息：" << std::endl;
	tree->Print();

	tree->Destroy();
	
	system("pause");
	
	return 0;


}

#pragma endregion
