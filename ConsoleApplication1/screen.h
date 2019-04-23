#pragma once
#include "worker.h"
#include "company.h"
#include <vector>
class screen
{
public:
	screen();
	~screen();
	void creatmenu();
	void choose();
	void c1();
	void c2();
	void c3();
	vector<company*> com;
};

