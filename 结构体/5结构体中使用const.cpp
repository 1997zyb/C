#include <iostream>
using namespace std;

struct Student {
  string name;
  int age;
  int score;
};
void printS(const struct Student *stu) {
  // stu->age = 100; // 报错（不允许修改）
  cout << "姓名是：" << stu->name << "，年龄是：" << stu->age << "，分数是："
       << stu->score << endl;
};
// 用来防止误操作
int main() {
  struct Student stu = {"张三", 14, 100};
  printS(&stu);
}