#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    
    for(auto s : delete_list){
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == s)
                arr.erase(arr.begin() + i);
        }
    }
    return arr;
}