#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    
    int c1 = 0, c2 = 0, g = 0;
    
    while(1){
        if(g == goal.size())
            break;
        
        else {
            if(goal[g] == cards1[c1]){
                g++;
                c1++;
            }
            else if(goal[g] == cards2[c2]){
                g++;
                c2++;
            }
            else{
                answer ="No";
                break;
            }
        }
    }
    return answer;
}