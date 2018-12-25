#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<set>

using namespace std;

//��ӡset
void print(set<int>&s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << endl;
	}
}
//��ʼ��set
void test1()
{
	set<int> myset;
	set<int> myset2(myset);
	
}
//�����ɾ��
void test2()
{ 
	set<int> myset;
	myset.insert(4);
	myset.insert(3);
	myset.insert(1);
	myset.insert(2);
	print(myset);
	cout << "------------" << endl;
	myset.erase(myset.begin());
	myset.erase(2);
	print(myset);
	cout << "------------" << endl;
	myset.erase(myset.begin(), myset.end());
	print(myset);
}
template<class T>
class mycompare
{
public:

	bool operator()(T a, T b)const
	{
		return a > b;//�Ӵ�С���Ǵ���
	}
};


//����
void test3()
{
	set<int, mycompare<int>>myset;
	myset.insert(1);
	myset.insert(3);
	myset.insert(2);
	myset.insert(4);
	//print(myset);���Ͳ��ԣ��ο�����ʱ������
	for (set<int, mycompare<int>>::iterator it = myset.begin(); it != myset.end(); it++)
	{
		cout << *it << endl;
	}
	set<int, mycompare<int>>::iterator pos = myset.find(2);
	if (pos == myset.end()) {
		cout << "û�ҵ�" << endl;
	}
	else
	{
		cout << "���ҵ�" << *pos << endl;
	}
}

class Teacher {
public:
	Teacher(int id, int age) :id(id), age(age) {}
	int id;
	int age;
};

class mycompare04 {//����ʱ�Ǹ���operator�еıȶ����ݲ��ҵ�
					//��ʱ����������id����������������޹�
public:
	bool operator()(Teacher t1, Teacher t2)const {
		return t1.id > t2.id;
	}
};
void test4() {

	set<Teacher, mycompare04> myset;
	Teacher t1(1, 2), t2(3, 4), t3(5, 6);

	myset.insert(t1);
	myset.insert(t2);
	myset.insert(t3);
	for (set<Teacher, mycompare04>::iterator it = myset.begin(); it != myset.end(); it++) {
		cout << it->id << " " << it->age << endl;
	}
	cout << endl;
	set<Teacher, mycompare04>::iterator pos = myset.find(Teacher(3, 4));
	if (pos == myset.end()) {
		cout << "û�в��ҵ�!" << endl;
	}
	else {
		cout << "���ҵ�:" << pos->id << ":" << pos->age << endl;
	}
}
void test5() {

	set<int> myset;
	myset.insert(10);
	myset.insert(5);
	myset.insert(1);
	myset.insert(8);

	set<int>::iterator pos = myset.lower_bound(5);  //���ش��ڵ���5 ������
	if (pos == myset.end()) {
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "�ҵ���" << *pos << endl;
	}

	pos = myset.upper_bound(5);
	if (pos == myset.end()) {
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "�ҵ���" << *pos << endl;
	}

	pair<set<int>::iterator, set<int>::iterator> pos2 = myset.equal_range(5);
	
	//first��lower_bound
	//second��upper_bound
	if (pos2.first == myset.end()) {
		cout << "meiyouzhaodao!" << endl;
	}
	else {
		cout << "zhaodao!" << *(pos2.first) << endl;
	}

	if (pos2.second == myset.end()) {
		cout << "meiyouzhaodao!" << endl;
	}
	else {
		cout << "zhaodao!" << *(pos2.second) << endl;
	}

}
int main(void)
{
	test5();
}