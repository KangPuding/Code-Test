#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int nIndex = 0;
    int nResult{};


    while (nIndex < s.size())
    {
        std::string Str{};
        bool isTrue = true;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(')
                Str += s[i];
            else if (!Str.empty())
            {
                if ((Str.back() == '[' && s[i] == ']') || (Str.back() == '{' && s[i] == '}') || (Str.back() == '(' && s[i] == ')'))
                    Str.pop_back();
                else
                    isTrue = false;
            }
            else
                isTrue = false;
        }

        if (!Str.empty())
            isTrue = false;


        if (isTrue)
            nResult++;

        char cBackUp = s[0];
        s.erase(0, 1);
        s += cBackUp;
        nIndex++;
    }

    return nResult;
}