#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(vector<string> babbling) {
std::vector<std::string> Str {"aya","ye", "woo", "ma"};

    int nResult = 0;

    for (int i = 0; i < babbling.size(); i++)
    {
        std::string s = babbling[i];
        std::string prev = "";

        int pos = 0;
        bool ok = true;

        while (pos < s.size() && ok)
        {
            bool matched = false;

            int nIndex = 0;
            while(!matched && nIndex < Str.size())
            {
                std::string cur = Str[nIndex];

                if (pos + cur.size() <= s.size()) {
                    if (s.substr(pos, cur.size()) == cur && prev != cur) {
                        prev = cur;
                        pos += cur.size();
                        matched = true;
                    }
                }
                nIndex++;
            }

            if (matched == false)
                ok = false;
        }

        if (ok == true && pos == s.size())
            nResult++;
    }
    
    return nResult;
}