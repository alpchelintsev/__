#include <cstdio>

namespace _
{
	class A
	{
		bool flag;
	public:
		A operator|(A op2)
		{
			A tmp;
			if(flag)
			{
				tmp.flag = false;
				printf("Hello World!\n");
			}
			else tmp.flag = false;
			return tmp;
		}
		A()
		{
			flag = true;
		}
	}_;
}

int main()
{
	_::A __;
	__|_::_|_::_|_::_|__;
	return 0;
}
