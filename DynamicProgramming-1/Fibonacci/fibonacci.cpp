#include<stdio.h>
#include<cstring>
int oneNum;
int zeroNum;
int dp[41];

int Fibonacci(int n){
    if(n<=1) return n;
    
    if(dp[n]!=-1) {
        return dp[n];
    }

    dp[n] = Fibonacci(n-1)+Fibonacci(n-2);
    return dp[n];
}


int main(void){
    memset(dp, -1, sizeof dp);

    int caseNum; scanf("%d", &caseNum);
    
    while(caseNum--){
        
        oneNum=0;
        zeroNum=0;
        int inputNum; scanf("%d", &inputNum);
        Fibonacci(inputNum);
        if(inputNum==0) printf("%d %d\n",1,0);
        else if(inputNum==1) printf("%d %d\n",0,1);
        else printf("%d %d\n",dp[inputNum-1],dp[inputNum]);
    }

}