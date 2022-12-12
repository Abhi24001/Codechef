#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    int tn = 0, tm = 0, tapp = 0;
    while(t--){
        int n, m; cin >> n >> m;
        tn += n; tm += m;
        int rank[n + 1]; 
        int prank; 
        for(int i = 1; i <= n; i++){
            cin >> prank;
            rank[i] = prank; 
        }
      
        
        int mark[m + 1];
        int pmark;
        for(int i = 1; i <= m; i++){
            cin >> pmark;
            mark[pmark] = i; 
        }
        
        
        vector<int> app[m + 1]; bool inc[m + 1]; memset(inc, false, sizeof(inc));
        for(int i = 1; i <= m; i++){
            app[i].clear();
            int k; cin >> k;
            tapp += k;
            int id;
            for(int j = 1; j <= k; j++){
                cin >> id;
                app[i].push_back(id);
            }
            sort(app[i].begin(), app[i].end(), [&rank](int &a, int &b){return rank[a] < rank[b];});
        }
 
        int ans[m + 1]; memset(ans, 0, sizeof(ans));
        for(int i = 1; i <= m; i++){
            vector<int> papp = app[mark[i]];
            for(int x : papp){
                if(!inc[x]){
                    ans[mark[i]] = x;
                    inc[x] = true;
                    break;
                }
            }
        }
        cout << ans[1] << endl;
    }
}  
