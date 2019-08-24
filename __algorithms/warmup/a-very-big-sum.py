def list_ip():
    return list(map(int,input().strip().split(' ')))
input()
print(sum(list_ip()))
