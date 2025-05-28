#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<string> operations) {
    multiset<int> que;
    
    for(const string& op : operations)
    {
        if(op[0] == 'I')
        {
            int nData = stoi(op.substr(2));
            que.insert(nData);
        }
        else if (op == "D 1")
        {
            if (!que.empty()) 
            {
                auto it = prev(que.end());
                que.erase(it);
            }
        }
        else if (op == "D -1")
        {
            if (!que.empty()) 
                que.erase(que.begin());
        }
    }
    
    if (que.empty()) 
        return {0, 0};

    int maxVal = *prev(que.end());
    int minVal = *que.begin();
    return {maxVal, minVal};
}