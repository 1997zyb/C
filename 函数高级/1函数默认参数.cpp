#include <iostream>
using namespace std;

int test(int a, int b = 20) {
  return a + b;
  cout << a << endl;
  cout << b << endl;
}

// ��������
// int test2(int a, int b);
// ����ʵ��
int test2(int a = 100, int b = 100) { return a + b; }
// ���������ͺ���ʵ�ֲ���ͬʱ��Ĭ��ֵ

int main() {
  int a = 10;
  int res = test(a);

  int result = test2(a);
  cout << res << endl;
  cout << result << endl;
}