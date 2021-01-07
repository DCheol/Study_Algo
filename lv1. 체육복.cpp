//#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int* arr = new int[n];
    for(int i=0; i<n;i++)
        arr[i]=1;
    for(int i=0; i<lost.size(); i++){
        arr[lost[i]-1]--;
    }
    for(int i=0; i<reserve.size(); i++){
        arr[reserve[i]-1]++;
    }
   /*
    cout<<'['<<arr[0];
    for(int i=1; i<n;i++)
        cout<<','<<arr[i];
    cout<<']'<<endl;
    */
    for(int i=0; i<n; i++){
        if(arr[i]==2){
            if(i!=0 && arr[i-1]==0){
               arr[i]=1; arr[i-1]=1;
            }
            else if(i!=n-1 && arr[i+1]==0){
                arr[i]=1; arr[i+1]=1;
            }
        }
    }

   /*
    cout<<'['<<arr[0];
    for(int i=1; i<n;i++)
        cout<<','<<arr[i];
    cout<<']'<<endl;
    */
    for(int i=0; i<n;i++)
        if(arr[i]!=0)
            answer++;

    return answer;
}
