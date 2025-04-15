#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int nMin = arr[0];
    int nMinIndex = 0;
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(nMin > arr[i])
        {
            nMin = arr[i];
            nMinIndex = i;
        }
    }
    printf("%d", arr[nMinIndex]);
    
    arr.erase(arr.begin() + nMinIndex);
    
    if(arr.size() == 0)
        answer.push_back(-1);
    else 
    {
        for(int i = 0; i < arr.size(); i++)
        {
        answer.push_back(arr[i]);
        }   
    }
    return answer;
}