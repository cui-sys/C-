#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Hello World!\n");
    char buf[128]="";
    strcpy(buf,"hello c");//���﷨ û������ͷ�ļ����ᱨ��
    printf("%s\n",buf);

    return 0;
}
