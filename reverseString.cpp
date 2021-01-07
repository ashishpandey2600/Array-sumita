
#include<iostream>
using namespace std;
int main()
{    int k=0,l;
    char string[80],word[80];
    cout<<"Enter the string\n";
    cin.getline(string,80);
    for(int i=0;string[i]!='\0';i++)
    {
        if(string[i]!=' ')
        {
         word[k]=string[i];
         k=k+1;
        }
        else 
        {
            while(k>0)
            {
                cout<<word[--k];
            }
            cout<<string[i];
        }
    }
    return 0;
}