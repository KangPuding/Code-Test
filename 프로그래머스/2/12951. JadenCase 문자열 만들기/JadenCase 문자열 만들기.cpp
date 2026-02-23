#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
        std::string Str{};
        bool isUppercase = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ') {
                isUppercase = true;
                Str += ' ';
            }
            else
            {
                if (isUppercase)
                {
                    if (48 <= s[i] && s[i] <= 57)
                        Str += s[i];
                    else
                        Str += toupper(s[i]);

                    isUppercase = false;
                }
                else
                {
                    Str += tolower(s[i]);
                }
            }
        }

        for (int i = 0; i < Str.length(); i++)
            printf("%c", Str[i]);
    
    return Str;
}