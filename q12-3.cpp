#include<iostream>
using namespace std;
int main()
{
    int sal[100],count=0;
    for(int i=0;i<10;i++)
    {
        cin>>sal[i];
        if(sal[i]*12>100000)
        count++;

    }
    cout<<count<<" employes out of 10 have salaries more than 1 lakh per anuum";


    return 0;
}