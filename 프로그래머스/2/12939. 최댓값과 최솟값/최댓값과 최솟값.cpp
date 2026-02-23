#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    std::stringstream ss(s);
    int nNum{};
    ss >> nNum;

    int nMax = nNum;
    int nMin = nNum;

    while (ss >> nNum)
    {
        if (nNum < nMin)
            nMin = nNum;

        if (nNum > nMax)
            nMax = nNum;
    }

    answer = to_string(nMin) + " " + to_string(nMax);
    
    return answer;
}