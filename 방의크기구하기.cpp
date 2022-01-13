#include <iostream>
#include <stdio.h>
#include <algorithm>

#define MAX_SIZE 101

using namespace std;

int m;
int n;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int group_id;
int groups[MAX_SIZE * MAX_SIZE];

int map[MAX_SIZE][MAX_SIZE];
bool visited[MAX_SIZE][MAX_SIZE];

void dfs_recursion(int x, int y) {
    visited[x][y] = true;
    groups[group_id]++;

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(0 <= nx && nx < n && 0 <= ny && ny < m){
            if(map[nx][ny] == 1 && visited[nx][ny] == false){
                dfs_recursion(nx, ny);
            }
        }
    }
}

int main () {
    int testCase;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        group_id = 0;
        fill_n(groups, MAX_SIZE * MAX_SIZE, 0);
        cin >> m >> n;


        for (int i = 0; i < n; i++) {
            string temp;
            cin >> temp;
            for (int j = 0; j < m; j++) {
                visited[i][j] = false;
                if (temp[j] == '+') map[i][j] = 0;
                else if (temp[j] == '.') map[i][j] = 1;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (map[i][j] == 1 && visited[i][j] == false) {

                    group_id++;

                    dfs_recursion(i, j);
                }
            }
        }

        sort(groups + 1, groups + group_id + 1);

        cout << group_id << endl;
        for (int i = group_id; i >= 1; i--) {
            cout << groups[i] << " ";
            //groups[i] = 0;
        }
        cout << endl;
    }
}