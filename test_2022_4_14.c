#include <stdio.h>
#include <string.h>

#if 0
void test()
{
	//һά����
	int a[] = { 1,2,3,4 };//4*4=16
	printf("%d\n", sizeof(a));//sizeof(������) -- ������������ܴ�С -- ��λ���ֽ� --16
	printf("%d\n", sizeof(a+0));//4/8  -- �����������ʾ��Ԫ�ص�ַ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*a));//4 -- ��Ԫ�ؽ�Ӧ�� -- ��������ʾ��Ԫ�ص�ַ��*a ������Ԫ�أ�sizeof(*a)����4
	printf("%d\n", sizeof(a+1));//4/8 -- �����������ʾ��Ԫ�ص�ַ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(a[1]));//4 -- �ڶ���Ԫ��
	printf("%d\n", sizeof(&a));//4/8 -- &a ȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
	printf("%d\n", sizeof(*&a));//16 -- �� &a ��ַ����Ӧ�����飬��Ӧ�ã�*&a == a�����ʵ������飬sizeof ����ľ�������Ĵ�С 
	printf("%d\n", sizeof(&a+1));//4/8 -- ��ַ�� 1 ���Ǹ���ַ 4/8���ֽ�
	printf("%d\n", sizeof(&a[0]));//4/8 -- ȡ�����һ��Ԫ�صĵ�ַ4/8���ֽ�
	printf("%d\n", sizeof(&a[0]+1));//4/8 -- ��ַ�� 1 ���Ǹ���ַ4/8���ֽ�
}

void test()
{
	//�ַ�����
	char a[] = { 'a','b','c','d','e','f' };//һ���ַ�ռ��һ���ֽ�
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
	printf("%d\n", strlen(arr));//���ֵ
	printf("%d\n", strlen(arr + 0));//���ֵ
	//printf("%d\n", strlen(*arr));//'a' = 97 /err	
	//printf("%d\n", strlen(arr[1]));//err
	printf("%d\n", strlen(&arr));	//���ֵ
	printf("%d\n", strlen(&arr + 1));//���ֵ - 6
	printf("%d\n", strlen(&arr[0] + 1));//���ֵ - 1
}
#endif

void test() 
{

}
int main()
{
	//����������Ԫ�صĵ�ַ
	//1.sizeof(������) -- ��������ʾ��������
	//2.&������ -- ��������ʾ��������
	// ���� 1. 2. �����еĶ���ʾ����Ԫ�ص�ַ

	test();	

	return 0;
}