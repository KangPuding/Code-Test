#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    
    int result = 0;
    // 오름차순 정렬
    sort(array.begin(), array.end(), less<int>());
    
    // 배열은 0부터 시작하기 때문에 2로 나눈 값이 중앙에 위치한 인덱스가 됩니다.
    result = array[array.size() / 2];
    
    return result;
    
}