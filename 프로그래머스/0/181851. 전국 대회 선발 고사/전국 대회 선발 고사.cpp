#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<pair<int, int>> ok;
    
    for(int i = 0; i < rank.size(); i++){
            ok.push_back({rank[i], i});
    }
    
    sort(ok.begin(), ok.end());

    vector<int> t;
    for(auto& s : ok) {
        if(attendance[s.second])
            t.push_back(s.second);
        if(t.size() == 3)
            break;
    }
    
    
    return ((10000 * t[0]) + (100 * t[1]) + t[2]);
}