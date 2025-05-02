#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int nRemoveZero = 0;
    int nRecycle = 0;
    
    
    while(s != "1")
    {
        int nCountOne = 0;
        nRecycle++;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
                nRemoveZero++;
            else
                nCountOne++;             
        }
        
        string Str = "";
        while (nCountOne > 0) 
        {
            Str = char(nCountOne % 2 + '0') + Str;
            nCountOne /= 2;
        }
        s = Str;
    }
    answer.push_back(nRecycle);
    answer.push_back(nRemoveZero);
    return answer;
}