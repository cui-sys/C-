#include <stdio.h>
#include <string.h>

#if 0
void test()
{
	//一维数组
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//sizeof(数组名) -- 计算的是数组总大小 -- 单位是字节 --16
	printf("%d\n", sizeof(a+0));//4/8  -- 数组名这里表示首元素地址，a+0 后还是首元素地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*a));//4 -- 首元素解应用 -- 数组名表示首元素地址，*a 就是首元素，sizeof(*a)就是4
	printf("%d\n", sizeof(a+1));//4/8 -- 数组名这里表示首元素地址，a+0 后还是首元素地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(a[1]));//4 -- 第二个元素
	printf("%d\n", sizeof(&a));//4/8 -- &a 取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
	printf("%d\n", sizeof(*&a));//16 -- 对 &a 地址所回应的数组，解应用（*&a == a）访问的是数组，sizeof 计算的就是数组的大小 
	printf("%d\n", sizeof(&a+1));//4/8 -- 地址加 1 还是个地址 4/8个字节
	printf("%d\n", sizeof(&a[0]));//4/8 -- 取数组第一个元素的地址4/8个字节
	printf("%d\n", sizeof(&a[0]+1));//4/8 -- 地址加 1 还是个地址4/8个字节
}

void test()
{
	//字符数组
	char a[] = { 'a','b','c','d','e','f' };//一个字符占用一个字节
	printf("%d\n", sizeof(a));//6
	printf("%d\n", sizeof(a + 0));//4/8
	printf("%d\n", sizeof(*a));//1
	printf("%d\n", sizeof(a + 1));//4/8
	printf("%d\n", sizeof(a[1]));//1
	printf("%d\n", sizeof(&a));//4/8
	printf("%d\n", sizeof(*&a));//6
	printf("%d\n", sizeof(&a + 1));//4/8
	printf("%d\n", sizeof(&a[0]));//4/8
	printf("%d\n", sizeof(&a[0] + 1));//4/8
}
void test()
{
	char arr[] = { 'a','b','c','d','e','f' };
	printf("%d\n", strlen(arr));//随机值
	printf("%d\n", strlen(arr + 0));//随机值
	//printf("%d\n", strlen(*arr));//'a' = 97 /err	
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));	//随机值
	printf("%d\n", strlen(&arr + 1));//随机值 - 6
	printf("%d\n", strlen(&arr[0] + 1));//随机值 - 1
}
#endif

void test() 
{

}
int main()
{
	//数组名是首元素的地址
	//1.sizeof(数组名) -- 数字名表示整个数组
	//2.&数组名 -- 数组名表示正个数组
	// 除了 1. 2. 外所有的都表示是首元素地址

	test();	

	return 0;
}