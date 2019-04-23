#include "pch.h"
#include "screen.h"
#include "worker.h"
#include "company.h"
#include <vector>
#include <string>
using namespace std;
screen::screen()
{
}


screen::~screen()
{
}

void screen::creatmenu()
{
	system("cls");
	cout << endl;
	cout << "  ****************************" << endl;
	cout << "  *  1  creat a new company  *" << endl;
	cout << "  *  2      view company     *" << endl;
	cout << "  *  3         edit          *" << endl;
	cout << "  *  4         exit          *" << endl;
	cout << "  ****************************" << endl;
	screen::choose();
}

void screen::choose()
{
	int n;
	cin >> n;
	switch (n)
	{
	case 1:
	{
		screen::c1();
		break;
	}
	case 2:
	{
		screen::c2();
		break;
	}
	case 3:
	{
		screen::c3();
		break;
	}
	case 4:
	{
		exit(0);
	}
	default :
		cout << "error!" << endl;
		screen::creatmenu();
	}
	screen::creatmenu();
}

void screen::c1()
{
	company* ct;
	ct = new company;
	ct->get_name();
	ct->get_info();
	ct->get_worker();
	com.push_back(ct);
}

void screen::c2()
{
	for (auto it = com.begin(); it != com.end(); it++)
	{
		cout << "neme: " << (*it)->name << endl;
		cout << "info: " << (*it)->info << endl;
		cout << "workernum: " << (*it)->workernum << endl;
		cout << "---------------------------------------" << endl;
		for (auto itw = (*it)->w.begin(); itw != (*it)->w.end(); itw++)
		{
			cout << "ID: " << (*itw)->ID << endl;
			cout << "name: " << (*itw)->name << endl;
			cout << "workerid: " << (*itw)->workerId << endl;
			cout << "age: " << (*itw)->age << endl;
			cout << "---------------------------------------" << endl;
		}
	}
	system("pause");
}

void screen::c3()
{
	cout << "which company you wanna edit" << endl;
	int i = 1;
	auto it = com.begin();
	auto itw = (*it)->w.begin();
	for (auto it = com.begin(); it != com.end(); it++)
	{
		cout <<i<< "  neme: " << (*it)->name << endl;
		i++;
	}
	int tnum;
	innn:
	cin >> tnum;
	if (tnum > i - 1)
	{
		cout << "input wrong,please input again" << endl;
		goto innn;
	}
	else
	{
		it = com.begin();
		for (int j = 0; j < tnum - 1; j++)
		{
			it++;
		}
		(*it)->get_name();
		(*it)->get_info();
	}
	cout << "which company you wanna edit" << endl;
	i = 1;
	for (auto itw = (*it)->w.begin(); itw != (*it)->w.end(); itw++)
	{
		cout << i << "  name: " << (*itw)->name << endl;
		i++;
	}
	inn:
	cin >> tnum;
	if (tnum > i - 1)
	{
		cout << "input wrong,please input again" << endl;
		goto inn;
	}
	else
	{
		itw = (*it)->w.begin();
		for (int j = 0; j < tnum-1; j++)
		{
			itw++;
		}
		(*itw)->Input_ID();
		(*itw)->Input_name();
		(*itw)->InputTime();
		(*itw)->Input_workerId();
		(*itw)->Input_age();
		(*itw)->GetSex();
	}
}