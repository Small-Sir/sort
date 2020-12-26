//#include <stdio.h>
//#include <stdlib.h>
//void swap(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//}
//
////保证每个父节点都大于他们的子节点
//void keep_heap(int *a,int size,int parent)
//{
//	if (parent >= size)
//		return;
//	int left = parent * 2 + 1, right = parent * 2 + 2;
//	int max = parent;
//	//找父节点和子节点中的最大的
//	if (left < size &&a[left]>a[max])
//	{	
//		max = left;
//	}
//	if (right < size && a[right]>a[max])
//	{
//		max = right;
//	}
//	if (max != parent)//如果发生交换才递归
//	{
//		swap(&a[parent], &a[max]);
//		keep_heap(a, size, max);
//	}
//		
//}
//
////创建堆
//void creat_heap(int* a, int size)
//{
//	int parent = ((size - 1) - 1) / 2;
//	for (int i = parent; i >=0; i--)
//	{
//		keep_heap(a, size, i);
//	}
//}
//
////堆排序
//void heap_sort(int* a, int size)
//{
//	creat_heap(a, size);
//	for (int i = size-1; i >= 0; i--)
//	{
//		swap(&a[i], &a[0]);
//		keep_heap(a,i, 0);
//	}
//}
//
//int main()
//{
//	int a[9] = { 1,9,2,8,3,7,4,6,5 };
//	//creat_heap(a, 9);
//	heap_sort(a, 9);
//	for (int i = 0; i < 9; i++)
//		printf("a[%d]:%d\n", i, a[i]);
//	return 0;
//}