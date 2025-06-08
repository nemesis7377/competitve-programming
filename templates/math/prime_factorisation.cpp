vector<int> primefactorisation(int n){
    vector<int>p;
    while(n%2==0){
        p.push_back(2);
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            p.push_back(i);
            n/=i;
        }
    }
    if(n>2){
        p.push_back(n);
    }
    return p;
}