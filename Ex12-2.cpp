#include<iostream>
using namespace std;
int main()
{
    double Price[20],sum=0,avg=0,prod=1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the price for item "<<i+1<<" :";
        cin>>Price[i];
        sum+=Price[i];
        prod*=Price[i];


    }
    avg=sum/n;
    cout<<"sum = "<<sum<<endl<<"product =  "<<prod<<endl<<"average =  "<<avg;

    return 0;

}
