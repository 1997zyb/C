#include <iostream>
using namespace std;

// 定义学生结构体
struct Student {
  string name; // 姓名
  int age;     // 年龄
  int score;   // 分数
};
// 定义老师结构体
struct Teacher {
  int id;             // 编号
  string name;        // 姓名
  int age;            // 年龄
  struct Student stu; // 学生
};

int main() {
  struct Teacher t;
  t.id = 111;
  t.name = "赵老师";
  t.age = 42;
  t.stu.name = "小王";
  t.stu.age = 12;
  t.stu.score = 70;
  cout << "老师姓名：" << t.name << endl;
  Student stu1 = {"张三", 12, 30};
  Student stu2 = {"赵四", 13, 40};
   cout << "学生姓名：" << stu1.name << endl;
   cout << "学生姓名：" << stu2.name << endl;
}