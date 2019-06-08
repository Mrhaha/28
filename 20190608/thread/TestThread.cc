 ///
 /// @file    TestThread.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-06-08 10:19:45
 ///
 
#include "Thread.h"

#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <memory>
using namespace std;


class Mythread
: public wd::Thread
{
	void run() override
	{
		::srand(::clock());
		int cnt = 10;
		while(cnt--) {
			int number = ::rand() % 100;
			cout << "sub thread " << pthread_self() 
				 << ": get a number = " << number << endl;

			::sleep(1);
		}
	}

	~Mythread() {	cout << "~Mythread()" << endl;}
};
             
 
int main(void)
{
	cout << ">> main thread " << pthread_self() << endl;

	unique_ptr<wd::Thread> mythread(new Mythread());
	mythread->start();
	mythread->join();

	return 0;
}
