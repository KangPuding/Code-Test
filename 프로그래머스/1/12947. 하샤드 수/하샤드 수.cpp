#include <string>
#include <vector>

using namespace std;

bool solution(int x) {

    bool answer = false;
    int nTotal = 0;
    
    string Str = to_string(x);
    
    for(int i = 0; i < Str[i] != '\0'; i++)
    {
        string nStoi;
        nStoi = Str[i];
        nTotal += stoi(nStoi);
    }
    
    if(x % nTotal == 0)
        return true;
    
    return false;
}
