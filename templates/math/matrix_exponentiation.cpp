struct mat{
    vector<vector<int>>a ;
    int N;

    mat(int _N):N(_N){
        a=vector<vector<int>>(N,vector<int>(N)) ;
    }
    
    void ide(){
        for(int i=0;i<N;i++)
            a[i][i]=1  ;
    }
 
    mat operator*(const mat &o) const {
        mat r(N);
        for(int i=0; i<N; ++i)
            for(int k=0; k<N; ++k)
                for(int j=0; j<N; ++j)
                    r.a[i][j]=(r.a[i][j]%M+(a[i][k]%M*o.a[k][j]%M)%M)%M;
        return r;
    }  
};

int main(){
    int n,exp;
    vector<int>init; // initial conditions vector
    T.a = {"companion matrix"}; // formed using the intial recurrence condition
    mat R(n); R.ide();
    for(;exp;T=(T*T),exp/=2){
        if(exp&1){
            R=(R*T);
        }
    }
    // R is the final exponentiated matrix
    int ans=0;
    for(int i=0;i<n;i++){
        ans = (ans+T.mat[0][i]*init[n-1-i]);
    }

}


