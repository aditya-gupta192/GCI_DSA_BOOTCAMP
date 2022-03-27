#include<iostream>

using namespace std;

int arr[20];
int size;

int findGreatest(int i)
{
    static int greatest=0;
    while(i<size)
    {
        if((arr[i]>arr[i+1])&&(arr[i]>greatest))
        {    
            greatest=arr[i];
            i++;
            findGreatest(i);
        }
        else 
        {
            i++;
            findGreatest(i);
        }
    }
    return greatest;
}

int main()
{
    cout<<"Enter the size of the array(<20): ";
    cin>>size;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int greatest=findGreatest(i);
    cout<<"The greates element in the entered array is: "<<greatest<<endl;
    return 0;
}