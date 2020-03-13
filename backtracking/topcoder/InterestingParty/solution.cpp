#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class InterestingParty {
    public: 
        int bestInvitation(vector <string> first, vector <string> second) {
            int i, j;
            int ans = 0;

            for(i = 0 ; i < first.size() ; i++) {
                int f = 0;
                int s = 0;
                
                for(j = 0 ; j < first.size() ; j++) {
                    if(first[i] == first[j]) f++;
                    if(first[i] == second[j]) f++;
                    if(second[i] == first[j]) s++;
                    if(second[i] == second[j]) s++;
                }

                ans = max(f, ans);
                ans = max(s, ans);
            }

            return ans;
        }
};