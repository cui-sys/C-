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
	*(pulPtr + 3) += 3;//9+3(*(pulPtr + 3) == 9 �ټ�3 ���� 12)

	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6,12

}
//�ַ�������
void reverse(char* str)
{
	assert(str);//����,��ִ֤������Ч��
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
	gets(arr);//��ȡ1��
	//int a = scanf("%s", arr);
	//������
	reverse(arr);
	printf("%s\n", arr);
}


//���
//�� Sn = a + aa + aaa + aaaa + aaaaa ,���� a ��һ�����֡�
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
		//�ж� i �Ƿ���������
		//1������ i ��λ�� n
		// 123/10 �� != 0 n++
		// 12/10 n++
		// 1/10
		int n = 1;
		int tmp = i;
		int sum = 0;

		while (tmp /= 10)
		{
			n++;
		}
		//2������ i ��ÿһλ�� n �η�֮�� sum
		tmp = i;
		while (tmp)
		{
			sum += (int)pow(tmp % 10, n);//��η� pow(˭�ģ�n�η�)
			tmp /= 10;
		}

		//3���Ƚ� i == sum
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
}
//��ӡ����
void test()
{
	int line = 0;
	scanf("%d", &line);
	//��ӡ�ϰ벿��
	int i = 0;
	for ( i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		
		//��ӡ *
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ *
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
#endif

//����ˮ���⣺1ƿ��ˮ1Ԫ��������ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ
void test()
{
	int money = 0;
	int total = 0;
	scanf("%d", &money);


	//���������ˮ�ȵ�
	/*int total = money;
	int empty = total;
	//����������ˮ
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