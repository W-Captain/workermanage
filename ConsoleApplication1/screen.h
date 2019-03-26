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
	worker f,*workerf;
};

