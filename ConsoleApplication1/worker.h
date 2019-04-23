#pragma once
#include <string>
#include <stack>

class worker
{
public:
	worker *next=NULL;
	std::string name;
	int age=-1;//man=0;woman=1;
	int sex=-1;
	std::string ID;
	std::string workerId;
	int time[3] = {0};
	int bir[3] = {0};
	worker();
	~worker();
	void Input_age();
	void Input_ID();
	void Input_workerId();
	void Input_name();
	void GetSex();
	void InputTime();
	void Workerinfo();
	void write();
};