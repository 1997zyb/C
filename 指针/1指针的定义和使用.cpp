#include <iostream>
using namespace std;

/*
  �������� * ָ�������

*/
int main() {
  int a = 10;
  // int *p;
  // p = &a;             // ȡ��a�ĵ�ַ����p
  // cout << *p << endl; // ��ʱ*p����ȡ����ַ��Ӧ��ֵ
  // cout << &a << endl;
  int *p = &a;
  cout << *p << endl;

  // ������
  *p = 20;
  cout << a << endl;
}