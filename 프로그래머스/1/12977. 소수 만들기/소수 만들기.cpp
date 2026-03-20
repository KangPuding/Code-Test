#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int nCount = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                int nData = nums[i] + nums[j] + nums[k];

                if (isPrime(nData))
                    nCount++;
            }
        }
    }
    return nCount;
}