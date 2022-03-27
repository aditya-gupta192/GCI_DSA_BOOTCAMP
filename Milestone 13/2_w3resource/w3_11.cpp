#include<iostream>

using namespace std;

long decimalToBinary(int decimalNumber)
{
    static long binaryNumber, factor=1, a;
    if(decimalNumber!=0)
    {
        a=decimalNumber%2;
        binaryNumber=binaryNumber+(a*factor);
        factor=factor*10;
        decimalToBinary(decimalNumber/2);
    }
    return binaryNumber;
}

int main()
{
    long binaryNumber;
    int decimalNumber;
    cout<<"Enter a decimal number: ";
    cin>>decimalNumber;
    binaryNumber=decimalToBinary(decimalNumber);
    cout<<"The binary conversion of "<<decimalNumber<<" is: "<<binaryNumber<<endl;
    return 0;
}