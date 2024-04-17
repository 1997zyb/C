#include <iostream>
using namespace std;

/*
  值传递:
  地址传递:
*/

struct Student {
  string name;
  int age;
  int score;
};

void printS(struct Student s) {
  s.age = 200;
  cout << "姓名是：" << s.name << "，年龄是：" << s.age << "，分数是："
       << s.score << endl;
};
void printS2(struct Student *s) {
  s->age = 200;
  cout << "里面的"
       << "姓名是：" << s->name << "，年龄是：" << s->age << "，分数是："
       << s->score << endl;
};

int main() {
  struct Student s; // 创建一个结构体变量
  s.name = "张三";
  s.age = 12;
  s.score = 100;
  printS(s); // 值传递
  // printS2(&s); // 地址传递
  // cout << &s << endl; // 是一个地址
  cout << "外面的"
       << "姓名是：" << s.name << "，年龄是：" << s.age << "，分数是："
       << s.score << endl;
}