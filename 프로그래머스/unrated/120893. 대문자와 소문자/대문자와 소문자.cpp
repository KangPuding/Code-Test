#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string s = my_string;

    for(int i = 0; i < s.size(); i++){
        s[i] = int (s[i]);
    }

    for(int j =0; j < s.size(); j++){
        if(s[j] > 64 && s[j] <91){
            s[j] = s[j] + 32;   
            answer.push_back(static_cast<int>(s[j]));
        }
        else if (s[j] > 96 && s[j] < 123){
            s[j] = s[j] - 32;  
            answer.push_back(static_cast<int>(s[j]));   
        }
    }

    return answer;
}

// string solution(string my_string) {
//     string answer = "";
//     string s = my_string;
    
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] < 97)
//         s[i] += 32;
//         else
//         s[i] -= 32;  
//     }
    
    
//     return s;
// }