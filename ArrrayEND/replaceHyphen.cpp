#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char sentance[80];//it will be of 79 words, last on is for '\0' null
cout<<"Enter the sentance "<<endl;
cin.getline(sentance,80);
int x1=strlen(sentance);//strlen is a key word for mesuring lenght of sentance entered by user
for(int i=0;sentance[i]!='\0';i++)
if(sentance[i]==' ')
sentance[i]='-';
cout<<"the new sentance is like this \n";
cout.write(sentance,x1);


    return 0;
}