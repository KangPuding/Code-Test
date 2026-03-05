#include <string>
#include <vector>

using namespace std;

int solution(string s) {

    int nIndex = 0;
    std::string Str{};

    while (nIndex < s.length())
    {
        if (s[nIndex] == 'z') {
            Str += "0";
            nIndex += 4;
        }
        else if (s[nIndex] == 'o') {
            Str += "1";
            nIndex += 3;
        }
        else if (s[nIndex] == 't')
        {
            if (s[nIndex + 1] == 'w')
            {
                Str += "2";
                nIndex += 3;
            }
            else
            {
                Str += "3";
                nIndex += 5;
            }
        }
        else if (s[nIndex] == 'f')
        {
            if (s[nIndex + 1] == 'o')
            {
                Str += "4";
                nIndex += 4;
            }
            else
            {
                Str += "5";
                nIndex += 4;
            }
        }
        else if (s[nIndex] == 's')
        {
            if (s[nIndex + 1] == 'i')
            {
                Str += "6";
                nIndex += 3;
            }
            else
            {
                Str += "7";
                nIndex += 5;
            }
        }
        else if (s[nIndex] == 'e')
        {
            Str += "8";
            nIndex += 5;
        }
        else if (s[nIndex] == 'n')
        {
            Str += "9";
            nIndex += 4;
        }
        else {
            Str += s[nIndex];
            nIndex++;
        }
    }
    
    return stoi(Str);
}