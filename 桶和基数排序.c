//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//#define LEN 10000
////����
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
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
//
///*
//get_lastnum��������  �õ�һ�����ĵ�nλ��
//arg1:�������һ����
//arg2:�������10��n�η�
//return:���ص���һ����a�ĵ�nλ������
//*/
//int get_lastnum(int a, int t)
//{
//	for (int i = t; i > 1; i /= 10)
//	{
//		a /= 10;
//	}
//	return a % 10;
//}
////��ʦ�Ĵ���
//void radix_sort(int* a)
//{
//	static int b[LEN][10];
//	int c[10];
//	int t = 1;
//
//	while (1)
//	{
//		int temp;
//		memset(c, 0x00, sizeof(c));
//		memset(b, 0x00, sizeof(b));
//
//		for (int i = 0; i < LEN; i++)
//		{
//			temp = get_lastnum(a[i], t);
//
//			b[c[temp]][temp] = a[i];
//
//			c[temp]++;
//		}
//		int n = 0;
//		for (temp = 0; temp < 10; temp++)
//		{
//			for (int j = 0; j < c[temp]; j++)
//			{
//				a[n] = b[j][temp];
//				n++;
//			}
//		}
//		if (c[0] == LEN)
//		{
//			return;
//		}
//		t *= 10;
//	}
//}
//
////�������� (�����ڹ�ϣ��Ĺ�������õ���һ��һά�����һ����ά����)
//void radix_sort1(int *a)
//{
//	static int b[10][LEN],c[10];//����b�������洢����a�е����ģ�
//								//����c��������¼��ά������ÿһ������������ĸ�����
//	int t = 1;//�ȴӸ�λ��ʼ����
//	while (1)
//	{
//		//ÿ��ѭ������Ҫ������b������c����ʼ��
//		memset(b,0x00,sizeof(b));
//		memset(c, 0x00, sizeof(c));
//		//�Ƚ�����a�е���װ����ά����b�У�����һ���Ĺ��ɡ�
//		int temp = 0;
//		for (int i = 0; i < LEN; i++)
//		{
//			temp = get_lastnum(a[i],t);
//			b[temp][c[temp]] = a[i];
//			c[temp]++;
//		}
//		int count = 0;
//		//����Ľ���ά�����е���װ�ص�����a��
//		for (temp = 0; temp < 10; temp++)
//		{
//			for (int i = 0; i < c[temp]; i++)
//			{
//				a[count++] = b[temp][i];
//			}
//		}
//		if (c[0] == LEN)
//			return;
//		t *= 10;
//	}
//}
//
//int main()
//{
//	static int a[LEN];
//	srand(time(NULL));//srand(time(NULL));����time()�����󣬺���ÿ�����е����ֵ������ʱ��仯���仯��
//	for (int i = 0; i < LEN; i++)
//		a[i] = rand() % LEN;
//	clock_t start, end;
//	start = clock();
//	//count_sort(a, LEN);
//	radix_sort1(a);
//	end = clock();
//	for (int i = 0; i < 150; i++)
//		printf("a[%d]:%d\n", i, a[i]);
//	printf("���е�ʱ�䣺%lfs\n", ((double)end - start) / CLOCKS_PER_SEC);///1s�ӵ�
//	return 0;
//}