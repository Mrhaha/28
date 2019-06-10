 ///
 /// @file    Producer.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-06-10 10:28:38
 ///
 
#pragma  once

namespace wd
{
//前向声明(不完全类型), 可以减少头文件的依赖
class TaskQueue;

class Producer
{
public:
	void create(TaskQueue & taskque);
};

}//end of namespace wd
