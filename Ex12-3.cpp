#include<iostream>
using namespace std;
int main()
{
    const int size=3;
    float sale[size],sum=0,avg;
    for(int i=0;i<size;i++)
    {
        cin>>sale[i];
        sum+=sale[i];

    }
    avg=sum/size;
    cout<<"total sale = "<<sum<<endl<<"Average = "<<avg;

    return 0;
}