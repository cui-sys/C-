#include <iostream> //i - input ���� , o - output ��� , stream - �� ���������ͷ�ļ�������stdio.h��
//std(��׼) ʹ�ñ�׼�����ռ�
//#include<string.h>�ɵķ��
#include <cstring>//��C���Ե�ͷ�ļ��µķ��
using namespace std;

int main()
{
    cout << "Hello ���!" << endl;

    int num = 0;
    cin >> num;
    cout<<num<<endl;

    char buf[128]="";
    strcpy(buf,"hello string");
    cout<<buf<<endl;

    return 0;
}
