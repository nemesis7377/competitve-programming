int mex(vector<int>&a){
    int n=a.size();
    set<int>b;
    for(int i=0;i<n;i++){
        b.insert(a[i]);
    }
    int mexx=n;
    for(int i=0;i<n;i++){
        if(b.count(i)==0){
            mexx=i;break;
        }
    }
    return mexx;
}