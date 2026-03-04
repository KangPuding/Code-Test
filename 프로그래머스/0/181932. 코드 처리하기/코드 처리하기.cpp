#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    
    std::string Str = "";
    std::string ret = "";
    int mode = 0;

    for (int i = 0; i < code.length(); i++)
    {
        if (code[i] == '1')
        {
            if (mode == 0)
                mode = 1;
            else if (mode == 1)
                mode = 0;
        }
        else if (mode == 1 && i % 2 == 1)
        {
            ret += code[i];
        }
        else if (mode == 0 && i % 2 == 0)
        {
            ret += code[i];
        }
    }
    
    if(ret.empty())
        Str = "EMPTY";
    else
        Str = ret;
    
    return Str;
        
}