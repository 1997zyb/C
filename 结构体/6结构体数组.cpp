#include <iostream>
using namespace std;

// 定义一个结构体
struct Student {
  string name;
  int age;
  int score;
};
int main() {
  struct Student stuArray[3] = {
      {"张三", 14, 100},
      {"赵四", 15, 90},
      {"王五", 16, 80},
  };
  stuArray[2].name = "赵六";
  int len = sizeof(stuArray) / sizeof(stuArray[0]);
  for (int i = 0; i < len; i++) {
    cout << "姓名：" << stuArray[i].name << "，年龄：" << stuArray[i].age
         << "，分数：" << stuArray[i].score << endl;
  }
}