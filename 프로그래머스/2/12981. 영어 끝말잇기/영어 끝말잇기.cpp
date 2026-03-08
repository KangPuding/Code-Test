#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
   
    std::set<std::string> save{};
    bool isTrue = true;
    int nIndex = 0;
    int nCount = 1;

    std::string CurrentWord{};
    std::string PrevWord{};

    while (nIndex < words.size() && isTrue)
    {
        CurrentWord = words[nIndex];

        auto it = save.insert(words[nIndex]);
        if (!it.second)
            isTrue = false;
        else if (nIndex != 0 && CurrentWord[0] != PrevWord.back())
            isTrue = false;
        else {
            PrevWord = CurrentWord;
            nIndex++;
        }
        nCount++;
    }
    
    if(isTrue)
        return {0,0};
    else
        return {nIndex % n + 1, nIndex / n + 1};
}