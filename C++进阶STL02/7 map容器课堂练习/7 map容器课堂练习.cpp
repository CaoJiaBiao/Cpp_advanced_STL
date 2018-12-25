#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<map>
#include<string>
using namespace std;

//map������ʼ��
void test()
{
	map<int, string> mymap;//Ĭ�Ϲ���
	map<int, string> mymap2��mymap��;//��������
}

//map�������
void test2()
{
	map<int, int>mymap;

	//��һ�֣���pair
	pair<int, int>par(1, 5);
	mymap.insert(par);//����mymap.insert(pair<int,int>par(1,2);
	//�ڶ���
	mymap.insert(make_pair(2, 10));
	
	pair<map<int, int>::iterator, bool> ret = mymap.insert(make_pair(2, 10));
	if (ret.second) {
		cout << "����ɹ�!" << endl;
	}
	else {
		cout << "����ʧ��!" << endl;
	}
	
	//������
	mymap.insert(map<int, int>::value_type(1, 2));
	//������
	mymap[4] = 20;

	//���ֲ��뷽ʽ����
	//���Key���ڣ����޸�����ָ��keyԪ�ص�ֵ
	mymap[2] = 100;
	for (map<int, int>::iterator it = mymap.begin(); it != mymap.end(); it++)
	{
		cout << "key:" << (*it).first << " value:" << (*it).second << endl;
	}
	cout << endl;
	//�������ʵ�Key�����ڣ��������������ݸ�������ȥ
	cout << "key:" << mymap[20] << endl;
	for (map<int, int>::iterator it = mymap.begin(); it != mymap.end(); it++) {
		cout << "key:" << it->first << " value:" << it->second << endl;
	}
	cout << endl;
	ret = mymap.insert(map<int, int>::value_type(2, 10));
	if (ret.second) {
		cout << "����ɹ�!" << endl;
	}
	else {
		cout << "����ʧ��!" << endl;
	}
}

//ɾ���Ͳ���
void test3()
{
	map<int, int> mymap;
	mymap.insert(make_pair(1, 2));
	mymap.insert(make_pair(2, 3));
	mymap.insert(make_pair(3, 4));
	/*
	mymap.erase(2);  //����Keyɾ��Ԫ��
	print(mymap);
	mymap.erase(mymap.begin()); //ɾ����һ��Ԫ��
	print(mymap);
	mymap.erase(mymap.begin(),mymap.end()); // mymap.clear
	cout << "map size:" << mymap.size() << endl;
	*/


	//����
	map<int, int>::iterator pos = mymap.find(3);
	if (pos == mymap.end()) {
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "���ҵ�:" << pos->first << " value:" << pos->second << endl;
	}

	cout << "---------------" << endl;
	pos = mymap.lower_bound(2);
	if (pos == mymap.end()) {
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "���ҵ�:" << pos->first << " value:" << pos->second << endl;
	}

	pos = mymap.upper_bound(2);
	if (pos == mymap.end()) {
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "���ҵ�:" << pos->first << " value:" << pos->second << endl;
	}

	pair<map<int, int>::iterator, map<int, int>::iterator> pos2 = mymap.equal_range(2);
	if (pos2.first == mymap.end()) {  //��һ��������
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "���ҵ�:" << pos2.first->first << " value:" << pos2.first->second << endl;
	}

	if (pos2.second == mymap.end()) { //�ڶ���������
		cout << "û���ҵ�!" << endl;
	}
	else {
		cout << "���ҵ�:" << pos2.second->first << " value:" << pos2.second->second << endl;
	}
}
int main(void)
{
	test3();
}