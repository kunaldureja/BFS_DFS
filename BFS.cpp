#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void BFS(int A[][8],int start,int col){
    int vis[col] = {0};
    queue<int>q1;  //BFS is a kind of level order of a tree.
    cout<<start<<" ";
    q1.push(start);
    vis[start] = 1;
    while(!q1.empty()){
        int u = q1.front();
        q1.pop();
        for(int i=1;i<=col;i++){
            if(A[u][i]==1 && vis[i]==0){
                cout<<i<<" ";
                q1.push(i);
                vis[i] = 1;
            }
        }
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