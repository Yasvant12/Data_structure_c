#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter size of the array"<<" ";
	cin>>n;
	int arr[n],arr2[n];
	int j,i,c=0,min=-1;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]!=-1)
			{
				if(arr[i]==arr[j])
				{
				 	c=c+1;
				 	arr[j]=min;
				}
			}
		}
		arr2[i]=c;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"---"<<endl<<arr2[i];
	}
	
}
