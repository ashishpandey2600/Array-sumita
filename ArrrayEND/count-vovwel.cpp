#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char line[80];
    int vow_count=0;
    cout<<"Enter the line "<<endl;
    cin.getline(line,80);
    for(int i=0;line[i]!='\0';i++)
    {
        switch (line[i]){
        case 'a':
        case 'i':
        case 'o':
        case 'u':
        case 'e':
        case 'A':
        case 'I':
        case 'O':
        case 'U':
        case 'E': vow_count++;}
    }
    cout<<"The total number of vowels in sentance is \n";
    cout<<vow_count;
    return 0;
}
