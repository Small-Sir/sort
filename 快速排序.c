//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define LEN 10
////����
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////��ʦ����˫·����
//void quick_sort_double(int* a, int left, int right)
//{
//	if (right < left)
//		return;
//	int temp = a[left], i = left, j = right;
//	while (i != j)
//	{
//		for (; a[j] > temp && i < j; j--);
//		for (; a[i] <= temp && i < j; i++);
//		if (i < j)
//			swap(&a[i], &a[j]);
//	}
//	swap(&a[left], &a[j]);//����׼������ta���ڵ�λ��
//	quick_sort_double(a, left, j - 1);
//	quick_sort_double(a, j + 1, right);
//}
//
////��ʦ���ĵ�·����
//void quick_sort_one(int* a, int left, int right)
//{
//	while (right < left)
//		return;
//	int temp = a[left], i = left, j = left + 1;
//
//	for (int j = i + 1; j <= right; j++)
//	{
//		if (a[j] < temp)
//		{
//			swap(&a[++i], &a[j]);
//		}
//
//	}
//	swap(&a[left], &a[i]);
//	quick_sort_one(a, left, i - 1);
//	quick_sort_one(a, i + 1, right);
//}
//
////��д��˫·����1
//void q_sort(int* a, int left, int right)
//{
//	if (left >= right)
//		return;
//	int i = left, j = right, temp = a[left];
//	while (i != j)
//	{
//		for (; a[j] > temp && i < j; j--);
//		for (; a[i] <= temp && i < j; i++);
//		if (i < j)
//			swap(&a[i], &a[j]);
//	}
//	swap(&a[i], &a[left]);
//	q_sort(a, left, i - 1);
//	q_sort(a, i + 1, right);
//}
////��д�ĵ�·����1
//void q_sort_one1(int* a, int left, int right)
//{
//	while (right <= left)
//		return;
//	int i = left, j = left + 1, temp = a[left];
//	while (j <= right)
//	{
//		for (; a[j] > temp && j <= right; j++);
//		if (j <= right)
//		{
//			swap(&a[++i], &a[j++]);
//		}
//	}
//	swap(&a[i], &a[left]);
//	q_sort_one1(a, left, i - 1);
//	q_sort_one1(a, i + 1, right);
//}
//
//int main()
//{
//	static int a[LEN];
//	srand(time(0));//srand(time(NULL));����time()�����󣬺���ÿ�����е����ֵ������ʱ��仯���仯��
//	for (int i = 0; i < LEN; i++)
//		a[i] = rand() % LEN;
//	clock_t start, end;
//	start = clock();
//	//quick_sort_double(a,0, LEN-1);
//	//quick_sort_one(a, 0, LEN - 1);
//	q_sort_one1(a, 0, LEN - 1);
//	end = clock();
//	for (int i = 0; i < 10; i++)
//		printf("a[%d]:%d\n", i, a[i]);
//	printf("���е�ʱ�䣺%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s�ӵ�
//	return 0;
//}
