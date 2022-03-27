#include<iostream>

using namespace std;

int sumTillN(int n)
{
    int res;
    if(n==1)
    {
        return 1;
    }
    else
    {   
        res=n+sumTillN(n-1);
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter a positive number 'n': ";
    cin>>n;
    int sum=0;
    sum=sumTillN(n);
    cout<<"Required sum= "<<sum<<endl;
    return 0;
}