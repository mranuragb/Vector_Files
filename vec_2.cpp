#include<iostream>
#include<vector>;
using namespace std;

int main()
{
	int n;
	cout<<"Enter the Size Of Element "<<endl;
	cin>>n;
	
	vector<int> v;
	
	for(int i=0;i<n;i++)
	{
		int ele;
		cin>>ele;
		v.push_back(ele);
	}
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	cout<<endl;
	
	cout<<"Size of : "<<v.size()<<endl;
	cout<<"Capacity of : "<<v.capacity()<<endl;
}
