#include<iostream>

using namespace std;
int i;
int checkPrime(int number)
{
    if(i==1)
    {
        return 1;
    }
    else if(number%i==0)
    {
        return 0;
    }
    else
    {
        i=i-1;
        checkPrime(number);
    }
}

int main()
{
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    i=number/2;
    int prime=checkPrime(number);
    if(prime==1)
        cout<<"The entered number is prime"<<endl;
    else
        cout<<"The entered number is not prime"<<endl;
    return 0;
}