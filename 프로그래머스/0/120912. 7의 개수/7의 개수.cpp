#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int i = 0; i < array.size(); i++){
        while(1){
            if(array[i] == 0)
                break;
            if(array[i] % 10 == 7)
                answer++;
            
            array[i] /= 10;
        }
    }
    return answer;
}


// 틀림 
// #include <string>
// #include <vector>

// using namespace std;

// int solution(vector<int> array) {
//     int answer = 0;
//     vector<int> a;
//     vector<int> b;
    
//     for(int i = 0; i < array.size(); i++){
//         a.push_back(array[i] % 10);
//         b.push_back(array[i] / 10);
        
//         if (a[i] == 7 && b[i] == 7){
//             answer+=2;
//         }
//         else if (a[i] == 7 || b[i] == 7){
//             answer++;
//         }
//         else
//             answer = 0;
//     }
//     return answer;
// }