#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//char* �� stringת��
void test1() {
	//string����ת��Ϊchar*�ַ���
	string s1 = "abcdefg";
	string snull;


	//cout << s2 << endl;

	const char *c2 = s1.c_str();
	cout << c2 << endl;

	//char*�����ַ���ת��Ϊstring�����ַ���

	char * c1 = (char*) "fsdjl";

	string s2(c1);
	
}

//string��ʼ��
void test2()
{
	string s1;//Ĭ�Ϲ���
	string s2 = "fsa";
	string s3(s2);
	string s4(4, 'a');

}
//string�����ַ�����ֵ�ʹ�ȡ
void test3() {
	string s1 = "abcdefg";
	char a = s1[2];
	cout << a;
	char b = s1.at(2);//�����쳣
	cout << b;
	

}
//string����ƴ�Ӳ���
void test4()
{
	string s1 = "aaa";
	string s2 = "bbb";
	string s3 = s1 + s2;
	cout << s3 <<endl;
	s3.append(s1);
	cout << s3 << endl;
}
//string���Һ��滻 �Ƚ�
void test5()
{
	string s = "acbdefg";
	int n = s.find("b");
	int m = s.rfind("b");
	cout << n << endl;
	cout << m << endl;
	s.replace(0, 4, "4");
	cout << s << endl;
}
//string �Ƚ� �Ӵ� �����ɾ��
void test6()
{

	//�Ƚ�
	string s1 = "abc";
	string s2 = "abd";
	int result = s1.compare(s2);
	cout << result << endl;
	string s3 = "abcdefghijklmnopq";
	string s4 = s3.substr(0, 3);
	cout << s4 << endl;
	s3.insert(s3.size(), "xyz");
	cout << s3<<endl;
	s3.erase(0, 4);
	cout << s3;

}
int main(void)
{
	test5();

}