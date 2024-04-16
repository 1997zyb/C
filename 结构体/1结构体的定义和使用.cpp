#include <iostream>
using namespace std;

/*
  结构体属于用户自定义的数据类型，允许存储不同的数据类型

  语法：
    struct 结构体名 { 结构体成员列表 }；


  使用结构体创建变量有三种方式：

    （1）struct 结构体名 变量名；
    （2）struct 结构体名 变量名 = { 成员1，成员2，成员3 }
    （3）定义结构体时顺便创建变量
*/

// 结构体定义
struct Student {
  string name; // 姓名
  int age;     // 年龄
  int score;   // 分数
} S3;

int main() {
  // 创建结构体变量（struct关键字可以省略）
  struct Student S1;
  S1.name = "张三";
  S1.age = 14;
  S1.score = 100;
  cout << "姓名：" << S1.name << "；年龄：" << S1.age << "，分数：" << S1.score
       << endl;

  struct Student S2 = {"李四", 16, 88};
  cout << "姓名：" << S2.name << "；年龄：" << S2.age << "，分数：" << S2.score
       << endl;

  S3.name = "王五";
  S3.age = 15;
  S3.score = 90;
  cout << "姓名：" << S3.name << "；年龄：" << S3.age << "，分数：" << S3.score
       << endl;
}