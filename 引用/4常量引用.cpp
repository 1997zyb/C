#include <iostream>
using namespace std;

// ���������βΣ���ֹ�����

void showValue(const int &val) {
  // val = 1000; // ʹ����const���Ͳ����޸����ֵ
  cout << "val = " << val << endl;
}
int main() {
  int a = 10;
  // int &ref = 10; //�������ñ�����һ��Ϸ����ڴ�ռ䣬

  // ����const�󣬱������Դ�������˴���
  // �൱�� int temp = 10; const int &ref = temp;
  const int &ref = 10;
  showValue(a);
  // ref = 20; // �����޸�
  // int *p = &a;
  // cout << *p << endl;
  // *p = 50;
  // cout << a << endl;
}