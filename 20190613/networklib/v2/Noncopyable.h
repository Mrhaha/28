 ///
 /// @file    Noncopyable.h
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2019-05-08 10:49:34
 ///

#ifndef __WD_NONCOPYABLE_H__
#define __WD_NONCOPYABLE_H__

namespace wd
{
class Noncopyable
{
protected:
	Noncopyable(){}
	~Noncopyable(){}
	Noncopyable(const Noncopyable&) = delete;
	Noncopyable & operator=(const Noncopyable &) = delete;
};
}//end of namespace wd

#endif

