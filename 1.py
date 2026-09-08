from collections import Counter
import itertools
def solving(n,k,s):
    count=Counter(s)
    ans=[]
    first_e=s[0]//k
    ans.append(first_e)
    #Tan suat ve khong se xoa

    count[first_e*k]-=1
    if count[first_e*k]==0:
        del count[first_e*k]
    #Loc gia tri nho nhat
    for i in range (1,n):
        if not count:
            break
        smallest_sum=min(count.keys())
        if k==1:
            val=smallest_sum
        else:
            val=smallest_sum-first_e*(k-1)
        ans.append(val)
        arr=[]
        for combo in itertools.combinations_with_replacement(ans,k):
            x=sum(combo)
            arr.append(x)
        count1=Counter(arr)
        for x,freq in count1.items():
            if x in count:
                count[x]-=freq
                if count[x]<=0:
                    del count[x]
        
    return ans
if __name__=='__main__':
        n,k=11,1
        s=[5, 20, 20, 24, 29, 51, 51, 51, 73, 78, 92]
        print(*solving(n,k,s))