#include <iostream>
using namespace std;

#include <ctime>

int main()
{
  // int score = 0;
  // cout << "请输入学生分数" << endl;
  // cin >> score;
  // cout << "输入的学生分数为：" << score << endl;
  // if (score > 600)
  // {
  //   cout << "恭喜考上了一本" << endl;
  // }
  // else
  // {
  //   cout << "很可惜，差了一点" << endl;
  // }
  // int num1 = 0;
  // int num2 = 0;
  // int num3 = 0;
  // cout << "请输入小猪A的体重" << endl;
  // cin >> num1;
  // cout << "请输入小猪B的体重" << endl;
  // cin >> num2;
  // cout << "请输入小猪C的体重" << endl;
  // cin >> num3;
  // cout << "小猪A的体重：" << num1 << endl;
  // cout << "小猪B的体重：" << num2 << endl;
  // cout << "小猪C的体重：" << num3 << endl;
  // if (num1 > num2)
  // {
  //   if (num1 > num3)
  //   {
  //     cout << "小猪A的体重最重，是：" << num1 << endl;
  //   }
  //   else
  //   {
  //     cout << "小猪C的体重最重，是：" << num3 << endl;
  //   }
  // }
  // else if (num2 > num1)
  // {
  //   if (num2 > num3)
  //   {
  //     cout << "小猪B的体重最重，是：" << num2 << endl;
  //   }
  //   else
  //   {
  //     cout << "小猪C的体重最重，是：" << num3 << endl;
  //   }
  // }
  // int score = 0;
  // cout << "请输入您的评分：";
  // cin >> score;
  // switch (score)
  // {
  // case 10:
  //   cout << "是一部经典电影" << endl;
  //   break;
  // case 9:
  //   cout << "也是一部经典电影" << endl;
  //   break;
  // case 8:
  //   cout << "是一部普通电影" << endl;
  //   break;
  // default:
  //   cout << "烂片" << endl;
  //   break;
  // }
  // 打印10个数
  // while (num < 10)
  // {
  //   cout << num << endl;
  //   num++;
  // }

  // 猜数字
  // srand((unsigned int)time(NULL)); // 添加随机数种子,作用利用当前系统时间生成随机数,防止每次随机数都一样
  // int num = rand() % 100 + 1;      // 生成一个随机数
  // int value = 0;                   // 玩家输入的数据
  // int score = 5;                   // 共5次机会

  // cout << "请输入您猜测的数据(1~100)：";
  // while (score > 0)
  // {
  //   cin >> value;

  //   if (value > num)
  //   {
  //     score--;
  //     cout << "猜测过大,还有" << score << "次机会" << endl;
  //   }
  //   else if (value < num)
  //   {
  //     score--;
  //     cout << "猜测过小,还有" << score << "次机会" << endl;
  //   }
  //   else
  //   {
  //     cout << "恭喜猜对了,你太棒了!" << endl;
  //     system("pause");
  //     break; // 退出循环
  //   }
  // }
  // if (score == 0)
  // {
  //   cout << "太遗憾了，没有猜对。正确答案是：" << num << endl;
  //   system("pause");
  // }
  // int num = 0;
  // do
  // {
  //   cout << num << endl;
  //   num++; // 会先执行一下
  // } while (num < 10);

  // 水仙花数
  // 利用do...while循环,求出三位数中的所有水仙花数字
  // 获取三位数的个位,十位,百位
  // 个位:取模于10;
  // 十位:先整除10,得到两位数,再取模于10;
  // 百位:整除100
  // int num = 100;
  // do
  // {
  //   int a = num % 10;      // 求出个位
  //   int b = num / 10 % 10; // 求出十位
  //   int c = num / 100;      // 求出百位
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

  // 敲桌子（个位7，或者十位7，或者7的倍数）
  // for (int i = 1; i < 100; i++)
  // {

  //   if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
  //   {
  //     cout << "敲桌子" << endl;
  //   }
  //   else
  //   {
  //     cout << i << endl;
  //   }
  // }

  // 嵌套循环
  // for (int i = 0; i < 10; i++)
  // {
  //   for (int j = 0; j < 10; j++)
  //   {
  //     cout << "*" << " ";
  //   }
  //    cout << endl;
  // }

  // 嵌套循环案例：乘法口诀表
  for (int i = 1; i < 10; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << "*" << i<< "=" << j * i << " ";
    }
    cout << endl;
  }
}