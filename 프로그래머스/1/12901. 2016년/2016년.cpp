#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int sum = 0;
    // 총 336일, 금요일이 1월 1일 
    // 31일 ( 1, 3, 5, 7, 8, 10, 12)
    // 30일 ( 4, 6, 9, 11)
    // 29일 ( 2 )
    
    string day[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int month[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for(int i = 0; i < a; i++){
        sum += month[i];
    }
    sum += b - 1;
    answer = day[sum % 7];
        
    return answer;
}