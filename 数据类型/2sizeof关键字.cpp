#include <iostream>
using namespace std;

/*
  ͳ������������ռ�õ��ڴ��С
*/
int main() {
  short num1 = 10; // ������
  int num2 = 10; // ����
  long num3 = 10; // ������
  long long num4 = 10; // ��������

  cout << sizeof(num1) << endl;
  cout << sizeof(short) << endl; // 2

  cout << sizeof(num2) << endl;
  cout << sizeof(int) << endl; // 4

  cout << sizeof(num3) << endl;
  cout << sizeof(long) << endl; // 4

  cout << sizeof(num4) << endl;
  cout << sizeof(long long) << endl; // 8
}