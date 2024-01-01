#include <string>
#include <vector>
#include <map>
#include <sstream> 

using namespace std;

map<string,char> mos = {
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
    
     // stringstream을 이용하여 버퍼에 담아준다.
    stringstream sstream;
    sstream.str(letter);
    
    
    // temp에 맞는 모스부호를 찾아 value값을 answer에 더한다
    string temp;
    while(sstream >> temp)
    {
        answer += mos.find(temp)->second;
    }
    
    return answer;
}

// 다시 풀어볼것 