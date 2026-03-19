#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
bool isTrue = true;
    int nCount = 0;

    while (isTrue)
    {
        if ((wallet[0] >= bill[0] && wallet[1] >= bill[1]) || (wallet[0] >= bill[1] && wallet[1] >= bill[0]))
            isTrue = false;
        else
        {
            if (bill[0] > bill[1])
                bill[0] = bill[0] / 2;
            else
                bill[1] = bill[1] / 2;

            nCount++;
        }
    }
    
    return nCount;
}