#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string left = "";
    string right = "";
    
    for(int i = 1; i < food.size(); i++)
    {
        int nQuotient = 0;
        nQuotient = food[i] / 2;
        
        for(int j = 0; j < nQuotient; j++)
        {
            left += to_string(i);
        }
    }
    
    right = left;
    reverse(right.begin(), right.end());
    
    answer = left + '0' + right;
    return answer;
}