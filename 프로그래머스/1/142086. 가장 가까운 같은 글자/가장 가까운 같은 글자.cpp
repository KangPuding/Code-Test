#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    std::vector<int> v{};
    char c{};
    int nCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        c = s[i];

        if (v.empty())
            v.push_back(-1);
        else
        {
            bool isTrue = false;
            int nIndex = i;
            nCount = 0;
            while (!isTrue && nIndex >= 0)
            {
                nIndex--;

                if (s[nIndex] == c) {
                    nCount++;
                    isTrue = true;
                }
                else
                    nCount++;

            }

            if (isTrue)
                v.push_back(nCount);
            else
                v.push_back(-1);
        }
    }


    for (int i = 0; i < v.size(); i++)
        printf("%d ", v[i]);
    
    return v;
}