#include<stdio.h>


////数组指针 - 指针
//int main()
//{
//	//int* p = NULL;//整型指正 - 指向整型的指针 - 可以存放整型的地址
//	//char* pc = NULL;//字符指针 - 指向字符的指针 - 可以存放字符的地址
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	// 
//	//int arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0] - 首元素的地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int* p1[10] = &arr;//存放指针的数组
//	int (*p2)[10] = &arr;//存放数组地址的指针
//	//上面的 p 就是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	//char* 是 pa 指向的数组的元素类型是 char* ;（*pa）是指针 ; [5]是 pa 指向数组有5个元素.
//		
//	return 0;
//}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr1;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}

	//int(*pa)[10] = &arr1;
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(*pa + i));//*pa == arr
	//}

	/*for (int i = 0; i < 10; i++)
	{		
		printf("%d ", (*pa)[i]);
	}*/

	return 0;
}