#include <iostream>
using namespace std;

/*
  所谓数组，就是一个集合，里面放了相同类型的数据元素
  使用连续的内存存放


  一维数组的几种表示方法
    （1）数据类型   数组名[数组长度];
    （2）数据类型   数组名[数组长度] = {值1，值2，值3，...};
    （3）数据类型   数组名[] = {值1，值2，值3，...};

*/

int main() {

  // int numArr[]; // 这样写是错误的，必须指明数组的长度；

  int numArr[5]; // 没有初始值
  numArr[0] = 10;
  numArr[1] = 20;
  numArr[2] = 30;
  numArr[3] = 40;
  numArr[4] = 50;
  cout << numArr[4] << endl;

  // 如果初始化数据时，没有全部填写完，那么会用0填补剩余的数据{10, 20, 30}
  int numArr2[5] = {10, 20, 30, 40, 50}; // 有初始值
  for (int i = 0; i < 5; i++) {
    cout << numArr2[i] << endl;
  }

  int numArr3[] = {90, 80, 70, 60, 50};
  for (int i = 0; i < 5; i++) {
    cout << numArr3[i] << endl;
  }

  /*
    一维数组名的用途:
      （1）统计整个数组在内存中所占用的空间
      （2）可以获取数组在内存中的首地址
  */

  int numArr4[5] = {1, 2, 3, 4, 5};
  cout << sizeof(numArr4) << endl; // 获取整个数组所占用的内存空间
  cout << sizeof(numArr4[0]) << endl; // 获取第一个元素的所占用的内存空间
  cout << numArr4 << endl;            // 获取数组在内存中的首地址
  cout << &numArr4[0] << endl;
  cout << &numArr4[1] << endl;

  for (int i = 0; i < sizeof(numArr4) / sizeof(numArr4[0]); i++) {
    cout << numArr4[i] << endl;
  }
}