# Declare variables and take input:
row_num, col_num = tuple(map(int, input().split()))


# Print a rectangle of size n * m.
def print_rect(n, m):
    for _ in range(n):
        print("1" * m)


print_rect(row_num, col_num)