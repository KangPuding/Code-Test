#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string n;
    
    for(int i = 0; i < myStr.size(); i++){
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c')
            n += myStr[i];
        else if (n != ""){
            answer.push_back(n);
            n = "";
        }
    }
    if (n != "")
        answer.push_back(n);
    else
        answer.push_back("EMPTY");

    return answer;
}