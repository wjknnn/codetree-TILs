# Declaring variables and input:
row_num = int(input())


# This is a function that prints a specific string across n lines.
def print_num(n):
    cnt = 1
    for _ in range(n):
        for _ in range(n):
            print(cnt, end=" ")
            cnt += 1
            if cnt == 10:
                cnt = 1
        print()

print_num(row_num)