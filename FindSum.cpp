#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size "<<endl;
	cin>>n;
	
	vector<int>v;
	cout<<"Enter the Element "<<endl;
	
	for(int i=0;i<n;i++)
	{
		int ele;cin>>ele;
		v.push_back(ele);
	}
	int sum=0;
	for(int i=0;i<v.size();i++)
	{
		if(i%2==0)
		{
			sum= sum+v[i];
		}
		else
		{
			sum = sum-v[i];
		}
	}
	
	cout<<"Sum is "<<sum<<endl;
}
