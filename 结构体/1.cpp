#include <iostream>
using namespace std;

// 结构体数组
/*
  语法：struct 结构体名称 数组名[元素个数] = { {}, {}, {}, ...}
*/

// 结构体定义
struct Student {
  string name; // 姓名
  int age;     // 年龄
  int score;   // 分数
};

int main() {
  // 结构体数组
  struct Student stuArray[3] = {
      {"张三", 18, 70},
      {"李四", 19, 80},
      {"王五", 20, 90},
  };
  // 修改值
  stuArray[2].name = "赵六";
  stuArray[2].age = 30;
  stuArray[2].score = 100;

  // 遍历结构体数组
  int len = sizeof(stuArray) / sizeof(stuArray[0]);
  cout << len << endl;
  for (int i = 0; i < len; i++) {
    /* code */
    cout << "姓名是：" << stuArray[i].name << "，年龄是：" << stuArray[i].age
         << "，分数是：" << stuArray[i].score << endl;
  }
}