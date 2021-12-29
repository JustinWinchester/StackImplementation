//#include "mystack.h"
#include "mystack_temp.cpp"

int main()
{
	Mystack_temp <int> s;
	Mystack_temp <char> s1;

	int i;
	s.pop();

	for(i = 0; i < SIZE; i++)
	{
		s.push(i);
	}
	cout<<s.size()<<endl;
	cout<<s.get_top()<<endl;

	char c;
	for(i = 0, c='A'; i < SIZE; i++, c++)
	{
		s1.push(c);
	}
	cout<<s1.size()<<endl;
	cout<<s1.get_top()<<endl;
	s1.pop();
	cout<<s1.size()<<endl;
	cout<<s1.get_top()<<endl;
	s.push(99);
	cout<<s.get_top()<<endl;

	return 0;
}

