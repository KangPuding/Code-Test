#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string result;
    
    for(auto s : myString){
        if(s == 'A')
            result += 'B';
        else
            result += 'A';
            
    }
    if(result.find(pat) != string::npos)
        return 1;
    else
        return 0;
}