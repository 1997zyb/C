#include <iostream>
using namespace std;

const double PI = 3.14;

// ���һ����
class Circle {

  // ����Ȩ��
public:
  int m_r; // �뾶
  // ��Ϊ
  // ��ȡԲ���ܳ�
  double getZC() { return 2 * PI * m_r; }
};

class Student {
public:
  // ����
  string m_Name; // ����
  int m_Id;      // ѧ��

  // ��Ϊ
  void showInfo() {
    cout << "������" << m_Name << endl;
    cout << "ѧ�ţ�" << m_Id << endl;
  }
  void setName(string name) { m_Name = name; }
  void setId(int id) { m_Id = id; }
};

/*
  ��װ �̳У���̬
*/
int main() {
  // ͨ��Բ�࣬����һ�������Բ������
  // ʵ������ͨ��һ���ഴ��һ������Ĺ���
  Circle cl;
  cl.m_r = 10;
  cout << "Բ���ܳ��ǣ�" << cl.getZC() << endl;

  // ʵ����һ��ѧ��
  Student s;
  s.m_Name = "����";
  s.m_Id = 1;
  s.showInfo();
  Student s2;
  s2.m_Name = "����";
  s2.setName("����");
  s2.m_Id = 2;
  s2.setId(5);
  s2.showInfo();
  
  /*
    ���е����Ժ���Ϊ ͳ��Ϊ��Ա
    ���� �ֳƳ�Ա���Ի��߳�Ա����
    ��Ϊ �ֳƳ�Ա�������߳�Ա����
  */ 
}