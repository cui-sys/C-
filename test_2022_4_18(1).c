#include <stdio.h>

#if 0
void test()
{
	int a[5] = { 1,2,3,4,5 };
	int* ptr = (int*)(&a + 1);//
	printf("%d,%d", *(a + 1), *(ptr - 1));//2,5
}

struct Tset
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}* p;

void test()
{
	p = (struct Test*)0x100000;
	printf("%p\n", p + 0x1);//0x00100014
	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
}
void test()
{
	int a[4] = { 1,2,3,4 };
	int* ptr1 = (int*)(&a + 1);
	int* ptr2 = (int*)((int)a + 1);//首元素地址强制转换成整形然后加 1 
	
	printf("%x,%x", ptr1[-1], *ptr2);//4,2000000
}
void test()
{
	//int a[3][2] = { {0,1},{2,3},{4,5} };
	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式 {1,3,5}
	int* p;
	p = a[0];//

	printf("%d", p[0]);// == *(p+0)
}
#endif
void test()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);// p[4][2] == *(*(p+4)+2)
	//%p 直接打印的是内存中的补码
	// 1000 0000 0000 0000 0000 0000 0000 0100 = -4  原码
	// 1111 1111 1111 1111 1111 1111 1111 1011 反码
	// 1111 1111 1111 1111 1111 1111 1111 1100 补码
	//FFFFFFFC,-4
}
int main()
{
	test();
	
	return 0;
} 