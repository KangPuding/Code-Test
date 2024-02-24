#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    string a;
    for(auto s : my_string){
        if(s != ' ')
            a += s;
        else {
            if(a != ""){
                answer.push_back(a);
                a = "";
            }
        }
    }
    
    if(a != "")
        answer.push_back(a);

    return answer;
}