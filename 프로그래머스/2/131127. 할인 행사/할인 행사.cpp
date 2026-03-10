#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    
    std::unordered_map<std::string, int> m_discount{};

    int nNumber = 0;

    for (int i = 0; i < number.size(); i++) {
        nNumber += number[i];
    }

    for (int i = 0; i < nNumber; i++) {
        m_discount[discount[i]]++;
    }

    int nIndex = 0;
    int nResult = 0;

    while (nIndex + nNumber <= discount.size())
    {
        int nCorrect = 0;
        for (int i = 0; i < want.size(); i++)
        {
            if (m_discount[want[i]] == number[i])
            {
                nCorrect++;
            }
        }

        if (nCorrect == want.size())
            nResult++;

        if (nIndex + nNumber < discount.size())
        {
            m_discount[discount[nIndex]]--;
            m_discount[discount[nIndex + nNumber]]++;
        }
        nIndex++;
    }
    
    return nResult;
}