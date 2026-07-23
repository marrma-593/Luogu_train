#include <bits/stdc++.h>

using namespace std;
long long m[23][23];
int dx[] = {0, 2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};
int main()
{
    int x, y;
    int hx, hy;
    cin >> x >> y;
    cin >> hx >> hy;
    for (int i = 0; i <= y; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            m[j][i] = -1;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        int mx = hx + dx[i];
        int my = hy + dy[i];
        if (mx >= 0 && mx <= x && my >= 0 && my <= y)
            m[mx][my] = 0;
    }
    if (m[0][0] == 0)
    {
        cout << 0;
        return 0;
    }
    m[0][0] = 1;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= y; j++)
        {
            if (m[i][j] == -1)
            {
                if (i != 0)
                    m[i][j] += m[i - 1][j];
                if (j != 0)
                    m[i][j] += m[i][j - 1];
                m[i][j] += 1;
            }
        }
    }
    cout << m[x][y] << endl;
}