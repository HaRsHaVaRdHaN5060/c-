#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Enter The Income: ";
	cin>>i;
	if(i>0)
	{
	if(i<=150000)
	cout<<"No Tax";
	else if(i>=150001 and i<=300000)
	cout<<"Your Income Tax Is "<<(i*0.10);
	else if(i>=300001 and i<=500000)
	cout<<"Your Income Tax Is "<<(i*0.20);
	else if(i>=500001)
	cout<<"Your Income Tax Is "<<(i*0.30);
}
else
	cout<<"Invalid Input";
}
