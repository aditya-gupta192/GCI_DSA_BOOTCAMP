#include<iostream>

using namespace std;

char word2[20];
void copyString(char word1[])
{
    static int i=0;
    word2[i]=word1[i];
    if(word1[i]=='\0')
        return;
    i++;
    copyString(word1);
}

int main()
{
    char word1[20];
    cout<<"Enter a string: ";
    cin>>word1;
    copyString(word1);
    cout<<"The copied string: "<<word2<<endl;
    return 0;
}