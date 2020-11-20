#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <malloc.h>

#define MAX 1000001

using namespace std;

void BeforCommit(int num){
    int *arr;
    arr=(int*)malloc(sizeof(int)*num);
    for(int i=2;i<=num;++i){
        for(int j=2;i*j<=num;++j){
            arr[i*j]=1;
        }
    }
}

void Erathosthenes(int num){
    int *arr;
    arr=(int*)malloc(sizeof(int)*num);
    int i=2;

    for(i=2;i<=num;++i) arr[i]=i;
    for(i=2;i<=num;++i){
        if(arr[i]==0) continue;
        for(int j=i+i; j<=num; j+=i) arr[j]=0;
    }
}
 
int main(){
    clock_t start,mid,end;

    start=clock();
    BeforCommit(50000);
    mid=clock();
    Erathosthenes(50000);
    end=clock();
    double time1=(double)(mid-start)/CLOCKS_PER_SEC;
    double time2=(double)(end-mid)/CLOCKS_PER_SEC;
    printf("%lf\n%lf",time1,time2);
}
