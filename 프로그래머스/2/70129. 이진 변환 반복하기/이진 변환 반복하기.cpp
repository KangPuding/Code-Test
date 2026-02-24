#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int nTotalRemoveCount = 0;
    int nCount = 0;

    int nLength = s.size();

    while (nLength != 1)
    {
        int nRemoveZeroCount = 0;
        int nRemainLength = 0;
        for (int i = 0 ; i < nLength; i++)
        {
            if (s[i] == '0')
                nRemoveZeroCount++;
        }
        nTotalRemoveCount += nRemoveZeroCount;
        s.erase(s.begin(), s.end());
        nRemainLength = nLength - nRemoveZeroCount;

        while (nRemainLength > 1)
        {
            if (nRemainLength % 2 == 0)
            {
                s += "0";
                nRemainLength /= 2;
            }
            else if (nRemainLength % 2 == 1)
            {
                s += "1";
                nRemainLength /= 2;
            }
        }

        if (nRemainLength == 1)
            s += "1";
        else
            s += "0";

        std::reverse(s.begin(), s.end());
        printf("%s\n", s.c_str());

        nLength = s.size();
        nCount++;
    }
    printf("%d\n", nTotalRemoveCount);
    printf("%d\n", nCount);
    
    answer.push_back(nCount);
    answer.push_back(nTotalRemoveCount);
    return answer;
}