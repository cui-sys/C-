#include <stdio.h>

#if 0
void test1(int x)
{
	while (x < 21)
	{
		printf("%10d %10d\n", x, x * x);
		x++;
	}
}

void test2(int x)
{
	while (x < 21)
	{
		printf("%10.3d %10.3d\n", x, x * x++);//x++ ��ֵֻ�ڱ�ʹ��֮��������ֳ� ++ ;
		//����� x++ �Ǳ��ʽ��һ���� ��ô������ x ���ٵ������� ++x �ȵ�������ʹ�á���
	}
}

void test3(int x)
{
	int y = 0;
	y = x++ + x++;
	printf("%d %d\n", y, x);
}
//�����һ��������������һ�������Ķ�������У���Ҫ�Ըı���ʹ�õ�����ݼ����������
//�����һ��������γ�����һ�����ʽ�У���Ҫ�Ըı���ʹ�õ�����ݼ��������

void test()
{
	int count = 0, sum = 0;
	while (count++ < 21)
	{
		sum = sum + count;
		printf("sum = %d\n", sum);
	}
}



void test()
{
	int count, sum, ret;
	count = 0;
	sum = 0, ret=0;
	while (count < 21)
	{
		sum = sum + count;
		ret = printf("sum = %d count = %d\n", sum, count);
		count++;
	}
	printf("ret = %d\n", ret);//printf()�ķ���ֵ������һֱ����ɺ�������ַ�������ֵ
}

void test()
{
	int n = 6, x = 3, y = 5, z = 0;;

	z = (y + x++) + (n + x++);
	printf("%d\n", z);
	int ret = x;
	printf("%d\n", ret);

}

void test()
{
	char ch;
	int i;
	float f1;

	f1 = i = ch = 'c';
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);

	ch = ch + 1;//100
	i = f1 + 2 * ch;//99+2*100
	f1 = 2.0 * ch + i;
	printf("ch = %c, i = %d, f1 = %2.2f\n", ch, i, f1);

	ch = 1107;//0000 0000 0000 0000 0000 0100 0101 0011 - ȡ8λ 0101 0011 - 83'S' - ����
			  
	printf("Now ch = %c\n", ch);
	ch = 80.89;		// 80'P' -�ض�
	printf("Now ch = %c\n", ch);

}

void test()
{
	//�Զ�����ת��
	int mice = 1.6 + 1.7;//1.6+1.7=3.3 -> 3.3 ת���� int���ͣ���� 3 //==��int��(1.6+1.7)
	printf("%d\n", mice);

	//ǿ������ת��
	mice = (int)1.6 + (int)1.7;//1.6��1.7�ֱ�ת���� int���� 1.6ת������ 1 ��1.7ת����Ҳ��1 -> �� 1+1 �������2
	printf("%d\n", mice);

}

void test()
{
	size
		_t intsize = sizeof(int);
	printf("%zd\n", sizeof(int));//sizeof ���� size_t ���͵�ֵ��������һ���޷����������͡�
	printf("%d\n", (int)intsize);
	printf("%zu\n", sizeof(int));

}

void test()
{
	typedef double real;//�������ʹ����������� real ���� double �ı���
	real deal = 5.3;
	printf("%.2f", deal);
}

void pound(int n)
{
	while (n-- > 0)
	{
		printf("#");
	}
	printf("\n");
}

void test()
{
	int times = 5;
	char ch = '!';//33
	float f = 6.0f;

	pound(times);
	pound(ch);
	pound((int)f);
}
#endif
void test()
{

}

int main()
{

	int num = 1;

	//test3(num);
	test();

	return 0;
}