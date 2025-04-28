#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    vector<string> DayofTheWeek = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int arMonthDays[12] = {31,29,31,30,31,30,31,31,30,31,30,31};

    int nAllDay = 0;
    for(int i = 0; i < a - 1; i++)
    {
        nAllDay += arMonthDays[i];
    }
    
    nAllDay += b;
    
    int nDay = (nAllDay - 1) % 7;
    
    answer = DayofTheWeek[nDay];
    
    return answer;
}