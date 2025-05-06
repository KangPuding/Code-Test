#include <string>
#include <vector>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    int cInteger = 0;
    int cfrontNumber = 0;
    string num = "";
    
    for(int i = 0; i < polynomial.size(); i++)
    {
        char ch = polynomial[i];

        if(isdigit(ch))
            num += ch;
        else if (ch == 'x')
        {
            if(num == "")
                cfrontNumber++;
            else
            {
                cfrontNumber += stoi(num);
                num = "";
            }
        }
        else if (ch == '+' || ch == ' ')
        {
            if(!num.empty())
            {
                cInteger += stoi(num);
                num = "";
            }
        }
    }    
    
    if (!num.empty()) 
        cInteger += stoi(num);
    
    if (cfrontNumber > 0) 
    {
        if (cfrontNumber == 1)
            answer += "x";
        else 
            answer += to_string(cfrontNumber) + "x";
    }

    if (cInteger > 0) 
    {
        if (!answer.empty()) 
            answer += " + ";
       
        answer += to_string(cInteger);
    }
    
    return answer;
}