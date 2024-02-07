#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0, y = 0;
    
    for(int i=0; i<keyinput.size(); i++){
        if(keyinput[i] == "up" && y + 1 <= board[1]/2) 
            y += 1;
        else if(keyinput[i] == "down" && y - 1 >= -board[1]/2) 
            y -= 1;
        else if(keyinput[i] == "right" && x + 1 <= board[0]/2) 
            x += 1;
        else if(keyinput[i] == "left" && x - 1 >= -board[0]/2) 
            x -= 1;
    }
    
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}