#include <ctime>
#include <iostream>
using namespace std;

// struct Student {
//   string name;
//   int score;
// };
// struct Teacher {
//   string name;              // ��ʦ����
//   struct Student sArray[5]; // ѧ��
// };
// void alSpace(struct Teacher tArray[], int len) {
//   for (int i = 0; i < len; i++) {
//     string nameSeed = "ABCDE";
//     tArray[i].name = "_��ʦ";
//     tArray[i].name = nameSeed[i] + tArray[i].name;
//     // ͨ��ѭ������ʦ����ѧ����ֵ
//     for (int j = 0; j < 5; j++) {
//       tArray[i].sArray[j].name = "_ѧ��";
//       tArray[i].sArray[j].name = nameSeed[j] + tArray[i].sArray[j].name;

//       int random = rand() % 61 + 40;
//       tArray[i].sArray[j].score = random;
//     }
//   }
// };
// void printInfo(struct Teacher tArray[], int len) {
//   for (int i = 0; i < len; i++) {
//     cout << "��ʦ������" << tArray[i].name << endl;
//     for (int j = 0; j < 5; j++) {
// cout << "\tѧ��������" << tArray[i].sArray[j].name << "���Է���"
//      << tArray[i].sArray[j].score << endl;
//     }
//   }
// };
// int main() {
//   // ���������
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
//     cout << "������" << hArray[i].name << "������" << hArray[i].age <<
//     "���Ա�"
//          << hArray[i].sex << endl;
//   }
// }
int main() {
  struct Hero hArray[5] = {
      {"����", 45, "��"}, {"�ŷ�", 43, "��"}, {"����", 56, "��"},
      {"����", 37, "��"}, {"����", 19, "Ů"},
  };
  int len = sizeof(hArray) / sizeof(hArray[0]);
  cout << len << endl;
  bubble(hArray, len);
  // printHero(hArray, len);
  for (int i = 0; i < len; i++) {
    cout << "������" << hArray[i].name << "������" << hArray[i].age << "���Ա�"
         << hArray[i].sex << endl;
  }
}