vector<int> suffixsums(vector<int>&a){
    vector<int>s(a.size()+1);
    int count=0;
    for(int i=a.size()-1;i>=-1;i--){
        s[a.size()-1-i]=count;
        count+=a[i];
    }
    return s;
}