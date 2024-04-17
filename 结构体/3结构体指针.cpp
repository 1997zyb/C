#include <iostream>
using namespace std;

// 定义一个结构体
struct Student {
  string name; // 姓名
  int age;     // 年龄
  int score;   // 分数
};

int main() {

  // 创建一个学生的结构体变量
  struct Student stu = {"张三", 12, 90};

  // 通过指针指向结构体变量
  struct Student *p = &stu;
  // 通过指针访问结构体变量中的数据（->  横线，箭头）
  cout << "姓名是:" << p->name << "，年龄是:" << p->age
       << "，分数是:" << p->score << endl;
}