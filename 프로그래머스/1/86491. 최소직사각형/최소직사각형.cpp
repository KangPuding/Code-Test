#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int nWmax = 0;
    int nHmax = 0;

    int nW = 0;
    int nH = 0;

    for (int i = 0 ; i < sizes.size() ; i++)
    {
        if (sizes[i][0] < sizes[i][1])
        {
            nW = sizes[i][1];
            nH = sizes[i][0];
        }
        else
        {        
            nW = sizes[i][0];
            nH = sizes[i][1];   
        }

        if (nWmax < nW)
            nWmax = nW;

        if (nHmax < nH)
            nHmax = nH;        
    }
    return nWmax * nHmax;
}