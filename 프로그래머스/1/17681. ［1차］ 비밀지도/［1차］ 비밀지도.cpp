#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void binary(int a, int n, std::string &Str)
{
    Str.assign(n, '0');

    int nIndex = n - 1;
    while (a > 0)
    {
        if (a % 2 == 0)
            Str[nIndex] = '0';
        else
            Str[nIndex] = '1';

        a = a / 2;
        nIndex--;
    }
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {

    std::vector<std::string> sArr1{};
    std::vector<std::string> sArr2{};

    for (int i = 0; i < arr1.size(); i++)
    {
        std::string Str{};
        binary(arr1[i],n, Str);
        sArr1.push_back(Str);
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        std::string Str{};
        binary(arr2[i],n, Str);
        sArr2.push_back(Str);
    }

    std::vector<std::string> sResult{};

    for (int i = 0; i < sArr1.size(); i++)
    {
        std::string Str{};
        for (int j = 0; j < sArr1[i].size(); j++)
        {
            if (sArr1[i][j] == '1' || sArr2[i][j] == '1')
                Str += "#";
            else
                Str += " ";
        }
        sResult.push_back(Str);
    }
    
    return sResult;
}