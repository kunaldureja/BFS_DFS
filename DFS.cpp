#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void DFS(int A[][8],int start,int col){
    int vis[col] = {0};
    stack<int>s1;
    cout<<start<<" ";
    vis[start] = 1;
    s1.push(start);
    while(!s1.empty()){
        int count = 0;
        int u = s1.top();
        //cout<<u<<endl;
        for(int i=1;i<=col;i++){
            if(A[u][i]==1 && vis[i]==0){
                cout<<i<<" ";
                vis[i]=1;
                s1.push(i);
                count++;
                break;
            } 
        }
        if(count==0)
        s1.pop();   
    }
}

int main(){
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
    DFS(A,1,8);              
}