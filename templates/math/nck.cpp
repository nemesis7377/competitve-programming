vector<int>inv(MX+1),fci(MX+1),fc(MX+1);
void inverses(){
    inv[1]=1 ;
    for(int i=2;i<=MX;i++){
        inv[i]=mod-mod/i*inv[mod%i]%mod ;
    }
}
void factorials(){
    fc[0]=fc[1]=1 ;
    for(int i=2;i<=MX;i++){
        fc[i]=fc[i-1]*i%mod ;
    }
}
void inversefactorials(){
    inverses();
    factorials();
    fci[1]=fci[0]=1 ;
    for(int i=2;i<=MX;i++){
        fci[i]=fci[i-1]*inv[i]%mod;
    }
}
int nck(int n,int k){
    if(n<0){
        return 0;
    }
    if(k<0){
        return 0;
    }
    if(n<k){
        return 0;
    }
    else{
        return fc[n]*fci[k]%mod*fci[n-k]%mod;
    }
}