#include <iostream>
using namespace std;

/*
  �ַ��ͱ���������ʾ�����ַ�
  char ch = 'a'
  ע�⣺����ʾ�ַ��ͱ���ʱ���õ����Ž��ַ�����������Ҫ��˫���ţ�
        ��������ֻ����һ���ַ������������ַ�����
        ֻռ��1���ֽڣ�
        �ַ��ͱ��������ǰ��ַ�����ŵ��ڴ��д����������ǰѶ�Ӧ��ASCII����ŵ��洢��Ԫ��

*/
int main() {
  char ch = 'z';
  cout << ch << endl;
  cout << (int)ch << endl; // �ַ���Ӧ��ASCII����
  cout << sizeof(char) << endl;

  char ch2 = 'c';
  cout << (int)ch2 << endl;
  cout << ch2 << endl;
  char a = 'B'; // ��ͬ�� char a = 66;
  char b = 'C'; // ��ͬ�� char b = 67;

  printf("%d\n", a + b); // ��� 133
}