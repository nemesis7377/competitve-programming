int factorialexponent(int n,int prime){
    int ans=0;
    int p=prime;
    while(n/p){
        ans+=(n/p);
        p*=prime;
    }
    return ans;
}