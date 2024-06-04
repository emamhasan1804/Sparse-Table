const int MAXN = 2e5+5;
int st[MAXN][K + 1];
int logg[MAXN+1];
void initLog() { // call this function on the beginning of the code
    logg[1] = 0;
    for(int i=2;i<=MAXN;i++) {
        logg[i]=logg[i/2]+1;
    }
}
int query(int l,int r) { //O(1)
    int j=logg[r-l+1];
    int mx = max(st[l][j],st[r-(1<<j)+1][j]);
    return mx;
}
