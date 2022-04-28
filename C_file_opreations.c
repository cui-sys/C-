#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//文件：文本文件、二进制文件
//编译器：源文件 .c .cpp -> 二进制 .obj

//操作文件
//第一、先打开文件：通过定义文件指针指向文件
//文件指针的定义：FILE *文件名；
//第二、用文件指针指向要操作的文件
//fopen("文件的路径"，"打开文件的方式");
//文件路径：绝对路径 相对路径
//第三、文件操作：通过函数对文件中的数据进行操作
//第四、关闭文件
FILE* file;
#if 0
void test1()
{	
	//file = fopen("E:\C日常练习\C文件操作1", "r");//绝对路径
	//file = fopen("1.txt", "r");//相对路径 , "r"读取
	//打开文件
	file = fopen("1.txt", "w");//"w"写入,如果文件存在会清空文件里边的内容，再进行写入。

	//判断文件是否被打开
	/*if (file != NULL)
	{
		printf("文件打开成功\n");
	}*/

	//往文件中写入一个字符
	fputc('C', file);//把 'C' 写入到 file 中去
	fputc('C', file);
	fputc('C', file);

	//往文件中写入一个字符串
	fputs("\nhello world!  yes or no", file);

	char str[] = " 通过数组操作数据";
	fputs(str, file);

	//int a = 10;//0000 1010 
	//int b;
	fclose(file);//关闭文件
}
#endif
void test2()
{
	//char c;
	//读取文件
	file = fopen("1.txt", "r");

	/*//读取文件数据 —— 字符
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);
	c = fgetc(file);
	printf("%c\n", c);//每读取一个，会自动向后移动一位*/

	/*//读取字符串
	char str[1024] = { 0 };
	//读取文件—> 读到str[]数组里边去 —> 读20个字符 —> 在 file 指向的文件里边读
	fgets(str,1024,file);//读取遇到 '\n' 停止
	printf("%s\n", str);*/


	//读取整个文件
	char arr[10240] = { 0 };
	int x = 0;
	while (!feof(file))//判断文件指针是否是读到了末尾，到了返回一个真否则返回一个假
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