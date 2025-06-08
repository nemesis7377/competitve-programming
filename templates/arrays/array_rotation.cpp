vector<int> leftrotation(vector<int>&v,int n){
    vector<int>a(v.size());
    for(int i=n;i<v.size();i++){
    a[i-n]=v[i];
    }
    for(int i=v.size()-n;i<v.size();i++){
    a[i]=v[i-v.size()+n];
    }
    return a;
}

vector<int> rightrotation(vector<int>&v,int n){
    vector<int>a(v.size());
    for(int i=0;i<v.size()-n;i++){
        a[i+n]=v[i];
    }
    for(int i=0;i<n;i++){
        a[i]=v[i+v.size()-n];
    }
    return a;
}