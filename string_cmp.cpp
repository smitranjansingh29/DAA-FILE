#include <string.h> 
#include <iostream>
#include<cstdio>
#include <ctype.h>
using namespace std;
int CompareS(char *s, char *s1)
{
    if(s==NULL || s1==NULL)
        return -2;
    if(strcmp(s,s1)==0)
        return 0;
    if(tolower(s[0])==tolower(s1[0]) && tolower(s[0])==tolower((s1+1)[0]))
        CompareS(s, ++s1);
    else if(tolower(s[0])==tolower(s1[0]) && tolower(s1[0])==tolower((s+1)[0]))
        CompareS(++s, s1);
    else if(tolower(s[0])==tolower(s1[0]))
        CompareS(++s, ++s1);
    else
        return -1;
}
int main()
{
    char str[100],s[100];
    cout<<"Enter the first String !!! \n";
    gets(str);
    cout<<"Enter the Second String !!!\n";
    gets(s);
    if(CompareS(s,str)==0){
        cout<<"String Are Equal !!!";
    }
    else{
        cout<<"String are unequal !!";
    }
    return 0;
}
