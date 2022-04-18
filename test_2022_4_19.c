#define _CRT_SECURE_NO_WARNINGS 1;
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#if 0

void test()
{
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulPtr;
	pulPtr = pulArray;
	*(pulPtr + 3) += 3;//9+3(*(pulPtr + 3) == 9 再加3 等于 12)

	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12

}
//字符串逆序
void reverse(char* str)
{
	assert(str);//断言,保证执政的有效性
	int n = (int)strlen(str);
	char* left = str;
	char* right = str + n - 1;

	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void test()
{
	char arr[256] = { 0 };
	gets(arr);//读取1行
	//int a = scanf("%s", arr);
	//逆序函数
	reverse(arr);
	printf("%s\n", arr);
}


//求和
//求 Sn = a + aa + aaa + aaaa + aaaaa ,其中 a 是一个数字。
void test()
{
	int a = 0, n = 0;
	int b = scanf("%d%d", &a, &n);
	int sum = 0;
	//2 22 222 2222 22222
	//
	int ret = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum += ret;
	}
	printf("%d\n", sum);
}


void test()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断 i 是否是自幂数
		//1、计算 i 的位数 n
		// 123/10 商 != 0 n++
		// 12/10 n++
		// 1/10
		int n = 1;
		int tmp = i;
		int sum = 0;

		while (tmp /= 10)
		{
			n++;
		}
		//2、计算 i 的每一位的 n 次方之和 sum
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);//求次方 pow(谁的，n次方)
			tmp /= 10;
		}

		//3、比较 i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
}
//打印菱形
void test()
{
	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for ( i = 0; i < line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		
		//打印 *
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//打印 *
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
#endif

//喝汽水问题：1瓶汽水1元，两个空瓶可以换一瓶汽水，给20元，可以喝多少瓶汽水
void test()
{
	int money = 0;
	int total = 0;
	scanf("%d", &money);


	//买回来的汽水喝掉
	/*int total = money;
	int empty = total;
	//换回来的汽水
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}*/


	if (money == 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	
	printf("%d ", total);
}


int main()
{
	test();
	
	return 0;
}