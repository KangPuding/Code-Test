#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int count = 0;
    for(int i = 0; i < array.size(); i++){
        while(1){
            if(array[i] == 0)
                break;
            
            else if (array[i] % 10 == 7)
                count++;
            
            array[i] = array[i] / 10;
        }
    }
    return count;
}