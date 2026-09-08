
    # Write your code here
def count(N):
    max_limit=1500
    is_prime=[True]*max_limit
    is_prime[0]=is_prime[1]=False
    for p in range (2,int(max_limit**0.5)):
        if is_prime[p]:
            for i in range(p*p,max_limit,p):
                is_prime[i]=False
    if int(N)<0:
        return 0
    n=len(N)
        
    def dp(idx,sum_val,sum_sq,is_tight):
        if idx==n:
            if is_prime[sum_val] and is_prime[sum_sq]:
                return 1
            return 0
            
        limit= int(N[idx]) if is_tight else 9
             
        res=0
        for digit in range(limit+1):
            res+=dp( 
                idx+1,
                sum_val+digit,
                sum_sq+digit*digit,
                is_tight and (digit==limit)
            )
        return res
    return dp(0,0,0,True)
if __name__=="__main__":
    print(count(str(30))-count(str(20)))