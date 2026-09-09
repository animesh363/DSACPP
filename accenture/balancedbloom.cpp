// Accenture Coading 20 Dec 
/*
Balanced Bloom:

For every element A[i]:

1. Count elements SMALLER than A[i] on its LEFT.
2. Count elements GREATER than A[i] on its RIGHT.
3. Both counts must be equal.
4. Count how many times A[i] appears in the whole array.
5. Frequency must be < 3.
6. If both conditions are satisfied, add A[i] to answer.
7. Check EVERY element and return the total sum.

LEFT  → j < i  && A[j] < A[i]
RIGHT → j > i  && A[j] > A[i]

Valid element:
leftCount == rightCount && frequency < 3
*/

#include <bits/stdc++.h>
using namespace std;

int Blanced_Bloom(int A[],int n){
    int ans=0;
    bool found = false;

    int originalSum=0;
    for(int i=0;i<n;i++){
        originalSum += A[i];
    }

    for(int i=0;i<n;i++){
        int leftCnt=0;
        int rightCnt=0;

        for(int j=0;j<i;j++){
            if(A[j]<A[i]) leftCnt++;
        }
        for(int j=i+1;j<n;j++){
            if(A[j]>A[i]) rightCnt++;
        }

        if(leftCnt-rightCnt==0){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(A[j]==A[i]) cnt++;
            }

            if(cnt<3){
                ans += A[i];;
                found = true;
            } 
        }
    }
    if(!found) return originalSum;
    return ans;
}

int main(){
    int n;cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    int ans=Blanced_Bloom(A,n);
    cout<<ans;
}