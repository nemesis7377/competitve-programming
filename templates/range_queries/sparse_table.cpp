// NOTE: queries are zero indexed 
// TODO: update the opeartion according to the problem. Default is min.
// vector<int>(18,1e18) here 18 is log2(n) where n is the max size of original array 
// and 1e18(x) is identity for that operation which means op(a,x)=a
// So it's 1e18 in min and 0 in gcd,max and 1 for lcm
struct sparsetable{
    vector<vector<int>>Arr ;
    sparsetable(vector<int>_Arr){
        int n=_Arr.size() ;
        Arr=vector<vector<int>>(n+1,vector<int>(18,1e18));
        for(int i=0;i<n;i++){
        Arr[i][0]=_Arr[i] ;
        }
        for(int j=1;j<18;j++){
            for(int i=0;i+(1<<j)<=n;i++){
                Arr[i][j]=min(Arr[i][j-1],Arr[i+(1<<j-1)][j-1]);
            }
        }
    }
    int query(int l,int r){
        int j=__lg(r-l+1) ;
        int ans=min(Arr[l][j],Arr[r-(1LL<<j)+1][j]) ;
        return ans  ;
    }
};