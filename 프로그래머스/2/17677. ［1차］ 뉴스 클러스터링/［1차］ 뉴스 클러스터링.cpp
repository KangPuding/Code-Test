#include <string>
#include <vector>
#include <map>
#include <cctype>

using namespace std;

void ToUpper(string& str)
{
    for (char& c : str)
    {
        c = static_cast<char>(toupper(static_cast<unsigned char>(c)));
    }
}

vector<string> MakePairs(const string& str)
{
    vector<string> result;

    for (int i = 1; i < str.length(); ++i)
    {
        char a = str[i - 1];
        char b = str[i];

        if ('A' <= a && a <= 'Z' && 'A' <= b && b <= 'Z')
        {
            string temp;
            temp += a;
            temp += b;
            result.push_back(temp);
        }
    }

    return result;
}

int solution(string str1, string str2)
{
    ToUpper(str1);
    ToUpper(str2);

    vector<string> v1 = MakePairs(str1);
    vector<string> v2 = MakePairs(str2);

    map<string, int> m1;
    map<string, int> m2;

    for (const string& s : v1)
        m1[s]++;

    for (const string& s : v2)
        m2[s]++;

    int intersection = 0;
    int uni = 0;

    map<string, int> allKeys = m1;
    for (const auto& [key, value] : m2)
        allKeys[key];

    for (const auto& [key, _] : allKeys)
    {
        int c1 = m1[key];
        int c2 = m2[key];

        intersection += min(c1, c2);
        uni += max(c1, c2);
    }

    if (uni == 0)
        return 65536;

    return static_cast<int>((double)intersection / uni * 65536);
}