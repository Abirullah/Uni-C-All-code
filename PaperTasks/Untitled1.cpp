#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number ";
	cin>>num;
	for(int i=2;i<num;i++)
	{
		bool prime=true;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			prime=false;
			
		}
		if(prime)
		cout<<i<<" it is prime "<<endl;
		
	}
}
