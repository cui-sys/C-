#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ļ����ı��ļ����������ļ�
//��������Դ�ļ� .c .cpp -> ������ .obj

//�����ļ�
//��һ���ȴ��ļ���ͨ�������ļ�ָ��ָ���ļ�
//�ļ�ָ��Ķ��壺FILE *�ļ�����
//�ڶ������ļ�ָ��ָ��Ҫ�������ļ�
//fopen("�ļ���·��"��"���ļ��ķ�ʽ");
//�ļ�·��������·�� ���·��
//�������ļ�������ͨ���������ļ��е����ݽ��в���
//���ġ��ر��ļ�
FILE* file;
#if 0
void test1()
{	
	//file = fopen("E:\C�ճ���ϰ\C�ļ�����1", "r");//����·��
	//file = fopen("1.txt", "r");//���·�� , "r"��ȡ
	//���ļ�
	file = fopen("1.txt", "w");//"w"д��,����ļ����ڻ�����ļ���ߵ����ݣ��ٽ���д�롣

	//�ж��ļ��Ƿ񱻴�
	/*if (file != NULL)
	{
		printf("�ļ��򿪳ɹ�\n");
	}*/

	//���ļ���д��һ���ַ�
	fputc('C', file);//�� 'C' д�뵽 file ��ȥ
	fputc('C', file);
	fputc('C', file);

	//���ļ���д��һ���ַ���
	fputs("\nhello world!  yes or no", file);

	char str[] = " ͨ�������������";
	fputs(str, file);

	//int a = 10;//0000 1010 
	//int b;
	fclose(file);//�ر��ļ�
}
#endif
void test2()
{
	//char c;
	//��ȡ�ļ�
	file = fopen("1.txt", "r");

	/*//��ȡ�ļ����� ���� �ַ�
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);//ÿ��ȡһ�������Զ�����ƶ�һλ*/

	/*//��ȡ�ַ���
	char str[1024] = { 0 };
	//��ȡ�ļ���> ����str[]�������ȥ ��> ��20���ַ� ��> �� file ָ����ļ���߶�
	fgets(str,1024,file);//��ȡ���� '\n' ֹͣ
	printf("%s\n", str);*/


	//��ȡ�����ļ�
	char arr[10240] = { 0 };
	int x = 0;
	while (!feof(file))//�ж��ļ�ָ���Ƿ��Ƕ�����ĩβ�����˷���һ������򷵻�һ����
	{
		arr[x] = fgetc(file);
		x++;
	}
	printf("%s\n", arr);

	fclose(file);
}

int main()
{
	//test1();
	test2();
	return 0;
}