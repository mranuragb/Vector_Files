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
	
	for(int i=0;i<v.size();i++)
	{
		for(int j=i+1;j<v.size();j++)
		{
			if(v[i]==v[j])
			{
				v[i]=v[j]=-1;
			}
		}
	}
	
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>0)
		{
			cout<<"Answer is "<<v[i]<<endl;
			cout<<"Index is "<<i<<endl;
		}
	}
	
	return 0;
}
