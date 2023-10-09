#include<iostream>
using namespace std;
int firstzero(int a[ ], int l,int h)
{
	int mid;
	if(h>=l)
	{
		mid=l+(h-l)/2;
		if((mid==0 || (a[mid-1]=1)) && a[mid]==0 )
		{
			return mid;
		}
		if(a[mid]==1)
		{
			return firstzero(a,(mid+1),h);
		}
		else
		{
			return firstzero(a,l,(mid-1));
		}
	}
	
}
int findzero(int a[ ], int n)
{
	int x,y;
	x=firstzero(a,0,n-1);
    y=n-x;
	cout<<"\nthe number of zeros are"<<y;
	
	
}
int main()
{
	
	int n,i;
	cout<<"\n how many number you have to enter ";
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	n = sizeof(a)/sizeof(a[0]);
	findzero(a,n);
	return 0;
	}
