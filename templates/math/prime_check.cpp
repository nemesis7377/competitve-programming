vector<bool>OK(MX+1,1);
void primecheck(){
    OK[0]=OK[1]=0 ;
    for(int i=2;i<=MX;i++){
        if(OK[i]){
            for(int j=2*i;j<=MX;j+=i){
                OK[j]=0 ;
            }
        }
    }
}