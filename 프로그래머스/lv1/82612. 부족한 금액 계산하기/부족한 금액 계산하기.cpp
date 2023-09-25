using namespace std;

long long solution(int price, int money, int count) {

    long long answer = 0;
    long long result = 0;
    
    for (int i = 1; i <= count; i++){
       
        result += price * i;
    }
    
    // if (result < money)
    //         answer = 0;
    //     else
    //         answer = result - money;
    
    answer = (result < money) ? answer = 0 :  answer = result - money;
    
    return answer;
}