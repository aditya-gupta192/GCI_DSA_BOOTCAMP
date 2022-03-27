#include<iostream>

using namespace std;

int calcPower(int base, int power)
{
    static int i=0;
    static int newbase=1;
    if(i<power)
    {
        newbase=newbase*base;
        i++;
        calcPower(base, power);
        return newbase;
    }
    return 0;
}
int main()
{
    int base, power, ans;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the power: ";
    cin>>power;
    ans=calcPower(base, power);
    cout<<base<<"^"<<power<<"="<<ans<<endl;
    return 0;
}