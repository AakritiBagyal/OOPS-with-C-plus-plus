#include<iostream>

namespace first
{
	int add(int a, int b)
	{
		return (a + b);
	}
}

namespace second
{
	float add(float a, float b)
	{
		return (a + b);
	}
}


int main()
{
	int a, b;
	float c, d;
	std::cin >> a >> b >> c >> d;
	std::cout << first::add(a, b) << std::endl;
	std::cout << second::add(c, d);
}	
