#include <iostream>
using namespace std;

// ����ʱstruct������ʡ��
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
// �ṹ�壺�����û��Զ������������
// �﷨��  struct �ṹ������ {�ṹ���Ա�б�}
int main() {

  // struct Student stu1; // �����ṹ�����
  Student stu1; // struct�ؼ��ֿ���ʡ��
  stu1.name = "����";
  stu1.age = 18;
  stu1.score = 90;
  cout << "�����ǣ�" << stu1.name << endl
       << "�����ǣ�" << stu1.age << endl
       << "�����ǣ�" << stu1.score << endl;

  // struct Student stu2 = {...};
  // struct Student stu2 = {"��˹", 19, 60};
  // cout << "�����ǣ�" << stu2.name << endl
  //      << "�����ǣ�" << stu2.age << endl
  //      << "�����ǣ�" << stu2.score << endl;

  // stu3.name = "����";
  // stu3.age = 12;
  // stu3.score = 70;
  // cout << "�����ǣ�" << stu3.name << endl
  //      << "�����ǣ�" << stu3.age << endl
  //      << "�����ǣ�" << stu3.score << endl;
}