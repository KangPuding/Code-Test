#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
        
    std::vector<std::vector<int>> answer;
    int nWidth = arr.size();
    int nHeight = arr[0].size();

    int nMaxSize{};
    
    if (nWidth > nHeight)
        nMaxSize = nWidth;
    else
        nMaxSize = nHeight;

        answer.resize(nMaxSize);
    
    for (int i = 0; i < nMaxSize; i++) {
        for (int j = 0; j < nMaxSize; j++) {
            answer[i].push_back(0);
        }
    }
    for (int i = 0; i < nWidth; i++) {
        for (int j = 0; j < nHeight; j++) {
            answer[i][j] = arr[i][j];
        }
    }
    
    return answer;
}