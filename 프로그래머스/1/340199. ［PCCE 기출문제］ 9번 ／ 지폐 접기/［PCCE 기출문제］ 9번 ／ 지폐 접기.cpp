#include <string>
#include <vector>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    bool bSucc = false;
    
    while(!bSucc)
    {
        if(wallet[0] >= bill[0] && wallet[1] >= bill[1])
            bSucc = true;
        else if(wallet[0] >= bill[1] && wallet[1] >= bill[0])
            bSucc = true;
        else
        {
            if(bill[0] < bill[1])
                bill[1] /= 2;
            else
                bill[0] /= 2;
            
            answer++; 
        }  
    }
    return answer;
}