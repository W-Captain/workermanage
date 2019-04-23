#include "pch.h"
#include "company.h"
#include "worker.h"
#include <vector>
using namespace std;

company::company()
{
}


company::~company()
{
}

void company::get_info()
{
	cout << "input info\n";
	cin >> this->info;
}

void company::get_name()
{
	cout << "input name\n";
	cin >> this->name;
}

void company::cal()
{

}

void company::get_worker()
{
	cout << "input worker number\n";
	cin >> this->workernum;
	for (int i = 0; i < this->workernum; i++)
	{
		worker *workerp;
		workerp = new worker;
		w.push_back(workerp);
	}
}