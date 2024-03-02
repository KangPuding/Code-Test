#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    
    int result = 0;
    
    if(date1[0] < date2[0])
        result = 1;
    
    else if (date1[0] == date2[0] && date1[1] < date2[1])
            result = 1;
    
    else if (date1[1] == date2[1] && date1[2] < date2[2])
            result = 1;
    
    return result;
        
}