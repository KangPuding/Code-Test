#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string Str = "";
    
    while(n)
    {
        Str += n % 3 +'0';
        n = n / 3;
    }
    
    for(int i = 0; i < Str[i] != '\0'; i++)
    {
        answer = answer * 3 + (Str[i] -'0');
    }

    return answer;
}

    