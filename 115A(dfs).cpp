#include < bits / stdc++.h > 
#define ll long long
# define ld long double
# define pb push_back
# define mp make_pair
# define ff first
# define ss second
using namespace std;

vector < bool > visited;
vector < vector < int > > graph;

int maxi = 0;
int cc = 0;
void dfs(int v, int c) {

    visited[v] = true;
    for (auto it = graph[v].begin(); it != graph[v].end(); it++) {
        if (!visited[*it])
            dfs(*it, c + 1);
    }
    cc = max(cc, c);
}

int main() {

    int n, m;
    cin >> m;
    n = 2002;
    graph = vector < vector < int > > (n + 2);
    map < string, int > ma;
    for (int i = 1; i <= m; i++) {
        int b;
        cin >> b;
        if (b == -1)
            b++;
        graph[b].push_back(i);

    }

    visited = vector < bool > (m + 1, 0);

    dfs(0, 0);

    cout << (cc);

    return 0;
}
