#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size "<<endl;
	cin>>n;
	
	vector<int>v;
	
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	
	int x;
	cout<<"Enter X "<<endl;
	cin>>x;
	
	int count = 0;
	
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>x)
		{
			count++;
		}
	}
	
	cout<<"Count is "<<count <<endl;
	
	return 0; 
	
}
