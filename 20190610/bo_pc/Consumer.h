 ///
 /// @file    Consumer.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-06-10 10:53:26
 ///
 
#pragma once

namespace wd
{

class TaskQueue;

class Consumer
{
public:
	void get(TaskQueue & taskque);

};


}//end of namespace wd
