#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    int i = 0;
    
    for(auto s : n_str){
        if(s == '0')
            i++;
        else
            break;
    }
    return n_str.substr(i);
}