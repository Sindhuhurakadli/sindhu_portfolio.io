#include <iostream>

using namespace std;

unsigned long int countTree(unsigned int N)
{
    //used to store catalan numbers
    unsigned long int catalan[N+1];

    //N(0)=N(1)=1
    catalan[0]=catalan[1]=1;    
    int i,j;

    for(i=2;i<=N;i++)
    {
        catalan[i]=0;
        for(j=0;j<i;j++)
        {
            catalan[i]+=catalan[j]*catalan[i-j-1];
        }
    }
    return catalan[N];
}

int main()
{
    unsigned int x;
    cout<<"Input N:"<<endl;
    cin>>x;
    unsigned long int result=countTree(x);
    cout<<result<<endl;
    return 0;
}
