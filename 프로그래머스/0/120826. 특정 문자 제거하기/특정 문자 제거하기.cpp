#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string a = "";
    for(auto s : my_string){
        if(s != letter[0])
            a += s;
    }
    return a;
}

// for(int i = 0; i < my_string.size(); i++){
//         if(my_string[i] == letter[0]){
//             my_string.erase(my_string.begin() + i);
//             i--;
//         }
//     }
    
//     return my_string;