#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    
    int nIdx1 = 0;
    int nIdx2 = 0;

    for (int i = 0; i < goal.size(); i++) {
        if (nIdx1 < cards1.size() && cards1[nIdx1] == goal[i]) {
            nIdx1++;
        } else if (nIdx2 < cards2.size() && cards2[nIdx2] == goal[i]) {
            nIdx2++;
        } else {
            return "No"; 
        }
    }

    return "Yes"; 
}