#include <iostream>
using namespace std;

/*
  char ������ = '����ֵ';
  ��ռ�ڴ�ռ䣺1���ֽ�
  ���ڴ��д�����ַ���Ӧ��ASCII����

  ��������
    ��1�������ַ��ͱ���������ʹ��˫���ţ�"a"���Ǵ����
    ��2��ֻ����һ���ַ���'abc'���Ǵ����









  ת���ַ���\n����  \\   \tˮƽ�Ʊ��


*/

int main() {
  char ch1 = 'a';
  string ch2 = "��";

  cout << ch1 << endl;
  cout << (int)ch1 << endl;
  cout << sizeof(ch1) << endl;

  cout << ch2 << endl;
  cout << sizeof(ch2) << endl;

  // ���з�
  cout << "��\n"
       << "��" << endl;
  // "\\"
  cout << "\\" << endl;
  // \t
  cout << "aa\thelloworld" << endl;
  cout << "aaaa\thelloworld" << endl;
  cout << "aaaaa\thelloworld" << endl;
}