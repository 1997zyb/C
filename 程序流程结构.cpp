#include <iostream>
using namespace std;

#include <ctime>

int main()
{
  // int score = 0;
  // cout << "������ѧ������" << endl;
  // cin >> score;
  // cout << "�����ѧ������Ϊ��" << score << endl;
  // if (score > 600)
  // {
  //   cout << "��ϲ������һ��" << endl;
  // }
  // else
  // {
  //   cout << "�ܿ�ϧ������һ��" << endl;
  // }
  // int num1 = 0;
  // int num2 = 0;
  // int num3 = 0;
  // cout << "������С��A������" << endl;
  // cin >> num1;
  // cout << "������С��B������" << endl;
  // cin >> num2;
  // cout << "������С��C������" << endl;
  // cin >> num3;
  // cout << "С��A�����أ�" << num1 << endl;
  // cout << "С��B�����أ�" << num2 << endl;
  // cout << "С��C�����أ�" << num3 << endl;
  // if (num1 > num2)
  // {
  //   if (num1 > num3)
  //   {
  //     cout << "С��A���������أ��ǣ�" << num1 << endl;
  //   }
  //   else
  //   {
  //     cout << "С��C���������أ��ǣ�" << num3 << endl;
  //   }
  // }
  // else if (num2 > num1)
  // {
  //   if (num2 > num3)
  //   {
  //     cout << "С��B���������أ��ǣ�" << num2 << endl;
  //   }
  //   else
  //   {
  //     cout << "С��C���������أ��ǣ�" << num3 << endl;
  //   }
  // }
  // int score = 0;
  // cout << "�������������֣�";
  // cin >> score;
  // switch (score)
  // {
  // case 10:
  //   cout << "��һ�������Ӱ" << endl;
  //   break;
  // case 9:
  //   cout << "Ҳ��һ�������Ӱ" << endl;
  //   break;
  // case 8:
  //   cout << "��һ����ͨ��Ӱ" << endl;
  //   break;
  // default:
  //   cout << "��Ƭ" << endl;
  //   break;
  // }
  // ��ӡ10����
  // while (num < 10)
  // {
  //   cout << num << endl;
  //   num++;
  // }

  // ������
  // srand((unsigned int)time(NULL)); // ������������,�������õ�ǰϵͳʱ�����������,��ֹÿ���������һ��
  // int num = rand() % 100 + 1;      // ����һ�������
  // int value = 0;                   // ������������
  // int score = 5;                   // ��5�λ���

  // cout << "���������²������(1~100)��";
  // while (score > 0)
  // {
  //   cin >> value;

  //   if (value > num)
  //   {
  //     score--;
  //     cout << "�²����,����" << score << "�λ���" << endl;
  //   }
  //   else if (value < num)
  //   {
  //     score--;
  //     cout << "�²��С,����" << score << "�λ���" << endl;
  //   }
  //   else
  //   {
  //     cout << "��ϲ�¶���,��̫����!" << endl;
  //     system("pause");
  //     break; // �˳�ѭ��
  //   }
  // }
  // if (score == 0)
  // {
  //   cout << "̫�ź��ˣ�û�в¶ԡ���ȷ���ǣ�" << num << endl;
  //   system("pause");
  // }
  // int num = 0;
  // do
  // {
  //   cout << num << endl;
  //   num++; // ����ִ��һ��
  // } while (num < 10);

  // ˮ�ɻ���
  // ����do...whileѭ��,�����λ���е�����ˮ�ɻ�����
  // ��ȡ��λ���ĸ�λ,ʮλ,��λ
  // ��λ:ȡģ��10;
  // ʮλ:������10,�õ���λ��,��ȡģ��10;
  // ��λ:����100
  // int num = 100;
  // do
  // {
  //   int a = num % 10;      // �����λ
  //   int b = num / 10 % 10; // ���ʮλ
  //   int c = num / 100;      // �����λ
  //           if (a *a *a + b *b *b + c *c *c == num)
  //   {
  //     cout << num << endl;
  //   }
  //   num++;
  // } while (num < 1000);

  // for (int i = 0; i < 10; i++)
  // {
  //   cout << i << endl;
  // }

  // �����ӣ���λ7������ʮλ7������7�ı�����
  // for (int i = 1; i < 100; i++)
  // {

  //   if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
  //   {
  //     cout << "������" << endl;
  //   }
  //   else
  //   {
  //     cout << i << endl;
  //   }
  // }

  // Ƕ��ѭ��
  // for (int i = 0; i < 10; i++)
  // {
  //   for (int j = 0; j < 10; j++)
  //   {
  //     cout << "*" << " ";
  //   }
  //    cout << endl;
  // }

  // Ƕ��ѭ���������˷��ھ���
  for (int i = 1; i < 10; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << "*" << i<< "=" << j * i << " ";
    }
    cout << endl;
  }
}