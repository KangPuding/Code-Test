#include <string>
#include <vector>

using namespace std;

int solution(int price) {
//     int answer = 0;
    
//     if (price >= 500000)
//         answer += price - (price * 0.2);
//     else if (price >= 300000)
//         answer += price - (price * 0.1);
//     else if (price >= 100000)
//         answer += price - (price * 0.05);
//     else
//         answer += price;
    
//     return answer;
    
    return price >= 500000 ? price * 0.8 :
           price >= 300000 ? price * 0.9 :
           price >= 100000 ? price * 0.95 : price;
}