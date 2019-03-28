#include "pch.h"
#include "screen.h"
#include "worker.h"
#include <fstream>
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
	cout << "  ***************************" << endl;
	cout << "  *  1  creat a new worker  *" << endl;
	cout << "  *  2      view worker     *" << endl;
	cout << "  *  3         edit         *" << endl;
	cout << "  *  4         exit         *" << endl;
	cout << "  ***************************" << endl;
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
		int num;
		screen::c2();
		cout << "select num" << endl;
		cin >> num;
		screen::c3(num);
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
	worker *workerp = new worker;
	workerp->Input_ID();
	workerp->Input_name();
	workerp->InputTime();
	workerp->Input_workerId();
	workerp->Input_age();
	workerp->GetSex();
	workerp->write();
}

void screen::c2()
{
	system("cls");
	string str;
	ifstream OpenFile("text.txt", ios::in);
	OpenFile.seekg(0, ios::beg);
	int num = 1;
	cout << " num " << "        " << "ID" << "        " << "       " << "name" << "       " << "sex" << "       " << "age" << "          " << "time" << "       " << "workerid" << '\n';
	while (getline(OpenFile, str))
	{
		cout << "  " << num << "  ";
		cout << str << endl;
		num++;
	}
	OpenFile.close();
	system("pause");
}

void screen::c3(int num)
{
	ifstream fin("text.txt");
	ofstream fout;
	fout.open("temp.txt", ios::trunc);
	string data;
	while (getline(fin, data))
	{
		fout << data<<endl;
	}
	fin.close();
	fout.close();
	ofstream ffout;
	ffout.open("text.txt", ios::trunc);
	ifstream ffin("temp.txt");
	int i = 1;
	while (getline(ffin, data))
	{
		if (i == num)
		{
			worker *workerp = new worker;
			workerp->Input_ID();
			workerp->Input_name();
			workerp->InputTime();
			workerp->Input_workerId();
			workerp->Input_age();
			workerp->GetSex();
			ffout.close();
			workerp->write();
			i++;
			ffout.open("text.txt", ios::app);
			continue;
		}
		else
		{
			ffout << data << endl;
			i++;
		}
	}
}