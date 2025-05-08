#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    set<string> saveWords;
    
    for(int i = 0; i < words.size(); i++)
    {
        const string & nCurrent = words[i];
        
        // 중복 단어 
        if(nCurrent.length() < 2 || saveWords.count(nCurrent))
            return { i % n + 1, i / n + 1 };
        
        // 끝말잇기 규칙 : 앞 단어의 마지막 글자 == 현재 단어의 첫 글자 
        if (i > 0 && words[i - 1].back() != nCurrent.front())
            return { i % n + 1, i / n + 1 };
        
        saveWords.insert(nCurrent);
    }
    
   return { 0, 0 };
}

