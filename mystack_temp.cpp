#include "mystack_temp.h"
template <class T>
Mystack_temp<T>::Mystack_temp()
{
	
	top = 0;
}
template <class T>
bool Mystack_temp<T>::pop()
{
	if(!empty())
	{
		top--;
		return true;
	}
	else{
		cout<<"\nEMPTY! NOTHING IN STACK YET.\n"<<endl;
		return false;
	}
}
template <class T>
bool Mystack_temp<T>::push(T item)
{
	if(full())
	{
		cout<<"\nFULL, CAN NOT PUSH ANY.\n"<<endl;
		return false;
	}
	else
	{
		top++;
		arr[top] = item;
		return true;
	}
}
template <class T>
int Mystack_temp<T>::size()
{
	return top;
}
template <class T>
bool Mystack_temp<T>::empty()
{
	return top == 0;
}

template <class T>
bool Mystack_temp<T>::full()
{
	return top == SIZE;
}

template <class T>

void Mystack_temp<T>::clear()
{
	top = 0;
}

template <class T>

T Mystack_temp<T>::get_top()
{
	return arr[top - 1];
}
