#include <iostream>
using namespace std;

void test(int a, int) { cout << "ִ��" << endl; }
int main() {
  int a = 10;
  test(a, 10);
}