#include <bits/stdc++.h>

using namespace std;

int V;
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
void floydWarshall(int **graph, int s, int d)
{
    int dist[V][V], i, j, k;

    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
        {
            dist[i][j] = graph[i][j];
        }

    // for (int ii = 0; ii < V; ii++)
    // {
    //     for (int jj = 0; jj < V; jj++)
    //     {
    //         cout << dist[ii][jj] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                if (dist[i][j] == 0)
                {
                    dist[i][j] = max(dist[i][k], dist[k][j]);
                }
                else
                {
                    int a = max(dist[i][k], dist[k][j]);
                    int b = dist[i][j];
                    
                    dist[i][j] = min(a, b);
                }
            }
        }
    }

    // for (int ii = 0; ii < V; ii++)
    // {
    //     for (int jj = 0; jj < V; jj++)
    //     {
    //         cout << dist[ii][jj] << " ";
    //     }
    //     cout << endl;
    // }

    // cout << dist[s][d] << endl;
    int max = 0;
    for (int x = 0; x < V; x++)
        for (int y = 0; y < V; y++)
        {
            if (max < dist[x][y])
                max = dist[x][y];
        }
    cout << max << endl;
}

int main()
{

    int n, m;
    cin >> n >> m;
    V = n;

    // khoi tao graph[][]
    int **graph = new int *[V];
    for (int i = 0; i < V; i++)
        graph[i] = new int[V];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            graph[i][j] = 0;
        }
    }

    while (m--)
    {
        int i, j, k;
        cin >> i >> j >> k;
        graph[i - 1][j - 1] = k;
        graph[j - 1][i - 1] = k;
    }

    // Print the solution
    floydWarshall(graph, 1, n);

    // giai phong graph[][]
    for (int i = 0; i < n; i++)
        delete[] graph[i];
    delete[] graph;

    return 0;
}