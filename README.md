### Study_Algo
* [소수 찾기](https://programmers.co.kr/learn/courses/30/lessons/42839)(21.01.10)

1. stoi(string s) 이용할때 s가 null일때 coredump가 일어났음
_________________
* [위장](https://programmers.co.kr/learn/courses/30/lessons/42578)(21.01.09)

1. (a+1)(b+1)(c+1)...-1
2. map처럼 다른 컨테이너 사용법 익히기
_________________
* [다리를 지나는 트럭](https://programmers.co.kr/learn/courses/30/lessons/42583)(21.01.09)

1. deque를 많이 쓰는 풀이가 보였다. 복잡하진 않고 노가다로 새로 deque만들어서 하나씩 받는듯
2. 1초마다 생각해줬지만, 효율적이게하려면 다리에 오르는 자동차가 없을 경우 time에 받은것 만큼 건너 뛰어도 좋을 듯 하다.
_____________________
* [체육복](https://programmers.co.kr/learn/courses/30/lessons/42862#)(21.01.08)

입력부분에서 잘 안되던 코드
```c++
int answer = n;
    int* arr = new int[n];
    for(int i=0; i<n; i++){
        arr[i]=1;
        if(!lost.empty() && lost.front()==i+1){
            arr[i]--;
            lost.erase(lost.begin());
        }
        if(!reserve.empty() && reserve.front()==i+1){
            arr[i]++;
            reserve.erase(reserve.begin());
        }
    }
   ```
_________________
* [두 개 뽑아서 더하기](https://programmers.co.kr/learn/courses/30/lessons/68644)(21.01.07)
> 처음 git 써보는데 마크다운이 되게 신기하다. 잘 꾸며진 블로그가 이런걸 이용하나 보네
