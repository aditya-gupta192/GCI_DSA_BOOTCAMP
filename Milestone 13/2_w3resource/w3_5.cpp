#include<iostream>

using namespace std;

int countDigits(int number)
{
    static int digits;
    if(number!=0)
    {
        digits++;
        countDigits(number/10);
    }
    return digits;
}

int main()
{
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    int digits=countDigits(number);
    cout<<"Number of digits in "<<number<<" are "<<digits<<endl;
    return 0;
}