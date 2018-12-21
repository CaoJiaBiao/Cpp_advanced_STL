#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<deque>

using namespace std;
//deque������ʼ��
void test1()
{
	deque<int> v1;//Ĭ�Ϲ��캯��
	deque<int> v2(10, 5);//���������캯��
	deque<int> v3(v2.begin(), v2.end());
	deque<int> v4(v2); //��������
}
//deque��ֵ����
void test2()
{
	deque<int> v1(10, 3);
	deque<int> v2;
	v2.assign(10, 3);//��ֵ
	v2.assign(v1.begin(), v1.end());
	v2 = v1;//����=��ֵ
}

//��С����
void test3()
{
	deque<int> v1(10, 3);
	cout << v1.size() << endl;
	if (v1.empty)
	{
		cout << "kong" << endl;
	}
	else
	{
		cout << "bu kong" << endl;
	}
	v1.resize(5);
	v1.resize(15);
}
//deque�����ɾ��
void test4() {

	deque<int> d;

	d.push_back(10);
	d.push_back(20);
	d.push_front(30);
	d.push_front(40);


	//��һ�ֱ�����ʽ
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}
	cout << endl;

	//�ڶ��ֱ�����ʽ
	for (int i = 0; i < d.size(); i++) {
		cout << d.at(i) << " ";
	}
	cout << endl;

	//�����ַ�ʽ
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;


	//ɾ��Ԫ��
	/*
		while (d.size() > 0){
		cout << d.back() << "��ɾ��!" << endl;
		d.pop_back();
	}
	cout << "��С:" << d.size() << endl;
	*/


	//ͷɾ��
	while (!d.empty()) {
		cout << d.front() << "��ɾ��!" << endl;
		d.pop_front();
	}


}

//deque��������
void test6() {

	deque<int> d;
	d.insert(d.begin(), 100); //ͷ�巨
	d.insert(d.end(), 200); //β�

	for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
int main(void)
{
	test1();
}