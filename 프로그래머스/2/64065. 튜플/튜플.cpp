#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> solution(string s) {
    vector<vector<int>> sets;
    vector<int> answer;
    set<int> used;

    string num = "";
    vector<int> current;

    for (int i = 1; i < s.size() - 1; ++i) 
    {
        if (isdigit(s[i])) 
        {
            num += s[i];
        } 
        else if (s[i] == ',') 
        {
            if (!num.empty()) 
            {
                current.push_back(stoi(num));
                num = "";
            }
        } 
        else if (s[i] == '}') 
        {
            if (!num.empty()) 
            {
                current.push_back(stoi(num));
                num = "";
            }
            if (!current.empty()) 
            {
                sets.push_back(current);
                current.clear();
            }
        }
    }

    sort(sets.begin(), sets.end(), [](const vector<int>& a, const vector<int>& b) 
    {
        return a.size() < b.size();
    });

    for (const auto& set : sets) 
    {
        int newNumber = -1;
        for (int n : set) 
        {
            if (used.find(n) == used.end()) 
            {
                newNumber = n; 
                used.insert(n);
            }
        }
        if (newNumber != -1) 
        {
            answer.push_back(newNumber);
        }
    }


    return answer;
}
