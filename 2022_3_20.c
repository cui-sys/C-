#include <stdio.h>    /* printf */
#include <stdlib.h>   /* qsort */
#include <string.h>	  /* strcmp */
//回调函数 - 一个通过函数指针调用的函数

//
//void Print(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//
//void test(void(*p)(char*))
//{
//	printf("haha\n");
//	p("hello world");
//}
//
//int main()
//{
//	
//	test(Print);
//
//	return 0;
//}

//冒泡排序函数
void bubble_sort(int arr[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	/*int cmp = 0;
	for (int i = 0; i < n; i++)
	{		
		for (int j = 0; j < n; j++)
		{			
			if (arr[i] < arr[j])
			{
				cmp = arr[i];
				arr[i] = arr[j];
				arr[j] = cmp;				
			}			
		}
	}*/
}

struct Stu
{
	char name[20];
	int age;
};
//void qsort(
//	void* base,
//	size_t num,
//	size_t width,
//	int (*compar)(const void*e1, const void*e2)
//	);
int cmp_int(const void* e1, const void* e2)//void* 类型的指针 - 可以接收任意类型的地址 - 不能进行解应用操作 - 不能进行加减运算
{
	//比较两个整型值的大小
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 > *(float*)e2)
	{
		return 1;
	}
	else if (*(float*)e1 == *(float*)e2)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2)
{
	//比较名字就是比较字符串
	//字符串比较不能用大于小于来比较，应该用 strcmp函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);	 
}

int main()
{	
	int arr[10] = { 9,8,7,5,3,4,6,2,1,0 };//{ 9,8,7,6,5,4,3,2,1,0 }
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	float f[5] = { 5.5,4.0,3.5,2.0,1.8 };
	int sz2 = sizeof(f) / sizeof(f[0]);
	qsort(f, sz2, sizeof(f[0]),cmp_float );

	
	struct Stu s[3] = { {"zhangsan",13},{"lisi",20},{"wangwu",15} };
	int sz3 = sizeof(s) / sizeof(s[0]);
	qsort(s, sz3, sizeof(s[0]), cmp_stu_by_age);
	qsort(s, sz3, sizeof(s[0]), cmp_stu_by_name);
	
	//bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < sz2; i++)
	{
		printf("%f ", f[i]);
	}
	printf("\n");
	for (int i = 0; i < sz3; i++)
	{
		printf("%d ", s[i].age);
	}
	return 0;
}