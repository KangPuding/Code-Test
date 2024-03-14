#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    
    string a = "";
    
    for(int i = 0; i < code.size(); i++){
        if(i % q == r)
            a += code[i];
    }
    
    return a;
}