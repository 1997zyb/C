#include <iostream>
using namespace std;

void mySwap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void mySwap2(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}
int main() {
  int a = 10;
  int b = 20;
  mySwap(&a, &b);
  cout << "a的值是：" << a << endl;
  cout << "b的值是：" << b << endl;


  mySwap2(a, b);
  cout << "a的值是：" << a << endl;
  cout << "b的值是：" << b << endl;
}