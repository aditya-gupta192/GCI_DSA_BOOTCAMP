#include<iostream>

using namespace std;

int binarySearch(int arr1[], int n, int md, int low, int hg)
{
    int mid, c=0;
    if (low<=hg) 
    {
        mid=(low+hg)/2;
        if(md==arr1[mid]) 
        {
            c=1;
        }
        else if(md<arr1[mid]) 
        {
            return binarySearch(arr1, n, md, low, mid-1);
        }
        else
            return binarySearch(arr1, n, md, mid+1, hg);
    }
    else
        return c;
}

int main()
{
    int arr1[10], i, n, md, c, low, hg;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the number to search: ";
    cin>>md;
    low=0, hg=n-1;
    c=binarySearch(arr1, n, md, low, hg);
    if(c==0)
        cout<<"The said number does not exist in the array!"<<endl;
    else
        cout<<"The said number found in the array"<<endl;
    return 0;
}
