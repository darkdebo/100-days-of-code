id=[i for i in range(10)]
def check(p,q):
    if id[p]==id[q]:
        return True
    return False

def union(p,q):
    p1=id[p]
    q2=id[q]
    for i in range(len(id)):
        if id[i]==p1:
            id[i]=q2

print(union(2,7)) 
union(2,3) 
print(check(2,7))
print(check(3,7))          