#include <iostream>
using namespace std;

// const修饰指针：常量指针
// const修饰常量：指针常量
// const既修饰指针，又修饰常量

int main() {
  // int a = 10;
  // int b = 20;

  // 常量指针：指针的指向可以修改，指针指向的值不可修改
  // 就是说p可以重新指向b，但是p却不能修改b的值；
  // const int *p = &a;
  // p = &b; // 修改了指向
  // *p = 40; //修改了值，是错误的
  // cout << *p << endl;
  // cout << &a << endl;
  // cout << p << endl;

  // 指针常量：指针的指向不可修改，但是指针指向的值可以修改
  // int *const p = &a;
  // p= &b; // 修改了指向，是错误的
  // *p = 40; // 修改了值
  // cout << *p << endl;
  // cout << &a << endl;

  // 既修饰指针，又修饰常量   什么都不能修改
  // const int *const p = &a;

  // 利用指针访问数组元素
  // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  // int *p = arr; // 指向数组的指针
  // cout << arr[0] << endl;
  // cout << *p << endl;
  // p++; // 让指针向后偏移4个字节
  // cout << *p << endl;
  // for (int i = 0; i < 10; i++) {
  //   /* code */
  //   cout << *p << endl;
  //   p++;
  // }
  int a = 10;
  int b = 20;
  // 常量指针
  // const int *p = &a; // 指针的指向可以修改
  // // *p = 100; //错误（指针指向的值不能修改）
  //  p = &b;
  // cout << *p << endl;

  // 指针常量
  // int *const p = &a;
  // *p = 100; // （值可以修改）
  // // p = &b; // 错误（指向不能修改）
  // cout << *p << endl;

  // 既修饰指针，又修饰常量（都不能改）
  // const int *const p = &a;

  // 指针和数组
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int *p = arr;
  // cout << arr[0] << endl;
  // p++;
  // cout << *p << endl;
  for (int i = 0; i < 10; i++) {
    cout << *p << endl;
    p++;
  }
}