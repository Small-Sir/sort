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
////Ͱ����
//void count_sort(int* a, int len)
//{
//	static count_arr[LEN];///����һ�����飬����������a�����ֵ(����һ��Ͱ������װ��ͬ����)
//	for (int i = 0; i < len; i++)
//		count_arr[a[i]]++;//������a�е���ֵ��Ϊ�±꣬������count_arr��a[i]�±�+1��
//	int count = 0;//��Ϊ���������±�
//	for (int i = 0; i < len; i++)
//	{
//		while (count_arr[i])
//		{
//			a[count++] = i;
//			count_arr[i]--;
//		}
//	}
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
//	count_sort(a, LEN);
//	end = clock();
//	for (int i = 0; i < 10; i++)
//		printf("a[%d]:%d\n", i, a[i]);
//	printf("���е�ʱ�䣺%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s�ӵ�
//	return 0;
//}