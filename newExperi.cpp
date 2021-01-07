#include <iostream>
using namespace std;
int main()
{
	int test,green,blue,cases,arr[cases][2],count=0,kount=0,a,b;
	cin>>test;
	for(int i=1;i<=test;i++)
	{
      cin>>green>>blue;
	  cin>>cases;
      for(int j=0;j<cases;j++)
	  {
        for(int k=0;k<2;k++)
		{
           cin>>arr[j][k];
		   count+=arr[j][k];
		   kount+=arr[k][j];
		}
		 
	  }
      
	 a=count*green;
	 b=kount*blue;
	cout<<a+b;
	
	}
	return 0;
}
