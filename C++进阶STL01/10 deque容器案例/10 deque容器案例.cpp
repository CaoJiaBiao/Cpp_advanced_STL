#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

class Player
{
public:
	Player() {

	}
	Player(string name,int score):name(name),score(score){}
	string name;
	int score;
};
//����ѡ��
void Create_Player(vector<Player> &v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		
		string name =(string) "ѡ�֣�" + nameseed[i];
		Player p(name, 0);
		v.push_back(p);
	}
}
//���
bool myCompare(int a, int b)
{
	if (a > b)
	{ //�Ӵ�С
		return true;
	}
	else
	{
		return false;
	}
}
void Set_Player_Score(vector<Player> &v) {
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int socre = 50 + rand() % 50;
			d.push_back(socre);
		}
		sort(d.begin(), d.end(), myCompare);
		d.pop_back();
		d.pop_front();
		int totalSocre = 0;
		for (deque<int>::iterator itt = d.begin(); itt != d.end(); itt++)
		{
			totalSocre += (*itt);
		}
		int scoreAvg = totalSocre / d.size();
		it->score = scoreAvg;
		//(*it).score = scoreAvg;���ߵȼ�
	}
}
void Show_Player_Score(vector<Player> &vPlayer)
{
	for (vector<Player>::iterator it = vPlayer.begin(); it != vPlayer.end(); it++) {
		cout << "����:" << it->name << " ����:" << it->score << endl;
	}
	cout << endl;
}
int main(void)
{
	vector<Player> vPlayer;//���ѡ����Ϣ
	Create_Player(vPlayer); //����ѡ��
	Set_Player_Score(vPlayer);
	Show_Player_Score(vPlayer);
	//��ί��ְ���(sort �㷨����)
	//���� 5 ��ѡ��(�������÷�)��10 ����ί�� 5 ��ѡ�ֽ��д��
	//�÷ֹ���ȥ����߷֣�ȥ����ͷ֣�ȡ��ƽ����
	//���÷ֶ� 5 ��ѡ�ֽ�������
	return 0;
}