#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    
    for(auto s : str_list){
        answer += s;
    }
    
    for(int i = 0; i < str_list.size(); i++){
        if(str_list[i].find(ex) != string::npos)
            answer.erase(answer.find(str_list[i]), str_list[i].length());
    }
    
    return answer;
}