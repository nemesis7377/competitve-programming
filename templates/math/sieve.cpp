vector<int> sieve(int n){
    vector<int>s;
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++){
        if (prime[p]==true){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
    for (int p=2;p<=n;p++){
        if (prime[p]){
            s.push_back(p);
        }
    }
    return s;
}