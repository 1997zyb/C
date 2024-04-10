#include <iostream>
using namespace std;

// // 定义一个结构体
// struct Student {
//   string name; // 姓名
//   int age;     // 年龄
//   int score;   // 分数
// };

// int main() {
//   struct Student stu = {"张三", 12, 60};
//   cout << stu.name << endl;
// }

// // 定义一个结构体
// struct Student {
//   string name; // 姓名
//   int age;     // 年龄
//   int score;   // 分数
// };

// int main() {

//   // 创建一个学生的结构体变量
//   struct Student stu = {"张三", 12, 90};

//   // 通过指针指向结构体变量
//   struct Student *p = &stu;

//   // 通过指针访问结构体变量中的数据（->  横线，箭头）
//   cout << "姓名是:" << p->name << "，年龄是:" << p->age << "，分数是:" <<
//   p->score
//        << endl;
// }

// 定义一个结构体
struct Student {
  string name; // 姓名
  int age;     // 年龄
  int score;   // 分数
};
int main() {
  // 定义一个结构体变量
  struct Student stuArr[3] = {
      {"张三", 12, 70},
      {"李四", 13, 80},
      {"王五", 14, 90},
  };
  // 获取长度
  int len = sizeof(stuArr) / sizeof(stuArr[0]);
  cout << len << endl;
  for (int i = 0; i < len; i++) {
    cout << "姓名是：" << stuArr[i].name << "，年龄是：" << stuArr[i].age
         << "，分数是：" << stuArr[i].score << endl;
  }
}