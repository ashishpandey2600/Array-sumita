#include<iostream>
using namespace std;
int main()
{
    bool flag=0;
    int arr[10],element,pos;
    cout<<"Enter the value  \n";
    for(int i=0;i<10;i++)//for input of array
    {
        cin>>arr[i];
    }
    cout<<"Enter the elemnt \n";
    cin>>element;
    for(int i=0;i<10;i++)//for checking element position
    {
        if (arr[i]==element)
        {
            flag =1;
            pos=i;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Elemnt found at  position no. "<<pos+1;
    }
    else cout<<"  try again , NOT found";

    return 0;
}