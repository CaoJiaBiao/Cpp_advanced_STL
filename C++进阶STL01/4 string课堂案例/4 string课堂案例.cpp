#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
using namespace std;
int main(void)
{
	string email = "zhaosi@qq.com";
	int pos1 = email.find("@");
	cout << "pos1:" << pos1 << endl;
	int pos2 = email.find(".");
	if (pos1 == -1 || pos2 == -1) {
		cout << "�����в�����@����.!" << endl;
		return 0;
	}
	if (pos1 > pos2) {
		cout << "��������䲻�Ϸ���" << endl;
	}
	string username = email.substr(0, pos1);
	string::iterator pStart = username.begin();
	string::iterator pEnd = username.end();
	while (pStart != pEnd)
	{
		if (*pStart < 97 || *pStart > 122)
		{
			cout << "������ַ�������Сд�ַ�!" << endl;
		}
		pStart++;
	}
	string rightEmail = "zhaosi@qq.cn";
	int ret = email.compare(rightEmail);
	if (ret != 0) {
		cout << "�����ַ������!" << endl;
		return 0;
	}

	cout << "�����ַ��ȷ!" << endl;
	cout << username << endl;
	return 0;
}