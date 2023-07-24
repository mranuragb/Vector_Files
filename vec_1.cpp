#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v;
	
	int element;
	cout<<"Enter the size "<<endl;
	
	cin>>element;
	cout<<"Enter the Element "<<endl;
	for(int i=0;i<element;i++)
	{
		int n;
		cin>>n;
		v.push_back(n);
	}
	
	cout<<"Output of the Element "<<endl;
	
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	cout<<"First Element "<<v.front()<<endl;
	cout<<"End Element "<<v.back()<<endl;
	
	cout<<"Enter the Capacity "<<v.capacity()<<endl;
	cout<<"Enter the Size "<<v.size()<<endl;
	
	
}
