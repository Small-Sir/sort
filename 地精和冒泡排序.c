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
//
/////�ؾ�����
//void golblin(int* a, int len)
//{
//	int i = 0;
//	while (i < len)
//	{
//		if (i == 0 || a[i] >= a[i - 1])
//		{
//			i++;
//		}
//		else if(a[i]<a[i-1])
//		{
//			swap(&a[i], &a[i - 1]);
//			i--;
//		}
//	}
//
//}
//
////ð������
//void pop(int* a, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - i-1; j++)
//		{
//			if (a[j + 1] <= a[j])
//			{
//				swap(&a[j + 1], &a[j]);
//			}
//		}
//	}
//
//}
//
////�Ƚ�low��ð������  ÿ�ζ�ѭ��
//void pop_low(int* a, int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len ; j++)
//		{
//			if (a[j + 1] <= a[j])
//			{
//				swap(&a[j + 1], &a[j]);
//			}
//		}
//	}
//
//}
//
//
//int main()
//{
//	static int a[LEN];
//	srand(time(0));//srand(time(NULL));����time()�����󣬺���ÿ�����е����ֵ������ʱ��仯���仯��
//	for (int i = 0; i < LEN; i++)
//		a[i] = rand() % LEN;
//	clock_t start, end;
//	start = clock();
//	//golblin(a, LEN);
//	pop_low(a,LEN);
//	end = clock();
//	for (int i = 0; i < 10; i++)
//		printf("a[%d]:%d\n",i,a[i]);
//	printf("���е�ʱ�䣺%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s�ӵ�
//	return 0;
//}
