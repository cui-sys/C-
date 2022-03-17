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
////数组指针的方式打印 - Print by array pointer
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
//	my_print1(arr, 3, 5);//arr - 数组名 - 数组名就是首元素地址
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
	//字符指针
	char ch = 'w';
	char* p = &ch;
	const char* p2 = "abcdef";//常量字符串是不允许被修改的 必须加 const
	//指针数组 - 数组 - 存放指针的数组
	int* arr[10];
	char* ch[5];
	//数组指针
	//int* p3; // 整型指针 - 指向整型的指针
	//char* p4;// 字符指针 - 指向字符的指针
	int arr2[5];//数组
	int (*pa)[5] = &arr2;//取出数组的地址，pa 就是一个数组指针 ，剩下的 int (*)[5]就是它的类型

	return 0;
}