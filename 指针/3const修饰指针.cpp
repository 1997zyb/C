#include <iostream>
using namespace std;

/*
  const修饰指针，叫常量指针
    指针的指向可以修改，指针指向的值不能修改；

  const修饰常量，叫指针常量
    指针指向的值可以修改，指针指向不能修改；

  const既修饰指针，又修饰常量
    都不能修改

*/
int main() {
  int a = 10;
  int b = 10;

  // const int *p = &a;
  // p = &b; // 指针指向可以改

  int *const p = &a;
  *p = 30;
  cout << "a的值是"<<a << endl;
}