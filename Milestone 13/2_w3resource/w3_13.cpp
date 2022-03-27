#include<iostream>

using namespace std;

int findLcm(int a, int b)
{
    static int lcm=0;
    lcm+=b;
    if((lcm%a==0)&&(lcm%b==0))
    {
        return lcm;
    }
    else
    {
        findLcm(a, b);
    }
    return lcm;
}

int main()
{
    int number1, number2, lcm;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    if(number1>number2)
        lcm=findLcm(number2, number1);
    else
        lcm=findLcm(number1, number2);
    cout<<"The LCM of "<<number1<<" and "<<number2<<" is: "<<lcm<<endl;
    return 0;
}