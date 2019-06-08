 ///
 /// @file    TestThread.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-06-08 10:19:45
 ///
 
#include "Noncopyable.h"
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
public:
	~Mythread() {	cout << "~Mythread()" << endl;}

private:
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

};
             
 
int main(void)
{
	//Mythread thread1;
	//Mythread thread2(thread1);

	cout << ">> main thread " << pthread_self() << endl;

	unique_ptr<wd::Thread> mythread(new Mythread());
	mythread->start();
	mythread->join();

	return 0;
}
