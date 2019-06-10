 ///
 /// @file    Consumer.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-06-10 10:53:26
 ///
 
#pragma once

#include "Thread.h"

namespace wd
{

class TaskQueue;

class Consumer
: public Thread
{
public:
	Consumer(TaskQueue & taskque)
	: _taskque(taskque)
	{}

private:
	void run();

private:
	TaskQueue & _taskque;
};


}//end of namespace wd
