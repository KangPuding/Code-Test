#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    
    std::vector<std::string> Days {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    std::vector<int> Months {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int nDays = 0;

    for (int i = 0; i < a - 1; i++)
    {
        nDays += Months[i];
    }
    nDays += b - 1;
    
    return Days[nDays % 7];

}