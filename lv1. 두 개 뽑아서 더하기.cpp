#include <string>
#include <vector>

using namespace std;

void Check_Vec(vector<int> &answer, int temp){
    for(int i=0; i<answer.size();i++){
        if(answer[i]==temp) return;
        else if (answer[i]>=temp){
            answer.insert(answer.begin()+i, temp);
            return;
        }
    }
    answer.push_back(temp);
    return;
}

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int temp;
    for(int i=0; i+1<numbers.size(); i++){
        for(int j=i+1; j<numbers.size(); j++){
            temp = numbers[i] + numbers[j];
            Check_Vec(answer, temp);
        }
    }

    return answer;
}
