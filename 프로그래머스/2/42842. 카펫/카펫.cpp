#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int nCarpet = brown + yellow;
    int nWidth = 0;
    int nHeight = 0;
    
    for(int h = 3; h <= nCarpet / 3; h++)
    {
        if(nCarpet % h == 0)
        {
            int w = nCarpet / h;
            if((w - 2) * (h - 2) == yellow)
            {
                nWidth = w;
                nHeight = h;
                
                h = nCarpet;
            }  
        }
    }
    
    answer.push_back(nWidth);
    answer.push_back(nHeight);
    
    return answer;
}