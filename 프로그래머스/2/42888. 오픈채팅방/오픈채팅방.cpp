#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> record) {
    unordered_map<string, string> user; 
    vector<pair<string, string>> actions; 

    for (const string& rec : record) {
        int nPos1 = rec.find(' ');
        string action = rec.substr(0, nPos1);

        int nPos2 = rec.find(' ', nPos1 + 1);
        string userId = rec.substr(nPos1 + 1, nPos2 - nPos1 - 1);
        string nickName = "";
        
        if(nPos2 != string::npos)
            nickName = rec.substr(nPos2 + 1);
            
        if (action == "Enter" || action == "Change")
            user[userId] = nickName;

        if (action == "Enter" || action == "Leave")
            actions.push_back({action, userId});
    }
    
    vector<string> Result;
    
    for(const auto & act : actions)
    {
        string nickname = user[act.second];
        
        if (act.first == "Enter") 
            Result.push_back(nickname + "님이 들어왔습니다.");
        
        else if (act.first == "Leave") 
            Result.push_back(nickname + "님이 나갔습니다.");
        
    }
    
    return Result;
}