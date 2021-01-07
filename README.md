### Study_Algo
* [두 개 뽑아서 더하기](https://programmers.co.kr/learn/courses/30/lessons/68644)(21.01.07)
> 처음 git 써보는데 마크다운이 되게 신기하다. 잘 꾸며진 블로그가 이런걸 이용하나 보네
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
