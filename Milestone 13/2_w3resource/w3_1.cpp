#include<iostream>

using namespace std;

void printNaturalNumbers(int i)
{    
    if(i<=50)
    {
        cout<<i<<" ";
        i++;
        printNaturalNumbers(i);
    }
}
int main()
{
    int i=1;
    cout<<"First 50 natural numbers are:"<<endl;
    printNaturalNumbers(i);
    return 0;
}