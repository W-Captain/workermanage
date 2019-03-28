#pragma once
#include "worker.h"
class screen
{
public:
	screen();
	~screen();
	void creatmenu();
	void choose();
	void read(worker *w);
	void c1();
	void c2();
	void c3(int num);
	void c4();
	worker f,*workerf;
};

