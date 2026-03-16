#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    
    sort(phone_book.begin(), phone_book.end());

    bool isResult = true;
    std::string Str= phone_book[0];

    for (int i = 1; i < phone_book.size(); i++)
    {
        if (Str.size() < phone_book[i].size() && isResult)
        {
            int nCount = 0;
            for (int j = 0; j < Str.size(); j++)
            {
                if (Str[j] == phone_book[i][j])
                    nCount++;
            }

            if (nCount == Str.size())
                isResult = false;
        }
        Str = phone_book[i];
    }
    
    return isResult;
}