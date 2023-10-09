#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    
    int t_R = 0;
    int max_L = 0;
    
    for(int j =0; j < sides.size(); j++){
        t_R += sides[j];
    }
    
    for(int i =0; i < sides.size(); i++){
        if(sides[i] > max_L){
            max_L = sides[i];
        }
    }

    if(t_R - max_L  > max_L)
        return 1;
    else if (t_R - max_L  == max_L || t_R - max_L < max_L)
        return 2;
}

// sort(sides.begin(), sides.end(), greater<int>());
//  return (sides[2] < sides[0]+sides[1])?1:2;