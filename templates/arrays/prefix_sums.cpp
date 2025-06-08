vector<int> prefixsums(vector<int>&a){
    vector<int>p(a.size()+1);
    int count=0;
    for(int i=0;i<a.size()+1;i++){
        p[i]=count;
        count+=a[i];
    }
    return p;
}