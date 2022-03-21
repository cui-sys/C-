#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello World!\n");
    char buf[128]="";
    strcpy(buf,"hello c");//弱语法 没有引用头文件不会报错
    printf("%s\n",buf);

    return 0;
}
