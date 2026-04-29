n, m, k = map(int, input().split())

arr = [
    0 for _ in range(n)
]

is_escape = False

for _ in range(m):
    st = int(input())
    arr[st - 1] += 1

    for i in range(n):
        if arr[i] >= k:
            if n > 50:
                print("hi")
            print(i + 1)
            is_escape = True
        if is_escape:
            break
    if is_escape:
        break

if not is_escape:
    print(-1)