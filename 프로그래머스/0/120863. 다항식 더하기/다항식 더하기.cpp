#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {

    std::stringstream ss (polynomial);
    std::string Str{};
    int nSign = 1;

    int nXData = 0;
    int nData = 0;

    while (ss >> Str) {

        if (Str == "+")
            nSign = 1;
        else if (Str == "-")
            nSign = -1;
        else if (Str == "x")
            nXData += nSign * 1;
        else if (isdigit(Str[0]))
        {
            if (Str.back() == 'x')
                nXData += nSign * stoi(Str.substr(0, Str.size() - 1));
            else
                nData += nSign * stoi(Str);

        }
    }
    
    std::string s = "+";
    if(nData < 0)
    {
        s = "-";
        nData *= -1;
    }
        
    if(nXData == 0)
    {
        if(s == "-")
            Str = to_string(-1 * nData);
        else
            Str = to_string(nData);
    }

    else if(nData != 0)
    {
   if(nXData == 1)
        Str = string("x") + " " + s + " " + to_string(nData);
    else if (nXData == -1)
        Str = string("-x") + " " + s + " " + to_string(nData);
    else
        Str = to_string(nXData) + "x" + " " + s + " " + to_string(nData); 
    }
    else if (nData == 0)
    {
        if(nXData == 1)
            Str = "x";
        else if (nXData == -1)
            Str = "-x";
        else
            Str = to_string(nXData) + "x";
    }
    
        
        
    
    return Str;
    
    
}