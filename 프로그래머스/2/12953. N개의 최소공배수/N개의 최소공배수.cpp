#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b)
{
    if (b == 0)
        return a;

    return GCD(b, a % b);
}

int LCM(int a, int b)
{
    return a / GCD(a, b) * b;
}

int solution(vector<int> arr) {

    int a = arr[0];
    int b{};
    int nCur{};
    
    if (arr.size() == 1)
        return a;
    else
    {
        for (int i = 1; i < arr.size(); i++)
        {
            b = arr[i];
            nCur = LCM(a, b);
            a = nCur;
        }
    }
    return a;
}