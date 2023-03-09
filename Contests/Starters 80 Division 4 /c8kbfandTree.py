def fn(adj, node, vis, dis):
    vis[node] = 1
    
    for x in adj[node]:
        if not vis[x[0]]:
            dis[x[0]] = dis[node] ^ x[1]
            fn(adj, x[0], vis, dis)

def solve():
    n = int(input())
    adj = [[] for _ in range(n)]
    
    for i in range(n-1):
        u, v, w = map(int, input().split())
        u -= 1
        v -= 1
        adj[u].append([v, w])
        adj[v].append([u, w])
    
    dist = [0] * n
    vis = [0] * n
    
    dist[0] = 0
    fn(adj, 0, vis, dist)
    
    mp = {}
    
    for i in range(n):
        if dist[i] not in mp:
            mp[dist[i]] = []
        mp[dist[i]].append(i)
        
    for x in mp.items():
        if len(x[1]) > 1:
            f = x[1][0]
            s = x[1][1]
            
            if f == 0 and s == n-1:
                print(1, 2, 2, n-1)
            elif f == 0:
                print(1, n-1, s+1, n-1)
            elif s == n-1:
                print(1, f+1, 1, s+1)
            else:
                print(1, f+1, 1, s+1)
                
            return
        
    mp2 = {}
    
    for i in range(n):
        for j in range(i+1, n):
            if dist[i] ^ dist[j] not in mp2:
                mp2[dist[i] ^ dist[j]] = []
            mp2[dist[i] ^ dist[j]].append([i, j])
            
            if len(mp2[dist[i] ^ dist[j]]) > 1:
                print(mp2[dist[i] ^ dist[j]][0][0]+1, mp2[dist[i] ^ dist[j]][0][1]+1, mp2[dist[i] ^ dist[j]][1][0]+1, mp2[dist[i] ^ dist[j]][1][1]+1)
                return
            
    print(-1)

t = int(input())

for _ in range(t):
    solve()
