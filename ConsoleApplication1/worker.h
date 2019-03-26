#pragma once
#include <string>
#include <stack>

class worker
{
public:
	worker *next=NULL;
	std::string name;
	int age;//man=0;woman=1;
	int sex;
	std::string ID;
	std::string workerId;
	int time[3];
	int bir[3];
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