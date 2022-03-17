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

//
//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//常量字符串是不允许被修改的 必须加 const
//	//指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针
//	//int* p3; // 整型指针 - 指向整型的指针
//	//char* p4;// 字符指针 - 指向字符的指针
//	int arr2[5];//数组
//	int (*pa)[5] = &arr2;//取出数组的地址，pa 就是一个数组指针 ，剩下的 int (*)[5]就是它的类型(数组指针类型)
//	int(*parr3[10])[5];//
//	return 0;
//}

//数组参数和指针参数

////一维数组传参
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


//二维数组传参

//void test(int arr[3][5])
//{
//	//OK
//}
//void test(int arr[][5])
//{
//	//OK
//}
//void test1(int arr[3][])//err -二维数组传参时行可以省略，列不可以省略
//{
//	//NO - err
//}
//void test1(int arr[][])//err -二维数组传参时行可以省略，列不可以省略
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
//	test(arr);//二维数组传参
//	//test1(arr);
//	return 0;
//}


//指针传参
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
//	//一级指针 p ,传给函数；
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