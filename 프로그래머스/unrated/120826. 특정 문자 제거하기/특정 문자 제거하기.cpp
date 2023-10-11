#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    string s = my_string;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] != letter[0])
            answer += s[i];
    }
        
    return answer;
}

// string answer = mystring;

//     for (char lett: letter) {
//         answer.erase(remove(answer.begin(), answer.end(), lett), answer.end());
//     }

//     return answer;