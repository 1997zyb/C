#include <iostream>
using namespace std;

// �޲��޷�
void test1() { cout << "�޲��޷�" << endl; }
// �в��޷�
void test2(int a) { cout << "�в��޷�" << a << endl; }
// �޲��з�
int test3() {
  cout << "�޲��з�" << endl;
  return 10;
}
// �в��з�
int test4(int a) {
  cout << "�в��з�" << endl;
  return a;
}

int main() {
  // �޲��޷�
  test1();
  // �в��޷�
  int a = 10;
  test2(a);
  // �޲��з�
  test3();
  // �в��з�
  test4(a);
  system("pause");
}