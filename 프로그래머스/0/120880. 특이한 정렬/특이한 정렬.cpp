#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    int answer;
    
     for(int i = 0; i < numlist.size(); i++) {
         for(int j = i; j < numlist.size(); j++){
             if(abs(n - numlist[i]) > abs(n - numlist[j])){
                 answer = numlist[i];
                 numlist[i] = numlist[j];
                 numlist[j] = answer;
             }
             if(abs(n - numlist[i]) == abs(n - numlist[j]) && numlist[i] < numlist[j]){
                 answer = numlist[j];
                 numlist[j] = numlist[i];
                 numlist[i] = answer;
             }
         }
     }
    return numlist;
}