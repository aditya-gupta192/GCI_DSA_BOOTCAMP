#include<iostream>

using namespace std;

char findFirstCapital(char word[])
{
    static int i=0;
    if(i<strlen(word))
    {    
        if(isupper(word[i]))
            return word[i];
        else
        {
            i++;
            return findFirstCapital(word);
        }
    }
    else return 0;
}

int main()
{
    char word[20];
    cout<<"Enter a word with at least 1 capital letter: ";
    cin>>word;
    char ans=findFirstCapital(word);
    if(ans==0)
    cout<<"There's no capital letter in the enetered word"<<endl;
    else
    cout<<"The first capital letter in the entered string is: "<<ans<<endl;
    return 0;
}