#include <iostream>
using namespace std;

int *func() {
  // int a = 10;
  // return &a;

  // ����new�ؼ��֣������ݿ��ٵ�����
  int *p = new int(10); // ����һ����ַ
  return p;
}
int main() {
  int *p = func();
  cout << *p << endl;
}