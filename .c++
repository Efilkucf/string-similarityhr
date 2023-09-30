#include<iostream>
#include<string.h>
using namespace std;

int compare(char *A,char *B)
{
        if(A == B)
        return strlen(A);
    int *a,*b;
    char *a1,*b1;
    a = (int*)A;
    b = (int*)B;
    while(*a++ == *b++);
        a1=(char*)--a;
        b1=(char*)--b;
        while(*a1++ == *b1++);
    --b1;
    return b1-B;
}


int main()
{
    char A[100000];
    int i,t,la,sum;

    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>A;
        la = strlen(A);
        for(i=0;i<la;i++)
        {
            sum +=compare(A,A+i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
