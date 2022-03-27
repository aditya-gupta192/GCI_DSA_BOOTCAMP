#include<iostream>

using namespace std;

char* reverseArray(char word[])
{
    static int i=0;
    static char reversedWord[10];
    if(*word)
    {
        reverseArray(word+1);
        reversedWord[i++]=*word;
    }
    return reversedWord;
}
int main()
{
    char word[10], *reversedWord;
    cout<<"Enter a string: ";
    cin>>word;
    reversedWord=reverseArray(word);
    cout<<"The reversed string is as follows: "<<reversedWord<<endl;
    return 0;
}