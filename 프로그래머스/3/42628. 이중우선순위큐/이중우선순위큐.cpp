#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<string> operations) {
    std::multiset<int> s_operations {};


    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "D -1" && !s_operations.empty())
           s_operations.erase(s_operations.begin());
        else if (operations[i] == "D 1" && !s_operations.empty())
            s_operations.erase(prev(s_operations.end()));
        else if (operations[i][0] == 'I')
        {
            std::string Str{};
            for (int j = 0; j < operations[i].size(); j++)
            {
                if (operations[i][j] != 'I' && operations[i][j] != ' ')
                    Str+= operations[i][j];
            }
            s_operations.insert(stoi(Str));
        }
    }
    
    if(s_operations.empty())
        return {0, 0};
    else
        return { *prev(s_operations.end()), *s_operations.begin()};
}