#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    std::string temp;
    std::string sub;

    for (int i = 0; i < s.size(); i++)
    {
        if ('Z' == s[i])
        {
            answer -= std::stoi(sub);
        }
        else if (s[i] == ' '&& temp.size() != 0)
        {
            answer += std::stoi(temp);
            sub = temp;
            temp.clear();
        }
        else
        {
            temp.push_back(s[i]);
        }
    }

    if (temp.size() != 0)
        answer += std::stoi(temp);

    printf("%d", answer);
    return answer;
}