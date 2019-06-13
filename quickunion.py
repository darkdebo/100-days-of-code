id=[i for i in range(10)]
def root(i):
    while i!=id[i]:
        print(i)
        i=id[i]
    return i    

def union(p,q):
    i=root(p)
    j=root(q)
    id[i]=j

def check(p,q):
    return root(p)==root(q)
union(2,3)
print(root(2))