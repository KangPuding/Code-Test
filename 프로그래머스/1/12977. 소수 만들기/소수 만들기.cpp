#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int nData)
{
    if(nData < 2)
        return false;
    
    for(int i = 2; i * i <= nData; i++)
    {
        if(nData % i == 0)
            return false;
    }
    
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int nVsize = nums.size();

    for(int i = 0; i < nVsize - 2; i++)
    {
       for(int j = i + 1; j < nVsize - 1; j++)
       {
           for(int w = j + 1; w < nVsize; w++)
           { 
               int nSum = nums[i] + nums[j] + nums[w];  
               if(isPrime(nSum))
                   answer++;
           }
       }
    }

    return answer;
}