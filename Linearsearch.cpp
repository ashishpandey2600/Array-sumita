#include<iostream>
using namespace std;
int main()
{
    int arr[5],key,pos;
    bool flag=0;
     
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter the key in array";
    cin>>key;
    for(int i=0;i<5;i++)
    {
        if(key==arr[i])
        {
            flag=1;
            pos=i;
            break;
        }

    }
    if(flag==0)
    cout<<"NO key present";
    else 
    {
        cout<<"key position is"<<pos+1;
    }
    return 0;
}