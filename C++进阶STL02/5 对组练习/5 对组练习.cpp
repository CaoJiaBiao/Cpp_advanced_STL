#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
int main(void)
{

	//��һ�ַ�ʽ ����һ��pair
	pair<int, string> mypair(10, "abv");
	cout << mypair.first << endl;
	cout << mypair.second << endl;
	//�ڶ��ַ�ʽ ����һ��pair
	pair<int, string> mypair2 = make_pair(10, "abc");
	//��֪��make_pair����ʲô���͵ģ���ָ��Ϊauto���Զ�ָ������
	//auto mypair2 = make_pair("aaa", "bbb");
	cout << mypair2.first << " " << mypair2.second << endl;
	//������ 
	pair<int, string> mypair3 = mypair; //��������
}