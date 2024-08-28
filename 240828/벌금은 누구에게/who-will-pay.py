n, m, k = map(int, input().split())

arr = [
    0 for _ in range(n)
]

for _ in range(m):
    st = int(input())
    arr[st - 1] += 1

    for i in range(n):
        if arr[i] >= k:
            print(i + 1)
            return

print(-1)