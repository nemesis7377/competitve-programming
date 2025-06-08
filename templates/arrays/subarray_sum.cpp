int maxsubarraysum(vector<int>&a){
    int n=a.size();
    int ans = a[0], sum = 0;
    for (int r = 0; r < n; ++r) {
        sum += a[r];
        ans = max(ans, sum);
        sum = max(sum, 0LL);
    }
    return ans;
}

int minsubarraysum(vector<int>&a){
    int n=a.size();
    int ans = a[0], sum = 0;
    for (int r = 0; r < n; ++r) {
        a[r]=-a[r];
        sum += a[r];
        ans = max(ans, sum);
        sum = max(sum, 0LL);
        a[r]=-a[r];
    }
    return -ans;
}