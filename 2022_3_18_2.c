#include<stdio.h>

//void my_print1(int arr[3][5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////����ָ��ķ�ʽ��ӡ - Print by array pointer
//void my_print2(int (*p)[5], int x, int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			// printf("%d ", *(p[i] + j))
//			//printf("%d ", (*(p + i))[j]); 			
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	my_print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
//	my_print2(arr, 3, 5);
//	 
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* p = arr;
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	//printf("%d ", *arr + i);
//	//	// printf("%d ",arr[i]);
//	//	//printf("%d ", *(p + i));
//	//	//printf("%d ", *p + i);
//	//	printf("%d ", p[i]); // arr[i] == *(arr + i) == *arr + i == *p + i == *(p + i) == p[i]
//	//}
//
//	return 0;
//}

//
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//�����ַ����ǲ������޸ĵ� ����� const
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ��
//	//int* p3; // ����ָ�� - ָ�����͵�ָ��
//	//char* p4;// �ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5];//����
//	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa ����һ������ָ�� ��ʣ�µ� int (*)[5]������������(����ָ������)
//	int(*parr3[10])[5];//
//	return 0;
//}

//���������ָ�����

////һά���鴫��
//void test1(int arr[])
//{
//	//OK
//}
//void test1(int arr[10])
//{
//	//OK
//}
//void test1(int* arr)
//{
//	//OK
//}
//
//void test2(int* arr[20])
//{
//	//OK
//}
//void test2(int** arr)
//{
//	//OK
//}
//
//int main()
//{
//	int arr1[10] = { 10 };
//	int* arr2[20] = { 0 };
//	test1(arr1);
//	test2(arr2);
//	
//	return 0;
//}


//��ά���鴫��

//void test(int arr[3][5])
//{
//	//OK
//}
//void test(int arr[][5])
//{
//	//OK
//}
//void test1(int arr[3][])//err -��ά���鴫��ʱ�п���ʡ�ԣ��в�����ʡ��
//{
//	//NO - err
//}
//void test1(int arr[][])//err -��ά���鴫��ʱ�п���ʡ�ԣ��в�����ʡ��
//{
//	//NO - err
//

//void test(int (*arr)[5])
//{
//	//OK
//}
//
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);//��ά���鴫��
//	//test1(arr);
//	return 0;
//}


//ָ�봫��
//void print(int* p, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//һ��ָ�� p ,����������
//	print(p, sz);
//
//	return 0;
//}

void test1(int* p)
{

}
void test2(char* p1)
{

}
int main()
{
	int a = 10;
	int* p = &a;
	test1(&a);//OK
	test1(p);//OK

	char ch = 'w';
	char* p1 = &ch;
	test2(&ch);//OK
	test2(p1);//OK

	return 0;
}