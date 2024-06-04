const int K=25;
const int MAXN = 2e5+5;
int st[MAXN][K + 1];
void build_sparse_table(vector<int>&v) { //O(nlogn)
    int n = v.size();
    for(int i=0;i<n;i++) {
        st[i][0] = v[i];
    }
    for(int j=1;j<=K;j++) {
        for(int i=0;i+(1<<j)<=n;i++) {
            st[i][j] = max(st[i][j-1],st[i+(1<<(j-1))][j-1]);
        }
    }
}
