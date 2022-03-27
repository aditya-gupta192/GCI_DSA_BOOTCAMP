#include<iostream>

using namespace std;

int arr[20];
void printArray(int size)
{
    static int i=0;
    if(i<size)
    {
        cout<<arr[i]<<" ";
        i++;
        printArray(size);
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array(<20): ";
    cin>>size;
    cout<<"Enter the element one-by-one:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"The entered array is as follows: ";
    printArray(size);
    return 0;
}