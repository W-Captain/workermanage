#include "pch.h"
#include "screen.h"
#include "worker.h"
using namespace std;
screen::screen()
{
}


screen::~screen()
{
}

void screen::creatmenu()
{
	cout << "***************************" << endl;
	cout << "*  1  creat a new worker  *" << endl;
	cout << "*  2      view worker     *" << endl;
	cout << "*  3         exit         *" << endl;
	cout << "***************************" << endl;
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
		worker *workerf = &f;
		while (workerf->next != NULL)
		{
			workerf = workerf->next;
		}
		worker *workerp = new worker;
		workerf->next = workerp;
		workerp->Input_ID();
		workerp->Input_name();
		workerp->InputTime();
		workerp->Input_workerId();
		workerp->Input_age();
		workerp->write();
		break;
	}
	case 2:
	{
		workerf = f.next;
		while (workerf->next != NULL)
		{
			workerf->Workerinfo();
			workerf = workerf->next;
		}
		workerf->Workerinfo();
		break;
	}
	case 3:
	{
		exit(0);
	}
	default :
		cout << "error!" << endl;
		screen::creatmenu();
	}
	screen::creatmenu();
}


