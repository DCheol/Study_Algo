#include <string>
#include <vector>
//#include <iostream>

using namespace std;

void lastdays(vector<int> &progresses, vector<int> &speeds){
    for(int i=0; i<progresses.size() ;i++){
        progresses[i] = (100-progresses[i]);
        if(progresses[i]%speeds[i]!=0){
            progresses[i]/=speeds[i];
            progresses[i]++;
        }
        else{
            progresses[i]/=speeds[i];
        }
    }
}
/*
void PrintDays(vector<int> &progresses){
    cout<<'|';
    for(int i=0; i<progresses.size(); i++){
        cout<<progresses[i]<<" ";
    }cout<<'|'<<endl;
}*/

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    lastdays(progresses, speeds);
    int order= 0;
    int temp = 0;
    int t=0;
    //PrintDays(progresses);
    for(order=0; order<progresses.size(); order++){
        /*order번째 배포 준비*/
        //이미 작업이 끝났을 때
        if(progresses[order]<=0){
            temp+1;
            continue;
        }
        //cout<<order<<endl;
        t=progresses[order];
        //작업이 끝나지 않았을 때, 현재(order)부터 끝까지
        for(int j=order; j<progresses.size(); j++){
            progresses[j] = progresses[j] - t;
        }
        if(order-temp!=0)
            answer.push_back(order-temp);
        temp = order;
        /*
        cout<<"----------"<<endl;
        PrintDays(progresses);
        cout<<"----------"<<endl;
        */
    }
    answer.push_back(order-temp);
    //cout<<order<<" "<<temp<<endl;

    return answer;
}
