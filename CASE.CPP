#include<iostream.h>
#include<conio.h>
void main()
{
int b,c;
char a;
cout<<"Enter an operater(+,-,*,/)";
cin>>a;
cout<<"\n\nEnter two number";
cin>>b>>c;
cout<<"\n\n\n";
switch(a)
{
case '+': cout<<b<<"+"<<c<<"="<<b+c;
	  break;
case '-': cout<<b<<"-"<<c<<"="<<b-c;
	  break;
   case '*': cout<<b<<"*"<<c<<"="<<b*c;
	  break;
case '/': cout<<b<<"/"<<c<<"="<<b/c;
	  break;

	  }
	getch();
	}