#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

#define SALE_DEPARTMENT  1 //销售部
#define DEVELOP_DEPARTMENT 2 //开发部
#define FINACIAL_DEPARTMENT 3 //财务部

class Yuangong {
public:
	string name;
	int age;
	string tele;
	double salary;

};

void Create_Yuangong(vector<Yuangong> &v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		Yuangong y;
		string name = "员工";
		name += nameseed[i];
		y.name = name;
		y.age = rand() % 30;
		y.salary = rand() % 10000 + 10000;
		y.tele = "+86-88888888";
		v.push_back(y);
	}
}
void Set_YG_Group(vector<Yuangong> &v, multimap<int, Yuangong>group)
{
	for (vector<Yuangong>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "当前员工信息:" << endl;
		cout << "名字:" << it->name << " 年龄：" << it->age << " 工资:" << it->salary << " 电话" << it->tele << endl;
		int departmentID = -1;
		while (true)
		{
			cout << "请输入部门(1 销售部 2 开发部 3 财务部) : " << endl;
			scanf("%d", &departmentID);
			if (departmentID == SALE_DEPARTMENT)
			{
				group.insert(make_pair(SALE_DEPARTMENT, *it));
				break;
			}
			else if (departmentID == DEVELOP_DEPARTMENT) {
				group.insert(make_pair(DEVELOP_DEPARTMENT, *it));
				break;
			}
			else if (departmentID == FINACIAL_DEPARTMENT) {
				group.insert(make_pair(FINACIAL_DEPARTMENT, *it));
				break;
			}
			else {
				cout << "输入错误,请重新输入:" << endl;
			}
		}
	}
}
void Show_YG_Info(multimap<int, Yuangong>&group) {
	int departmentID = -1;
	while (true) {

		cout << "请输入要查看的部门(1 销售部 2 开发部 3 财务部) : " << endl;
		scanf("%d", &departmentID);

		//验证输入有效性
		if (departmentID < 1 || departmentID > 3) {
			continue;
		}

		multimap<int, Yuangong>::iterator pos = group.find(departmentID);
		int ygcount = group.count(departmentID);
		int num = 0;
		while (pos != group.end() && num < ygcount) {
			cout << "姓名: " << pos->second.name << " 年龄:" << pos->second.age << " 工资" << pos->second.salary << " 电话" << pos->second.tele << endl;
			num++;
			pos++;
		}

	}
}
int main(void)
{
	vector<Yuangong>v; //放员工信息 未分组之前
	multimap<int, Yuangong>group;//存放分组后的员工信息
	Create_Yuangong(v);//创建员工
	Set_YG_Group(v, group);//员工分组
	Show_YG_Info(group);//打印员工信息
}