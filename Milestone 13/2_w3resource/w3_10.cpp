#include<iostream>

using namespace std;

int findFactorial(int n)
{
    int static factorial=1;    
    if(n==1)
    return 1;
    else
    {
        factorial=n*findFactorial(n-1);
    }
    return factorial;
}

int main()
{
    int n;
    cout<<"Enter a number whose factorial you want to find: ";
    cin>>n;
    int factorial=findFactorial(n);
    cout<<n<<"! or ("<<n<<" factorial)="<<factorial<<endl;
    return 0;
}