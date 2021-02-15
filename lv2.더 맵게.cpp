#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0; i<scoville.size(); i++){
        pq.push(scoville[i]);
    }

    int temp=0;

    while(pq.size()>=2){
        temp=0;
        if(pq.top()>=K){
            return answer;
        }

        temp+=pq.top();
        pq.pop();
        temp+=2*pq.top();
        pq.pop();
        //cout<<"temp:"<<temp<<endl;
        pq.push(temp);
        answer++;
        //cout<<pq.top()<<endl;
    }
    if(pq.top()>K) return answer;

    return -1;
}
