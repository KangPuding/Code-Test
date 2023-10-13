#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string answer = "";
    
    for(int i = 0; i < cipher.size(); i++){
        if(i * code == 0) {
            continue;
        }
        else if (i * code == 1){
            return cipher;
        }
        else if(i * code <= cipher.size()){
            answer += cipher[(i*code) - 1];
        }
    }
    return answer;
}