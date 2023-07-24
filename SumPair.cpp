#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the Size "<<endl;
	cin>>n;
	
	vector<int> v;
	cout<<"Enter the Element "<<endl;
	
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	int x;
	int count=0;
	cout<<"Enter the X "<<endl;
	cin>>x;
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]+v[j]==x)
			{
				count++;
			}
		}
	}
	
	cout<<"Count is "<<count<<endl;
}
