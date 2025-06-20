#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> players, int m, int k) {
    
    queue<pair<int,int>> Time;
    int nTotalServer = 0;
    int nCurrServer = 0;
    
    for(int i = 0; i < players.size(); i++)
    {
        if(!Time.empty() && Time.front().first == i)
        {
            nCurrServer -= Time.front().second;
            Time.pop();
        }
        
        int nNeedServer = players[i] / m;
        
        if(nNeedServer > nCurrServer)
        {
            int nServer = nNeedServer - nCurrServer;
            nTotalServer += nServer;
            nCurrServer += nServer;
            Time.push(make_pair(i + k, nServer));
        }
    }
    return nTotalServer;
}