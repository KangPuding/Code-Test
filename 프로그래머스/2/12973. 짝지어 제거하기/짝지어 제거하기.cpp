#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s)
{
    std::vector<char> v;

    for (int i = 0; i < s.size(); i++) {

        if (!v.empty() && v.back() == s[i]) {
            v.pop_back();
        }
        else
            v.push_back(s[i]);
    }
    if (v.empty())
        return 1;
    else
        return 0;
          
}