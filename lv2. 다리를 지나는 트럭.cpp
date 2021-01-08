//#include<iostream>
#include <string>
#include <vector>

using namespace std;
/*üũ�� print�Լ�
void PrintTrucks(int answer, int n1, int n2, vector<int> &trucks){
    cout<<answer<<"��\t"<<"[ ";
    for(int i=0; i<n1; i++){
        cout<<trucks[i]<<" ";
    }cout<<"| ";
    for(int i=n1; i<n2; i++){
        cout<<trucks[i]<<" ";
    }cout<<"| ";
    for(int i=n2; i<trucks.size(); i++){
        cout<<trucks[i]<<" ";
    }cout<<"]"<<endl;
}*/

int Sum(int n1, int n2, vector<int> trucks){
    int temp=0;
    for(int i=n1; i<n2; i++){
        temp+=trucks[i];
    }
    return temp;
}

int solution(int length, int weight, vector<int> trucks) {
    int answer = 0;
    int n1 = 0, n2 = 0;
    int* time = new int[trucks.size()];
    //cout<<trucks.size()<<endl;
    //PrintTrucks(answer,n1,n2,trucks);
    /* 0~(n1-1):����, n1~(n2-1):�ٸ�, n2~(size()-1):���*/
    while(n1!=trucks.size()){
        answer++;
        if(time[n1]==answer){//�ٸ�Ʈ���� �������;� �Ҷ�
            n1++;
        }
        if(n2<trucks.size()){//���Ʈ�� ����
            if(Sum(n1,n2,trucks)+trucks[n2]<=weight){//���Ʈ���� ���� �� ������
                time[n2]=answer+length;
                n2++;
            }
        }
        //PrintTrucks(answer,n1,n2,trucks);
    }

    return answer;
}
