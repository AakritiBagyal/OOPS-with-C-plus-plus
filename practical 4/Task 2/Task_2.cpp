#include<iostream>
using namespace std;
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

using namespace first;
using namespace second;

int main()
{
	int a, b;
	float c, d;
	cin >> a >> b >> c >> d;
	cout << add(a, b) << std::endl;
	cout << add(c, d);
}	
