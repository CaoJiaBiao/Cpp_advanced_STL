#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stack>
using namespace std;
//stack������������

//�����Դ�ָ����Զ�������
void test1()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout << s.top()<<endl;
	stack<int> s2(s);//�������캯��
	stack<int> s3 = s;//�������캯��
	cout << s3.top() << endl;
	if (s3.empty())
	{
		cout << "s3Ϊ��" << endl;

	}
	else
	{
		cout << "s3��Ϊ��" << endl;
	}
	while (!s3.empty())
	{
		int val = s3.top(); // top����ջ��Ԫ��
		cout << val << " ";
		s3.pop();
	}
}
int main(void)
{
	test1();
	return 0;
}