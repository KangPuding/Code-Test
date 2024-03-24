#include <string>
#include <vector>

using namespace std;

string Tobinary (int num, int n){
    string binary;
    
    for(int i = 0; i < n; i++){
        if(num % 2 == 1){
            binary = "#" + binary;
            num /= 2;
        }
        else{
            binary = " " + binary;
            num /= 2;
        }
    }
    return binary;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0; i < n; i++){
        string binary1 = Tobinary(arr1[i], n);
        string binary2 = Tobinary(arr2[i], n);
        
        string tmp;
        for(int j = 0; j < n; j++){
            if(binary1[j] == '#' || binary2[j] == '#')
                tmp += "#";
            else
                tmp += " ";
        }
        answer.push_back(tmp);
    }
    return answer;
}