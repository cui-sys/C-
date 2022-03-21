#include <iostream> //i - input 输入 , o - output 输出 , stream - 流 输入输出流头文件（类似stdio.h）
//std(标准) 使用标准命名空间
//#include<string.h>旧的风格
#include <cstring>//用C语言的头文件新的风格
using namespace std;

int main()
{
    cout << "Hello 你好!" << endl;

    int num = 0;
    cin >> num;
    cout<<num<<endl;

    char buf[128]="";
    strcpy(buf,"hello string");
    cout<<buf<<endl;

    return 0;
}
