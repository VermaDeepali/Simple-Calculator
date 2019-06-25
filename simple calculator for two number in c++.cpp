#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char p;
	std::cout<<"enter any two number: \n";
	std::cin>>a>>b;
	std::cout<<"enter any operation + - * / : ";
	std::cin>>p;
	
	switch(p)
	{
	case '+':
	std::cout<<a+b;
	break;
	case '-':
	std::cout<<a-b;
	break;
	case '*':
	std::cout<<a*b;
	break;
	case '/':
	std::cout<<a/b;
	break;	
	default:
	std::cout<<"invalid";
	break;
	}
	return 0;
}
