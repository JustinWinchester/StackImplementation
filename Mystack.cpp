#include "Mystack.h"

Mystack::Mystack()
{
	
	top = 0;
	for(int i = 0; i < SIZE; i++)//clean memory
		arr[i] = 0;
	
}

bool Mystack::pop()
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

bool Mystack::push(int item)
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

int Mystack::size()
{
	return top;
}

bool Mystack::empty()
{
	return top == 0;
}

bool Mystack::full()
{
	return top == SIZE;
}

void Mystack::clear()
{
	top = 0;
}

int Mystack::get_top()
{
	return arr[top - 1];
}
