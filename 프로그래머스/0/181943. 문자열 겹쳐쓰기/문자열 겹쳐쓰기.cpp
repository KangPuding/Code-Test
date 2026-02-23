#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
        int nIndex = 0;
        std::string Str {};

        for (int i = 0; i < s; i++)
        {
            Str += my_string[i];
            nIndex++;
        }

        Str += overwrite_string;
        nIndex += overwrite_string.size();

        if (nIndex < my_string.size())
        {
            for (int i = nIndex; i < my_string.size(); i++)
                Str += my_string[i];
        }
    
    return Str;
}