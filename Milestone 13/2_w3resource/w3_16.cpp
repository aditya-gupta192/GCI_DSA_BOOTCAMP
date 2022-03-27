#include<iostream>

using namespace std;

char word[10];

void checkPalindrome(int i)
{
    int len=strlen(word)-i-1;
    if(word[i]==word[len])
    {
        {
            if((i+1==len)||(i=len))
            {
                cout<<"Entered string is a palindrome"<<endl;
                return;
            }
        }
        checkPalindrome(i+1);
    }
    else
    {
        cout<<"Entered string is not a palindrome"<<endl;
        return;
    }
}

int main()
{
    cout<<"Enter a string: ";
    cin>>word;
    int ans;
    checkPalindrome(0);
    return 0;
}