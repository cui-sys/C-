#include <stdio.h>
#include <string.h>

#if 0


void test()
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));//7
	printf("%d\n", sizeof(arr+0));//4 -- ��Ԫ�ص�ַ
	printf("%d\n", sizeof(*arr));//1 -- ��Ԫ��
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0]+1));//4

}

void test()
{
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr));//6
	printf("%d\n", strlen(arr + 0));//6 arr ��ʾ��Ԫ�ص�ַ
	//printf("%d\n", strlen(*arr));//-- err (*arr == 'a' == 97)//�Ƿ������ڴ� 
	//printf("%d\n", strlen(arr[1]));//-- err (arr[1] == 'b' == 98)//�Ƿ������ڴ� 
	printf("%d\n", strlen(&arr));// &arr == char(*p)[7]��strlen == const char* -- ����ĵ�ַ -- 6
	printf("%d\n", strlen(&arr + 1));//�����
	printf("%d\n", strlen(&arr[0] + 1));//5
}

void test()
{
	char* p = "abcdef";// p == &a
	printf("%d\n", sizeof(p));//4/8 &a 4/8���ֽ�
	printf("%d\n", sizeof(p + 1));//4/8 p+1 == �ַ� 'b'�ĵ�ַ
	printf("%d\n", sizeof(*p));//1 *p == �ַ� 'a'
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
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5 --  p[0] == *(p + 0) == 'a'

}
#endif
//��ά����
void test()
{
	int arr[3][4] = { 0 };
	printf("%d\n", sizeof(arr));//48
	printf("%d\n", sizeof(arr[0][0]));//4
	printf("%d\n", sizeof(arr[0]));//16 -- �������еĶ�ά������Կ�������Ԫ�ص�һά���飬ÿ��Ԫ�ؼ�һ��һά���飬���� arr[0] �������ʾ��һ�С�
	printf("%d\n", sizeof(arr[0] + 1));//4/8 -- arr[0]�ǵ�һ��һά����������������� arr[0] ������ָ����ǵ�һ��һά�������Ԫ�ص�ַ��
	printf("%d\n", sizeof(*(arr[0] + 1)));//4 -- ��һ�еڶ���Ԫ��
	printf("%d\n", sizeof(arr + 1));//4 -- ��һ�е�ַ + 1 ���ǵ�ַ == �ڶ��е�ַ
	printf("%d\n", sizeof(*(arr + 1)));//16 -- �ڶ���һά����
	printf("%d\n", sizeof(&arr[0] + 1));//4 -- �ڶ��е�ַ
	printf("%d\n", sizeof(*(&arr[0] + 1)));//16 -- �ڶ���һά�����Ӧ��
	printf("%d\n", sizeof(*arr));//16 -- ��һ��һά�����Ӧ��
	printf("%d\n", sizeof(arr[3]));//16 -- ������һά����
}
int main()
{
	test();

	return 0;
}