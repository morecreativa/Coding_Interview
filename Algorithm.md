# Part 2 Algorithm

## DP(Dynamic Programming)
1) 복잡한 문제를 간단한 여러개의 하위 문제(sub-problem)으로 나누어 푸는 방법을 말한다.
2) DP에는 두가지의 구현 방식이 존재한다.
* Top-down: 여러개의 하위 문제로 나눴을 시에 하위 문제를 결합하여 최종적으로 최적해를 구한다.
```
function(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    
    if(dp[n]!=-1): return dp[n];
    else : return dp[n]=dp[n-1]+dp[n-1];
}
```

* bottom-up: 하위 문제들을 통해 상위 문제의 최적해를 구해낸다.
```
function(int n){
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;++i){
        f[i]=f[i-2]+f[i-1];
    }
    return f[n];
}
```
3) 모든 답을 만들어보고 그 중 최적해의 점수를 반환하는 완전탐색 알고리즘을 설계한다.
4) 부분문제로 나누어 본다.
5) 재귀 호출의 입력 이전의 선택에 관련된 정보가 있다면 꼭 필요한 것만 남기고 줄인다.
6) 메모이제이션을 적용한다.

</br>

## Greedy(탐욕법)
1) 모든 선택지를 골라보고 그 중 가장 좋은 것을 반환하는 방법은 Greedy가 아님
2) Divide & Conquer + DP가 1)에 속함
3) 각 단계마다 최적해를 선택하여 결과를 반환하는 방법
4) 항상 각 단계에서 우리가 선택한 해를 포함하는 최적해가 존재하는가?
5) 각 단계에서 항상 최적의 선택만을 했을 때, 전체의 최적해를 구할 수 있는가?

</br>

## Sorting Algorithm
1) Bubble sort: 인접한 인자끼리 서로 비교하면서
2) Selection Sort: 가장 최소값을 다른 배열에 놓고 계속 비교하면서 오름차순 배열을 만들어가는 정렬법
3) Merge sort: Divide & Conquer. 더 이상 나누어 지지 않을 때 까지 partition을 진행
4) Heap Sort: Binary Heap 자료구조를 활용한 Sorting 방법. 
* 정렬의 대상인 데이터들을 힙에 넣었다가 꺼내는 원리로 Sorting을 하게 되는 방법
* 기존의 배열을 heapify를 거쳐 꺼내는 원리로 정렬하는 방법
5) Quick Sort: Divide & Conquer 방법을 사용하지만, Divide 과정에서 pivot을 사용함. pivot으로 설정된 값보다 작은 값이 위치하고, 우측은 큰 값이 위치하도록 partition된다. 
* 최악의 경우에는 O(N^2)인데 왜 그렇게 되지?
* 그렇다면 Balanced Partition은 언제 가능하지?
