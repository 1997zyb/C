#include <iostream>
using namespace std;

// 常量，用于记录程序中不可更改的数据

/*
   #define宏常量： #define 常量名 常量值
   通常在文件上方定义，表示一个常量
*/
/*
   const修饰的变量：const 数据类型 常量名 = 常量值
   通常在变量定义前加上关键字const，修饰该变量为常量，不可修改
*/
/*
   变量名起名规则：
      （1）标识符不能是关键字
      （2）标识符只能由字母，数字，下划线组成
      （3）第一个字符必须是字母或者下划线
      （4）标识符区分大小写
*/
#define day 7
int main()
{
   // const int NUM = 10;
   // int $t = 100;
   // cout << "一周有" << day << "天" << endl;
   // cout << "$t是：" << $t << endl;
   int sum1 = 10;
   int sum2 = 20;
   int sum = sum1 + sum2;
   cout << "和是" << sum << endl;
   // system("pause");
   return 0;
}