#include <iostream>
using namespace std;

// 无参无返
void test1() { cout << "无参无返" << endl; }
// 有参无返
void test2(int a) { cout << "有参无返" << a << endl; }
// 无参有返
int test3() {
  cout << "无参有返" << endl;
  return 10;
}
// 有参有返
int test4(int a) {
  cout << "有参有返" << endl;
  return a;
}

int main() {
  // 无参无返
  test1();
  // 有参无返
  int a = 10;
  test2(a);
  // 无参有返
  test3();
  // 有参有返
  test4(a);
  system("pause");
}