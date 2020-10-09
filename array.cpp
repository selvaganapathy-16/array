#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int *p,i;
	cout<<"enter the elements"<<endl;
	for(i=0;i<5;i++)
	{
	 cin>>arr[i];	
	}
	p=arr;
	for(i=0;i<5;i++)
	{
	 cout<<*p<<endl;
	 p++;
	}
	return 0;
}
