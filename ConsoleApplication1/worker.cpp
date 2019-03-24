#include "pch.h"
#include "worker.h"
#include <sstream>
#include <string>
worker::worker()
{
	std::cout << "new worker has been created" << std::endl;
}
using namespace std;



worker::~worker()
{
	std::cout << "worker has been distroied" << std::endl;
}


void worker::Input_ID()
{
	string temp_ID;
	cout << "Input ID" << endl;
	cin >> temp_ID;
	if (temp_ID.length() != 18)
	{
		cout << "Input error" << endl;
		worker::Input_ID();
	}
	else
	{
		cout << "Input successfully" << endl;
		ID = temp_ID;
	}
}


void worker::InputTime()
{
	cout << "Input year" << endl;
	cin >> time[0];
	if (time[0] > 2019 || time[0] < 1900)
	{
		cout << "input error" << endl;
		this->InputTime();
	}
	cout << "Input month" << endl;
	cin >> time[1];
	if (time[1] > 0 || time[1] < 13)
	{
		cout << "input error" << endl;
		this->InputTime();
	}
	cout << "Input day" << endl;
	cin >> time[2];
	if (time[2] > 0 || time[2] < 31)
	{
		cout << "input error" << endl;
		this->InputTime();
	}
}


void worker::Input_age()
{
	cout << "Input age" << endl;
	cin >> age;
}


void worker::Input_workerId()
{
	cout << "Input workerid" << endl;
	cin >> workerId;
}


void worker::GetSex()
{
	stringstream ss;
	ss << ID;
	long long ID_n;
	ss >> ID_n;
	ID_n /= 10;
	if (ID_n % 2 == 0)
	{
		sex = 0;
		cout << "This worker is female" << endl;
	}
	else
	{
		sex = 1;
		cout << "This worker is male" << endl;
	}
}


void worker::Workerinfo()
{
	cout << "ID:" << this->ID << endl;
	worker::GetSex();
	cout << "workid is: " << this->workerId << endl;
	cout << "time:  " << this->time[0] << this->time[1] << this->time[2] << endl;
	cout << "age:  " << this->age << endl;
	cout << "*********************" << endl;
}