#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes) {
    
    sort(routes.begin(), routes.end(), [](const vector<int>& a, const vector<int>& b)
    {
        return a[1] < b[1]; 
    });
    
    int nCamera = -30001; 
    int nCount = 0;
    
    for(int i = 0; i < routes.size(); i++)
    {
        if (routes[i][0] > nCamera) {
            nCamera = routes[i][1]; 
            nCount++;
        }
    }
    
    return nCount;
}