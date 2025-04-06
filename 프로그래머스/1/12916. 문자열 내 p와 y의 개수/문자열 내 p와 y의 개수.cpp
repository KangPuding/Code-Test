#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool nAnswer = false;
    int nPcount = 0;
    int nYcount = 0;
    
    for(int i = 0; i < s[i] != '\0'; i++)
    {
        if(s[i] == 'p' || s[i] == 'P')
            nPcount++;
        if(s[i] == 'y' || s[i] == 'Y')
            nYcount++;
    }
    
    if(nPcount == nYcount || (nPcount == 0 && nYcount == 0))
        nAnswer = true;
    
    return nAnswer;
}