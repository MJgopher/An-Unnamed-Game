#include <iostream>
#include <string>
using namespace std;

string Name;
void XianShi(int GongJi, int FangYu, int HP)
{
	int ZhanDouLi = GongJi * 2 + FangYu * 2 + HP;
	cout << "���ս����Ϊ" << ZhanDouLi << "\n";
	cout << "�������ֵΪ" << HP << "\n";
	cout << "��Ĺ�����Ϊ" << GongJi << "\n";
	cout << "��ķ�����Ϊ" << FangYu << "\n";
}
void Version(float version)
{
	cout << "�汾��" << version << endl;
}
void CheckName()
{
	cout << "�������������:\n";
	cin >> Name;
	if (Name == "Ф����" || Name == "����" || Name == "xiaohaiyang" || Name == "XIAOHAIYANG" || Name == "haiyang" || Name == "HAIYANG" || Name == "����֮��")
	{
		cout << "���󣬿����ҵ���α�����\n\n";
	}
	else
		if (Name == "Ф���" || Name == "���" || Name == "xiaopeicheng" || Name == "XIAOPEICHENG" || Name == "peicheng" || Name == "PEICHENG")
		{
			cout << "��ɣ�ʵ�мƻ���\n\n";
		}
		else
			if (Name == "��" || Name == "machao" || Name == "MACHAO" || Name == "������")
			{
				cout << "������������211����ѽ��\n\n";
			}
			else
			{
				cout << "��ã�" << Name << "����ӭ����������ȵ���Ϸ��" << endl << endl;
			}
}

int main()
{
	Version(1.035f);

	CheckName();

	int HP = 100;
	int GongJi = 20;
	int FangYu = 20;
	XianShi(GongJi, FangYu, HP);
	system("pause");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "����0x80072ee2		���ļ�������ò��������и���Ϸ�������Ӳ��������.";
	system("pause");
	return 0;
}
