#include <string>
#include <vector>
#include <map>
#include<sstream>

using namespace std;

// map에 모스부호 삽입
map <string, char> morse = {
     {".-",'a'},{"-...",'b'},{"-.-.",'c'},{"-..",'d'},
    {".",'e'},{"..-.",'f'},{"--.",'g'},{"....",'h'},
    {"..",'i'},{".---",'j'},{"-.-",'k'},{".-..",'l'},
    {"--",'m'},{"-.",'n'},{"---",'o'},{".--.",'p'},
    {"--.-",'q'},{".-.",'r'},{"...",'s'},{"-",'t'},
    {"..-",'u'},{"...-",'v'},{".--",'w'},{"-..-",'x'},
    {"-.--",'y'},{"--..",'z'}
};
string solution(string letter) {
    
    string answer = "";

    //sstream ss를 설정 , 초기화 ->stream에 letter 대입. 
    stringstream ss;
    ss.str(letter);
    
    string tmp;
    while(ss >> tmp){
        if (morse.find(tmp) != morse.end()) {
            answer += morse[tmp];
        }
    }
    
    return answer;
}