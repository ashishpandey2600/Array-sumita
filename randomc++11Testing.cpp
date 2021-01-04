#include<iostream>
using namespace std;
int main()
{
    int arr[3]={1,2,3};
    for(int &i: arr)
    { i*=2;
        
        cout<<i<<"\t";

    }
    return 0;
}