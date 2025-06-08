string condense(string b){
    string t="";
    for(int i=0;i<b.size();i++){
        if(b[i]!=b[i+1]){
            t+=b[i];
        }
    }
    return t;
}