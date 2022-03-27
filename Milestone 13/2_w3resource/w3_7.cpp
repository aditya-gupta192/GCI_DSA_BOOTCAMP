#include<iostream>

using namespace std;

int calcGcd(int number1, int number2)
{
    while(number1!=number2)
    {
        if(number1>number2)
        return calcGcd(number1-number2,number2);
        else
        return calcGcd(number1,number2-number1);
    }
    return number1;
}
int main()
{
    int number1, number2, gcd;
    cout<<"Enter first number: ";
    cin>>number1;
    cout<<"Enter second number: ";
    cin>>number2;
    gcd=calcGcd(number1, number2);
    cout<<"The GCD of "<<number1<<" and "<<number2<<" is: "<<gcd<<endl;
    return 0;
}