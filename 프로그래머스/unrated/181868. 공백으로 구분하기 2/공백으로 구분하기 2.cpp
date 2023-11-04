#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
     string str; 
    
    for(auto s: my_string){
        if(s != ' ') 
            str += s;
        
        if(s == ' '){
            if(str != ""){
                answer.push_back(str);
                str = "";
            }
        }
    } 
    if(str != "") answer.push_back(str);
    return answer;
}

// 다시 풀어볼것 