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


int main()
{
	//�ַ�ָ��
	char ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";//�����ַ����ǲ������޸ĵ� ����� const
	//ָ������ - ���� - ���ָ�������
	int* arr[10];
	char* ch[5];
	//����ָ��
	//int* p3; // ����ָ�� - ָ�����͵�ָ��
	//char* p4;// �ַ�ָ�� - ָ���ַ���ָ��
	int arr2[5];//����
	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa ����һ������ָ�� ��ʣ�µ� int (*)[5]������������

	return 0;
}