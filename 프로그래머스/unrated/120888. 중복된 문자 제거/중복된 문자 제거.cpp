#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    
    for(int i = 0; i < my_string.size(); i++){
        for(int j = i + 1; j < my_string.size(); j++){
            if(my_string[i] == my_string[j]){
                my_string.erase(j,1);
                j--;
            }
        }
    }
    
    answer = my_string;
    return answer;
}