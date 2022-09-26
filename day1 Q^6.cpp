#include<iostream>
using namespace std;
int main()
{
	int i,j,r,k;
	cout<<"\enter the number of rows :";
	cin>>r;
	for(i=0;i<r;i++)
{   for(j=r;j>=i;j--)
{   cout<<" ";
                  }
    for (k=0;k<i;k++)
{  cout<<"*";
}
cout<<"\n";
}
cout<<"\n";

return 0;
}

