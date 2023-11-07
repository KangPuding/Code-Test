#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int i = 0;
    
    while(i < n_str.size() && n_str[i] == '0'){
        i++;
    }
    
    if (i < n_str.size()) {
        answer = n_str.substr(i);
    } 
    else {
        answer = "0";
    }

    return answer;
}