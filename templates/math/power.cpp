int power(int n,int k){
    int r=1 ;
    for(int i=k;i>0;i/=2,n*=n){
        if(i%2==1){
            r*=n ;
        }    
    }    
    return r ;
}