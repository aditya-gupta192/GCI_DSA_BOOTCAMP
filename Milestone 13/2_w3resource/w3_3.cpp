#include<iostream>

using namespace std;

int noOfTerms;
void printFibonacci(int previous, int current)
{
    static int i=1;
    int next;
    if(i!=noOfTerms)
    {
        next=previous+current;
        previous=current;
        current=next;
        cout<<next<<" ";
        i++;
        printFibonacci(previous, current);
    }
}
int main()
{
    static int previous=0, current=1;
    cout<<"Enter the number of terms for the series: ";
    cin>>noOfTerms;
    cout<<"The Fibonacci series with "<<noOfTerms<<" terms is as follows:"<<endl;
    cout<<1<<" ";
    printFibonacci(previous, current);
    return 0;
}
