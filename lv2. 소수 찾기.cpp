//#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> nums;

/*nums는 저장된 숫자들, n은 저장할 숫자*/
void pushNums(int n){
    for(int i=0; i<nums.size(); i++){
        if(nums[i]==n){ //vector안에 있으면
            return;
        }
    }
    nums.push_back(n);
}

/*left는 남은것, temp는 선택된것*/
void DFS(string left, string selected){
    if(selected!="")
        pushNums(stoi(selected));
    if(left.size()==0){
            return;
    }
    for(int i=0; i<left.size(); i++){
        string tleft(left);
        string tselected(selected);
        tselected += tleft[i]; tleft.erase(i,1); //left에서 select로 i번째 요소 전달
        DFS(tleft, tselected);
    }
}
/*소수가 아닌 숫자를 체크*/
void Count(int &num,int &count){
    if(num==2)
        return;
    if(num==0 || num==1){
        count++;
        //cout<<" 소수아님!";
        return;
    }
    for(int i=2; i<sqrt(num)+1; i++){
        if(num%i==0){
            count++;
            //cout<<" i:"<<i<<" 소수아님!";
            return;
        }
    }
}

int solution(string numbers) {
    int answer = 0;

    string temp;
    DFS(numbers, temp);

    for(int i=0; i<nums.size(); i++){
        //cout<<nums[i];
        Count(nums[i], answer);
        //cout<<endl;
    }

    return (nums.size()-answer);
}
