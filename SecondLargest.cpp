#include<iostream>
#include<vector>
#include <climits>
using namespace std;

int largestNumber(vector<int> v,int n)
{
//	int max = INT_MIN;
//	int index = -1;
//	for(int i=0;i<v.size();i++)
//	{
//		if(v[i]>max)
//		{
//			max = v[i];
//			index = i;
//		}
//	}
//	return index;
	//second Approach
	int max = INT_MIN;
	int secondMax = INT_MIN;
	
	for(int i=0;i<n;i++)
	{
		if(v[i]>max)
		{
			max = v[i];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(v[i]>secondMax && v[i]!=max)
		{
			secondMax = v[i];
		}
	}
	return secondMax;
}

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
//	int LargestElement = largestNumber(v,n);
//	int large = v[LargestElement];
//		for(int i=0;i<v.size();i++)
//	{
//		if(v[i]==large)
//		{
//			v[i]=-1;
//		}
//	}
//	
//	int SecondLargest = largestNumber(v,n);
//	
//	cout<<"Second Largest "<<v[SecondLargest]<<endl;

	int secondLargest = largestNumber(v,n);
	cout<<"Second Largest "<<secondLargest<<endl;
}
