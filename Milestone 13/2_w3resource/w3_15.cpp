#include<iostream>

using namespace std;

int r1, c1, r2, c2;
int sum, i=0, j=0, k=0;
int product[10][10];

void matrixMultiplication(int arr1[10][10], int arr2[10][10])
{
    if(i<r1)
    {
        if(j<c2)
        {
            if(k<c1)
            {
                sum=sum+arr1[i][k]*arr2[k][j];
                k++;
                matrixMultiplication(arr1, arr2);
            }
            product[i][j]=sum;
            sum=0;
            k=0;
            j++;
            matrixMultiplication(arr1, arr2);
        }
        j=0;
        i++;
        matrixMultiplication(arr1, arr2);
    }
}

int main()
{
    cout<<"Enter the number of rows of first matrix: ";
    cin>>r1;
    cout<<"Enter the number of columns of first matrix: ";
    cin>>c1;
    cout<<"Enter the number of rows of second matrix: ";
    cin>>r2;
    cout<<"Enter the number of columns of second matrix: ";
    cin>>c2;
    if(c1!=r2)
    {
        cout<<"Matrix multiplication not possible!!";
        return 0;
    }
    else
    {
        cout<<"Matrix multiplication is possible"<<endl;
        int arr1[r1][c1];
        int arr2[r2][c2];
        cout<<"Enter the elements of first matrix row-wise:"<<endl;
        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c1; j++)
            {
                cin>>arr1[i][j];
            }
        }
        cout<<"Enter the elements of second matrix row-wise:"<<endl;
        for(int i=0; i<r2; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cin>>arr2[i][j];
            }
        }
        matrixMultiplication(arr1, arr2);
    }
    cout<<"The product matrix is as follows:"<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cout<<product[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
}