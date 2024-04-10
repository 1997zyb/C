#include <iostream>
using namespace std;

// 定义时struct不可以省略
struct Student {
  string name;
  int age;
  int score;
};
// struct Student {
//   string name;
//   int age;
//   int score;
// } stu3;
// 结构体：用于用户自定义的数据类型
// 语法：  struct 结构体名称 {结构体成员列表}
int main() {

  // struct Student stu1; // 创建结构体变量
  Student stu1; // struct关键字可以省略
  stu1.name = "张三";
  stu1.age = 18;
  stu1.score = 90;
  cout << "姓名是：" << stu1.name << endl
       << "年龄是：" << stu1.age << endl
       << "分数是：" << stu1.score << endl;

  // struct Student stu2 = {...};
  // struct Student stu2 = {"里斯", 19, 60};
  // cout << "姓名是：" << stu2.name << endl
  //      << "年龄是：" << stu2.age << endl
  //      << "分数是：" << stu2.score << endl;

  // stu3.name = "赵六";
  // stu3.age = 12;
  // stu3.score = 70;
  // cout << "姓名是：" << stu3.name << endl
  //      << "年龄是：" << stu3.age << endl
  //      << "分数是：" << stu3.score << endl;
}