#include <iostream>
using namespace std;
// void swap(int *b, int *c) {
//   cout << "����" << endl;
//   cout << "*b��" << *b << endl;
//   cout << "*c��" << *c << endl;
//   return;
// }
void increm(int *p) { *p = *p + 1; }
int main() {
  // int b = 10;
  // int c = 20;
  // swap(b, c);

  // ����һ��ָ��  �﷨����������
  // *ָ����� int a = 10; int *p; ��ָ��p��¼����a�ĵ�ַ p = &a; cout << "a�ĵ�ַ�ǣ�" << &a
  // << endl; cout << "ָ��p�ǣ�" << p << endl;

  // ʹ��ָ��
  // ����ͨ�������õķ�ʽ�ҵ�ָ��ָ����ڴ�
  // cout << *p << endl;
  // // �޸�����
  // *p = 1000;
  // cout << "a��ֵ��" << a << endl;

  // ָ����ռ�õ��ڴ�ռ䣬����32λ����ϵͳ��4���ֽڣ���64λ����ϵͳ��8���ֽڣ�
  // int b = 20;
  // int *p = &b; // ����һ��ָ�����p����ʹp = &b;
  // cout << sizeof(*p) << endl;
  // cout << sizeof(p) << endl;
  // cout << sizeof(int *) << endl;
  // cout << sizeof(float *) << endl;
  // cout << sizeof(double *) << endl;
  // cout << sizeof(char *) << endl;
  // size(*p)������ָ����ָ�����Ĵ�С
  // size(p)������ָ����������Ĵ�С

  // ��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
  // ��;����ʼ��ָ��������ڴ�����0��
  // ע�⣺��ָ��ָ����ڴ��ǲ��ɷ��ʵ�
  // �ڴ���0~255��ϵͳռ���ڴ棬�������û����ʣ�
  // int *p = NULL;
  // *p = 100;
  // cout << *p << endl;

  // Ұָ��
  // int *p = (int *)0x1100;
  // cout << *p << endl;
  //   int a = 10;
  //   int *p;
  //   // ��a�ĵ�ַ��ֵ��p
  //   p = &a;
  //   cout << p << endl;
  //   cout << &a << endl;
  // int a = 100;
  // cout << &a << endl;
  // int a = 1;
  // cout << &a << endl;
  // int *p = &a;
  // cout << *p << endl;
  // increm(&a);
  // cout << a << endl;
  // int *p;
  // int a = 10;
  // p = &a; // &取地址符号，p此时记录的是a的地址
  // cout << *p << endl; // 解引用
  // cout << &a << endl; // 得到a的地址
  // *p = 1000;
  // cout << a << endl;

  // 指针所占用的空间（32位是4个字节，64位是8个字节）
  // cout << sizeof(p) << endl;
  // cout << sizeof(int *) << endl;
  // cout << sizeof(float *) << endl;
  // cout << sizeof(double *) << endl;
  // cout << sizeof(char *) << endl;

  // 空指针 ：指向内存中编号为0的空间
  // 不可以进行访问的
  // int *p = NULL; // 初始化指针变量
  // int a;
  // p = &a;
  // cout << p << endl;
  // cout << *p << endl;
  // cout << a << endl;

  // 野指针：指向的是非法的内存空间
  // int *p = (int *)0x1100;
  // cout << *p << endl;
}