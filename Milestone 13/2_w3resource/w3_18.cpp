#include<iostream>

using namespace std;

void hailStone(int number)
{
    int next;
    if(number%2==0)
    {
        next=number/2;
        cout<<next<<" ";
        if(next!=1)
        {
            hailStone(next);
        }
        else return;
    }
    else
    {
        next=(number*3)+1;
        cout<<next<<" ";
        if(next!=1)
            {
                hailStone(next);
            }
        else return;
    }
}
int main()
{
    int number;
    cout<<"Enter any number to start its hailstone sequance: ";
    cin>>number;
    cout<<number<<" ";
    hailStone(number);
    cout<<endl;
    return 0;
}