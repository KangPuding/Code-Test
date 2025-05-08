#include <string>
#include <vector>

using namespace std;

int GCD(int n1, int n2)
{
 
    while(n2 != 0)
    {
        int nDiv = n1 % n2;
        n1 = n2;
        n2 = nDiv;
    }
    
    return n1;
}

int solution(vector<int> arr) {

    int LCM = arr[0];
    
    for(int i = 1; i < arr.size(); i++)
    {
        int gcd = GCD(LCM, arr[i]);
        LCM = (LCM * arr[i]) / gcd;
    }
    
    return LCM;
}