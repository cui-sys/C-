//typedef unsigned int uint;//�����ض���
//
//signal ��һ����������
//signal(int, void(*)(int))
//signal �����Ĳ���������,��һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ��������� int������������ void��
//signal �����ķ�������Ҳ��һ������ָ�룻�ú���ָ��ָ��ĺ��������� int������������ void��
//void(    *signal( int,   void(*)(int)   )    )(int);
//
//��
//typedef void(*pfun_t)(int);//�����ض���
//pfun_t signal(int, pfun_t);



#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//
//	int (*p)(int, int) = Add;
//
//	printf("%d\n", p(a, b));//ok
//	printf("%d\n", Add(a, b));//ok
//
//	printf("%d\n", (*p)(a, b));//ok
//	//printf("%d\n", *p(a, b));//err
//
//
//	return 0;
//}



//����ָ������
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5] = { 0 };//ָ������
//	int (*p)(int, int) = Add;//Sub/Mul/Div
//	//��Ҫһ�����飬�ܹ����4��������ַ������ - ����ָ������
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](6, 3));
//	}
//	
//	return 0;
//}
//

//char* my_strcpy(char* dest, const char* src){}
////дһ������ָ�� pf���ܹ�ָ�� my_strcpy
//char* (*pf)(char*, const char*) = my_strcpy;
//// 
////дһ������ָ������pfarr���ܹ����4�� my_strcpy�����ĵ�ַ
//char* (*pfarr[4])(char*, const char*) = { my_strcpy ,my_strcpy ,my_strcpy ,my_strcpy };
////

void menu()
{
	printf("********************************\n");
	printf("**** 1.add            2.sub ****\n");
	printf("**** 3.mul            4.div ****\n");
	printf("*********    0.exit    *********\n");
	printf("********************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//int main()
//{
//	int input = 0, x = 0, y = 0;
//	
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		
//		switch (input)
//		{
//		case 0:
//			printf("�˳�\n");
//			break;
//		case 1:
//			printf("����������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf_s("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}

int main()
{
	int input = 0, x = 0, y = 0;
	int (*parr[])(int, int) = { 0,Add,Sub,Mul,Div };
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);		
		if (input >= 1 && input <= 4)
		{
			printf("����������������:>");
			scanf_s("%d%d", &x, &y);
			int ret = parr[input](x, y);
			printf("%d\n", ret);

		}
		else if (input == 0)
		{
			printf("�˳�\n");	
		}
		else
		{
			printf("������ѡ��\n");
		}

	} while (input);

	return 0;
}