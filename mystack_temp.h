#ifndef MYSTACK_H_
#define MYSTACK_H_

#define SIZE 20
#include <iostream>

using namespace std;
template <class T>
class Mystack_temp
{
	public:

	Mystack_temp();//default constructor
	bool pop();
	bool push(T);
	bool empty();
	bool full();
	int size();
	void clear();
	T get_top();
	
	private:

	int top;
	T arr[SIZE];
};

//#include "mystack.cpp"

#endif
