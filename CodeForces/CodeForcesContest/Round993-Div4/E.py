def solve():
    t = int(input())
    for _ in range(t):
        k, l1, r1, l2, r2 = map(int, input().split())
        count = 0
        for x in range(l1, r1 + 1):
            y = x
            while y <= r2:
                if l2 <= y:
                    count += 1
                y *= k  # เพิ่มค่า y ตาม k^n
        print(count)
solve()