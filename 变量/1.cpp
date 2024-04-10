#include <iostream>
using namespace std;

/*
定义变量语法：
  数据类型 变量名 = 初始值;

  变量命名规则：
    （1）不能是关键字
    （2）只能由字母、数字、下划线组成
    （3）第一个字符只能是字母或者下划线
    （4）变量名区分大小写
定义常量语法：
  #define 常量名 常量值 （通常在文件上方定义，表示一个常量）

  const 数据类型 常量名 = 常量值 （在变量定义的前面加上const关键字，不可修改）

*/
#define Day 7
int main() {
  int a = 10;
  cout << "a的值是：" << a << endl;
  // Day = 14;  // 错误，不可修改
  cout << "一周有：" << Day << "天" << endl;

  const int month = 12;
  // month = 24; // 错误，不可修改
  cout << "一年有：" << month << "个月" << endl;
  int $a = 10;
  cout << "$a的值是：" << $a << endl;
}