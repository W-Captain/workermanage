#pragma once
#include <string>
#include "worker.h"
#include <vector>
using namespace std;
class company
{
public:
	company();
	~company();
	string name;
	string info;
	int workerpay, income, workernum=0;
	void get_name();
	void get_info();
	void cal();
	void get_worker();
	vector<worker*> w;
};

