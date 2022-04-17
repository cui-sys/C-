#include <stdio.h>
#include <string.h>

#if 0


void test()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr+0));//4 -- 首元素地址
	printf("%d\n", sizeof(*arr));//1 -- 首元素
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0]+1));//4

}

void test()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6 arr 表示首元素地址
	//printf("%d\n", strlen(*arr));//-- err (*arr == 'a' == 97)//非法访问内存 
	//printf("%d\n", strlen(arr[1]));//-- err (arr[1] == 'b' == 98)//非法访问内存 
	printf("%d\n", strlen(&arr));// &arr == char(*p)[7]而strlen == const char* -- 数组的地址 -- 6
	printf("%d\n", strlen(&arr + 1));//随机数
	printf("%d\n", strlen(&arr[0] + 1));//5
}

void test()
{
	char* p = "abcdef";// p == &a
	printf("%d\n", sizeof(p));//4/8 &a 4/8个字节
	printf("%d\n", sizeof(p + 1));//4/8 p+1 == 字符 'b'的地址
	printf("%d\n", sizeof(*p));//1 *p == 字符 'a'
	printf("%d\n", sizeof(p[0]));//1 -- int arr[10]; arr[0] == *(arr + 0)    p[0] == *(p + 0) == 'a'
	printf("%d\n", sizeof(&p));//4/8
	printf("%d\n", sizeof(&p + 1));//4/8
	printf("%d\n", sizeof(&p[0] + 1));//4/8

}
void test()
{
	char* p = "abcdef";// p == &a
	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//err
	//printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
	printf("%d\n", strlen(&p[0] + 1));//5 --  p[0] == *(p + 0) == 'a'

}
#endif
//二维数组
void test()
{
	int arr[3][4] = { 0 };
	printf("%d\n", sizeof(arr));//48
	printf("%d\n", sizeof(arr[0][0]));//4
	printf("%d\n", sizeof(arr[0]));//16 -- 三行四列的二维数组可以看成三个元素的一维数组，每个元素即一个一维数组，所以 arr[0] 在这里表示第一行。
	printf("%d\n", sizeof(arr[0] + 1));//4/8 -- arr[0]是第一行一维数组的数组名，所以 arr[0] 在这里指向的是第一行一维数组的首元素地址。
	printf("%d\n", sizeof(*(arr[0] + 1)));//4 -- 第一行第二个元素
	printf("%d\n", sizeof(arr + 1));//4 -- 第一行地址 + 1 还是地址 == 第二行地址
	printf("%d\n", sizeof(*(arr + 1)));//16 -- 第二行一维数组
	printf("%d\n", sizeof(&arr[0] + 1));//4 -- 第二行地址
	printf("%d\n", sizeof(*(&arr[0] + 1)));//16 -- 第二行一维数组解应用
	printf("%d\n", sizeof(*arr));//16 -- 第一行一维数组解应用
	printf("%d\n", sizeof(arr[3]));//16 -- 第三行一维数组
}
int main()
{
	test();

	return 0;
}