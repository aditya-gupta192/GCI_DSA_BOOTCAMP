#include<iostream>

using namespace std;

int terms;
void printOddNumbers(int i)
{
    if(i<=terms)
    {
        cout<<i<<" ";
        i+=2;
        printOddNumbers(i);
    }
}

void printEvenNumbers(int i)
{
    if(i<=terms)
    {
        cout<<i<<" ";
        i+=2;
        printOddNumbers(i);
    }
}

int main()
{
    cout<<"Enter a number upto which you want odd and even numbers to be printed: ";
    cin>>terms;
    cout<<"The even numbers till "<<terms<<" are: ";
    printEvenNumbers(2);
    cout<<endl;
    cout<<"The odd numbers till "<<terms<<" are: ";
    printOddNumbers(1);
    cout<<endl;
    return 0;
}