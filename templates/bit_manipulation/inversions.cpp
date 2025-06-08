int inversions(string s){
    int n=s.size();
    int count=0;
    vector<int>suff(n);
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0'){
            count++;
        }
        suff[i]=count;
    }
    int ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            ans+=suff[i];
        }
    }
    return ans;
}