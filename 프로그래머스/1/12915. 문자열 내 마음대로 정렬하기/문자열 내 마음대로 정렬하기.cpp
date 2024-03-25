#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int i;

// cmp : 기본적으로 오름차순 지원, 오름차순 : < / 내림차순 : >
// sort 할떄 맨 마지막에 넣어주면 끝
bool cmp (string a, string b){
    if(a[i] == b[i])
        return a < b;
    else
        return a[i] < b[i];
}

vector<string> solution(vector<string> strings, int n) {
    i = n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
    
}