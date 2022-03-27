#include<iostream>

using namespace std;

int calcSum(int number)
{
    static int sum=0;
    if(number!=0)
    {
        sum=sum+(number%10);
        calcSum(number/10);
    }
    return sum;
}
int main()
{
    int number;
    cout<<"Enter any number: ";
    cin>>number;
    int sum=calcSum(number);
    cout<<"The sum of the digits of "<<number<<" is "<<sum<<endl;
    return 0;
}