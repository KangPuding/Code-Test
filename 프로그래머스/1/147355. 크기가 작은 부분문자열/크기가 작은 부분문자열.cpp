#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    
    int nPsize = p.size();;
    int nIndex = 0;
    int nResult = 0;

    printf("%d\n", nPsize);

    if (nPsize == 1)
    {
        for (int i = 0; i < t.size(); i++) {
            std::string Str{};
            Str += t[i];

            if (p >= Str)
                nResult++;
        }
    }
    else
    {
        while (nIndex + nPsize - 1 < t.size())
        {
            std::string Str{};
            for (int i = nIndex; i < nIndex + nPsize; i++)
            {
                Str += t[i];
            }

            if (p >= Str)
                nResult++;

            nIndex++;
        }
    }

    printf("%d\n", nResult);
    
    return nResult;
}