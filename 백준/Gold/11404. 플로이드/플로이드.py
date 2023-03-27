import sys
input = sys.stdin.readline
INF = int(1e9)
# n : 정점의 개수 , m : 간선의 개수
n=int(input())
m=int(input())
# 2차원 그래프를 만들고 모두 무한으로 초기화
graph = [[INF] * (n+1) for _ in range(n+1)]


# 각 간선에 대한 정보를 입력받아 , 그 값으로 초기화
for _ in range(m):
    start, end, cost = map(int, input().split())
    graph[start][end] = min(cost, graph[start][end])
    

# 플로이드 워셜 알고리즘
for k in range(1,n+1):
    for i in range(1,n+1):
        for j in range(1,n+1):
            if i == j: #자기 자신으로 오는 경우는 없다고 했으므로
                graph[i][j] = 0 
            else: #경로 거치는 것 or 직접 가는 것 or 이전 경로들
                graph[i][j] = min(graph[i][j],
                                     graph[i][k] + graph[k][j])

#출력
for row in graph[1:]:
    for col in row[1:]:
        if col == INF:
            print(0, end = " ")
        else:
            print(col, end = " ")
    print()