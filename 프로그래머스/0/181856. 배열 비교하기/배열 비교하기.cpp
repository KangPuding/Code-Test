#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int answer = 0, Arr1 = 0, Arr2 = 0;
    
    if(arr1.size() > arr2.size())
        return 1;
    else if (arr1.size() < arr2.size())
        return -1;
    else {
        for(int i = 0; i < arr1.size(); i++){
            Arr1 += arr1[i];
            Arr2 += arr2[i];
        }
        if(Arr1 > Arr2)
            return 1;
        else if (Arr1 < Arr2)
            return -1;
        else
            return 0;
    }
}
