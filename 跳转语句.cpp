#include <iostream>
using namespace std;

int main()
{
  // break ��������switch��䣬while��䣬do...while��䣬forѭ�����˳�ѭ��
  // countinue ��ѭ������У���������ѭ����������δִ�е���䣬����ִ����һ��ѭ��
  for (int i = 1; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      continue;
      // break;
    }
    
    cout << i << endl;
  }
}