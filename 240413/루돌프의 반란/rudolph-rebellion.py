'''
P 명의 산타 (1~P)

santa = [] #산타의 좌표


(1) 게임판
- N x N
- (r,c) 1,1 ~ N,N
- M 번의 턴
    - 루돌프 한번 움직이고
    - 산타 1~P 까지 움직임
        - 기절하거나 격자 밖으로 빠져나가 게임에서 탈락하면 못움직임
- 거리는 두 점 사이의 거리 공식

for M 번의 턴 반복문:
    rudolf_move()
    santa_move()

(2) 루돌프의 움직임

- 가장 가까운 산타 향해 1칸 돌진
    - 탈락 안한 산타중에 가까운 산타

- 가까운 산타 두 명이라면 r,c 가 큰 산타 향해서
- 인접 8방향으로 이동 가능

(3) 산타의 움직임
- 상우하좌 우선순위로 움직이기
- 1 부터 P 까지 순서대로
- 탈락한 산타 못움직임
- 루돌프에게 가까워지는 방향으로 1칸 이동
- 다른 산타 있거나 게임판 밖으로 이동 불가
- 움직일 수 없으면 안움직임
- 만약 루돌프와 가까워지는 길이 없다면 안움직임

(4) 충돌
- 산타 루돌프 같은칸인 경우
    - 루돌프가 움직여서 간 경우
        - 산타는 C 만큼의 점수 획득
        - 산타는 루돌프가 이동해온 방향으로 C 칸 만큼 밀림
    - 산타가 움직여서 충돌
        - 산타는 D 만큼의 점수 획듯
        - 산타가 이동한 방향 반대로 D 칸 만큼 밀림
    - 밀려나는 거는 충돌 고려 X
- 밀려난 위치 게임판밖이면 게임 탈락
- 밀려난 위치 산타명 상호작용

(5) 상호작용
- 밀려난 지점에 다른 산타 있으면
    - 밀려온 방향으로 다른 산타를 계속 밀려남
- 마찬가지로 게임판 밖으로 밀려나면 탈락

(6) 기절
현재 k 번 턴이 었다면 k+2 부터 다시 정상상태
다른 산타에 의한 상호작용은 적용됨
루돌프는 기절한 산타한테 갈 수 있음

(7) 게임 종료
M 번의 턴에 걸쳐 다 움직인 다음에 게임 종료
P명의 산타 모두 탈락하면 게임 종료
매턴 이후 아직 탈락하지 않은 산타들에게는 1점씩 추가 부여

각 산타가 얻은 최종 점수

입력 형식
첫 번째 줄에 N, M, P, C, D가 공백을 사이에 두고 주어집니다.
다음 줄에는 루돌프의 초기 위치 (Rr,Rc) 가 주어집니다.
다음 P 개의 줄에 걸쳐서
산타의 번호 Pn과 초기 위치 (Sr,Sc)가 공백을 사이에 두고 주어집니다.

처음 산타와 루돌프의 위치는 겹쳐져 주어지지 않음을 가정해도 좋습니다.
N: 게임판의 크기 (3≤N≤50)
M: 게임 턴 수 (1≤M≤1000)
P: 산타의 수 (1≤P≤30)
C: 루돌프의 힘 (1≤C≤N)
D: 산타의 힘 (1≤D≤N)
Pn: 산타의 번호 (1≤Pn≤P)
 (Rr,Rc): 루돌프의 초기 위치 (1≤Rr,Rc≤N)
(Sr,Sc): 산타의 초기 위치 (1≤Sr,Sc≤N)

'''
import sys,heapq
input = sys.stdin.readline

#루돌프의 이동방향
rudolf_di = [(-1,0),(-1,1),(0,1),(1,1),(1,0),(1,-1),(0,-1),(-1,-1)] # 시계 방향
# 산타의 이동방향
santa_di = [(-1,0),(0,1),(1,0),(0,-1)] # 상우하좌 0,1,2,3
# 산타 밀려날 방향 대각선도 1칸이라 침
# 루돌프가 온 방향이나, 이동한 반대 방향으로
santa_di_reverse = {0:2,1:3,2:0,3:1}

# 산타 밀려나기/ 밀려나는 산타,밀려나는 칸 수,밀려나는 방향
def santa_push(p,dis,dx,dy):
    # 밀려나는 산타 위치 계산
    nx,ny = santa[p][0] + dis*dx , santa[p][1] + dis*dy
    if not (0<=nx<N and 0<=ny < N): # 밖으로 나가면 탈락
        lose[p] = True
        return
    # 밀려난 위치에 산타가 있다면? 상호작용
    santa[p] = [nx,ny]
    for i in range(1,P+1):
        if i == p:
            continue
        if santa[i] == [nx,ny]:
            santa_push(i,1,dx,dy)
            break

# 루돌프 움직이기
def rudolf_move(k):
    global rudolf
    candidate = [] # 가까운 산타들 담을 우선순위 큐
    # 가장 가까운 산타 찾기
    for p in range(1,P+1):
        if lose[p]:
            continue
        # 현재 루돌프와의 거리 계산
        dis = (rudolf[0]-santa[p][0])**2 + (rudolf[1]-santa[p][1])**2
        heapq.heappush(candidate,(dis,(-santa[p][0],-santa[p][1]),p))
    # 가장 가까운 산타 좌표, 산타 번호
    _ , short_santa, santa_number = heapq.heappop(candidate)
    # 돌진 방향 정하기
    go_di = []
    for dx,dy in rudolf_di:
        nx,ny = rudolf[0] + dx, rudolf[1] + dy
        if not(0<= nx < N and 0<= ny < N):
            continue
        dis = (nx-abs(short_santa[0]))**2 + (ny-abs(short_santa[1]))**2
        heapq.heappush(go_di,(dis,([dx,dy],[nx,ny])))
    # 방향 정해짐
    dis,(go, rudolf) = heapq.heappop(go_di)
    # 근데 만약 해당 위치에 산타가 있다면 충돌 발생
    if rudolf[0] == abs(short_santa[0]) and rudolf[1] == abs(short_santa[1]):
        # 루돌프가 움직였으니까
        score[santa_number] += C # 산타는 C 만큼 점수 획득
        faint[santa_number] = k + 2 # 충돌한 산타 기절
        # C 만큼 밀려나기
        santa_push(santa_number,C,go[0],go[1])

# 산타 움직이기
def santa_move(p,k):
    # 루돌프랑 거리 가장 가까워 지는 방향 찾기
    # 루돌프와의 현재 거리
    now_dis = (santa[p][0] - rudolf[0])**2 + (santa[p][1] - rudolf[1])**2
    x,y = santa[p]
    next_santa, go = [],-1
    min_dis = 100000
    for idx, (dx,dy) in enumerate(santa_di):
        nx,ny= x+dx, y + dy
        if not(0<=nx<N and 0<=ny<N):
            continue
        if [nx,ny] in santa.values():
            continue
        # 가까워지는 방향 찾기
        next_dis = (nx - rudolf[0]) ** 2 + (ny - rudolf[1]) ** 2
        if next_dis >= now_dis:
            continue
        if min_dis > next_dis:
            min_dis = next_dis
            next_santa = [nx,ny]
            go = idx


    if next_santa == []:
        return

    santa[p] = next_santa # 이동
    if santa[p] == rudolf: # 루돌프 만나면 충돌 발생
        score[p] += D
        faint[p] = k + 2
        # D 만큼 반대 방향으로 밀려나기
        santa_push(p, D, santa_di[santa_di_reverse[go]][0], santa_di[santa_di_reverse[go]][1])


N, M, P, C, D = map(int, input().split())
board = [[0]*N for _ in range(N)]
rr,rc = list(map(int, input().split()))
rudolf = [rr-1,rc-1]
santa = {}
score = [0]*(P+1)
faint = [0] * (P+1)
lose = [False] * (P+1)

for _ in range(P):
    i, sr,sc = map(int, input().split())
    santa[i] = [sr-1,sc-1]

for k in range(M):
    if lose == [True] * (P+1): # 만약 다 탈락했으면 즉시 게임 종료
        break
    # 루돌프 움직이기
    rudolf_move(k)
    # 산타 움직이기
    for i in range(1,P+1):
        if lose[i]:
            continue
        if faint[i] != 0: # 기절 상태인데
            if faint[i] == k: # 기절 끝나는 차례이면
                faint[i] = 0 # 기절 초기화
            else: # 아직 차례 아니면
                continue
        santa_move(i,k)

    # 살아남으면 점수 추가 부여
    for i in range(1,P+1):
        if lose[i]:
            continue
        score[i] += 1

score.pop(0)
print(*score)