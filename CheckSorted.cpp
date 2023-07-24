#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;cout<<"Enter the Size "<<endl;
	cin>>n;
	
	vector<int>v;
	
	cout<<"Enter the Element "<<endl;
	
	for(int i=0;i<n;i++)
	{
		int ele;cin>>ele;
		v.push_back(ele);
	}
	int sorted = false;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]>=v[i-1])
		{
			sorted = true;
		}
	}

	cout<<sorted<<endl;
	
	return 0;
}
