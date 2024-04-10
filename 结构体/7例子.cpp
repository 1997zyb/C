#include <ctime>
#include <iostream>
using namespace std;

// struct Student {
//   string name;
//   int score;
// };
// struct Teacher {
//   string name;              // 老师姓名
//   struct Student sArray[5]; // 学生
// };
// void alSpace(struct Teacher tArray[], int len) {
//   for (int i = 0; i < len; i++) {
//     string nameSeed = "ABCDE";
//     tArray[i].name = "_老师";
//     tArray[i].name = nameSeed[i] + tArray[i].name;
//     // 通过循环给老师带的学生赋值
//     for (int j = 0; j < 5; j++) {
//       tArray[i].sArray[j].name = "_学生";
//       tArray[i].sArray[j].name = nameSeed[j] + tArray[i].sArray[j].name;

//       int random = rand() % 61 + 40;
//       tArray[i].sArray[j].score = random;
//     }
//   }
// };
// void printInfo(struct Teacher tArray[], int len) {
//   for (int i = 0; i < len; i++) {
//     cout << "老师姓名：" << tArray[i].name << endl;
//     for (int j = 0; j < 5; j++) {
// cout << "\t学生姓名：" << tArray[i].sArray[j].name << "考试分数"
//      << tArray[i].sArray[j].score << endl;
//     }
//   }
// };
// int main() {
//   // 随机数种子
//   srand((unsigned int)time(NULL));
//   struct Teacher tArray[3];
//   int len = sizeof(tArray) / sizeof(tArray[0]);
//   alSpace(tArray, len);
//   printInfo(tArray, len);
// }

struct Hero {
  string name;
  int age;
  string sex;
};
void bubble(struct Hero hArray[], int len) {
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < len - i - 1; j++) {
      if (hArray[j].age > hArray[j + 1].age) {
        struct Hero temp = hArray[j];
        hArray[j] = hArray[j + 1];
        hArray[j + 1] = temp;
      }
    }
  }
};
// void printHero(struct Hero hArray[], int len) {
//   for (int i = 0; i < len; i++) {
//     cout << "姓名：" << hArray[i].name << "，年龄" << hArray[i].age <<
//     "，性别"
//          << hArray[i].sex << endl;
//   }
// }
int main() {
  struct Hero hArray[5] = {
      {"关羽", 45, "男"}, {"张飞", 43, "男"}, {"刘备", 56, "男"},
      {"吕布", 37, "男"}, {"貂蝉", 19, "女"},
  };
  int len = sizeof(hArray) / sizeof(hArray[0]);
  cout << len << endl;
  bubble(hArray, len);
  // printHero(hArray, len);
  for (int i = 0; i < len; i++) {
    cout << "姓名：" << hArray[i].name << "，年龄" << hArray[i].age << "，性别"
         << hArray[i].sex << endl;
  }
}