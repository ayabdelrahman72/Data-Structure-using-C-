#include <iostream>
#include "string.h"
using namespace std;
void numberOfVowels(string word,int noOfVowels){
    if(word.size()==0)
            cout<<"Number of vowels is : "<< noOfVowels;
    else
       if(word[word.size()-1]== 'a' || word[word.length()-1]== 'o' || word[word.length()-1]== 'u'|| word[word.length()-1]== 'e' ||word[word.length()-1]== 'i' ){
        word.erase(word.size() - 1);
        numberOfVowels(word,noOfVowels+1);
       }
       else{
         word.erase(word.size() - 1);
        numberOfVowels(word,noOfVowels);
       }

}
int main()
{
    int noOfVowels=0;
    string word;
    cout<<"Enter the WORD that you wanna ask about the NUMBER of VOWELS that this word has"<<endl;
    cin>>word;
    numberOfVowels(word,noOfVowels);

    return 0;
}
