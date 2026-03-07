#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    std::set<std::string> saveWords;
    
    for(int i = 0; i < words.size(); i++)
    {
        std::string nCurrent = words[i];
        
        if(nCurrent.length() < 2 || saveWords.count(nCurrent))
            return { i % n + 1, i / n + 1 };
        
        if (i > 0 && words[i - 1].back() != nCurrent.front())
            return { i % n + 1, i / n + 1 };
        
        saveWords.insert(nCurrent);
    }
    
    return { 0, 0 };

}