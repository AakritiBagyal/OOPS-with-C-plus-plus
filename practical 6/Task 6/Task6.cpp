#include <iostream>

using namespace std;

int main()
{
	string s1 = "Cart";
	cout<<s1<<"\n"<<&s1<<endl;
	s1[0]='K';
	cout<<s1<<endl;
	cout<<&s1<<endl;
	return 0;
}
