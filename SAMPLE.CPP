#include<iostream.h>
int main()
{
int a,b,op;
cout<<"\n enter 2 nos";
cin>>a>>b;
cout<<"\n enter operation\n1.add\n2.sub\n3.div\n4.mul";
cin>>op;
switch(op)
{
case 1:cout<<"result is"<<a+b;
	break;
case 2:cout<<"\n result is"<<a-b;
	break;
case 3:cout<<"\n result is"<<a/b;
	break;
case 4:cout<<"\n result is"<<a*b;
	break;
default:cout<<"\n invalid";
	break;
}
return 0;
}