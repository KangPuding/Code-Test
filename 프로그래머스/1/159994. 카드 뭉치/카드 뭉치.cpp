#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    bool isTrue = true;
    int nIndex = 0;
    int nCardIndex1 = 0;
    int nCardIndex2 = 0;

    while (isTrue && nIndex < goal.size())
    {
        if (goal[nIndex] == cards1[nCardIndex1])
        {
            nIndex++;
            nCardIndex1++;
        }
        else if (goal[nIndex] == cards2[nCardIndex2])
        {
            nIndex++;
            nCardIndex2++;
        }
        else
            isTrue = false;
    }

    if (isTrue && nIndex == goal.size())
        return "Yes";
    else
        return "No";
}