#include <string>
#include <vector>

using namespace std;

bool isSpeakable(const string& word) {
    string temp = word;
    string prev = "";

    vector<string> validSounds = {"aya", "ye", "woo", "ma"};

    while (!temp.empty()) 
    {
        bool matched = false;

        for (const string& sound : validSounds) 
        {
            if (temp.find(sound) == 0 && sound != prev) 
            {
                prev = sound;
                temp = temp.substr(sound.length());
                matched = true;
            }
        }
        if (!matched) 
        {
            return false;
        }
    }

    return true;
}

int solution(vector<string> babbling) {
    int answer = 0;

    for (const string& word : babbling) 
    {
        if (isSpeakable(word)) 
        {
            answer++;
        }
    }

    return answer;
}
