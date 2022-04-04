#include <iostream>
#include <set>
using namespace std;

set<string> newSet;
void permute(string a, int l, int r){
    if (l == r) newSet.insert(a);
    else{
        for (int i = l; i <= r; i++){
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}

int getLongestCommon_substr(string s1, string s2){
    int ans = 0;

    for (int i = 0; i < s1.length(); i++) {
        for (int j = 0; j < s2.length(); j++) {
            int k = 0;
            while ((i + k) < s1.length() && (j + k) < s2.length() && s1[i + k] == s2[j + k]) k = k + 1;
            ans = max(ans, k);
       }
    }
    return ans;
}
 
int main(){
	string s;
	cin >> s;
	int n = s.size();
    permute(s, 0, n-1);
    int min = n;
    for(set<string> :: iterator i=newSet.begin(); i!=newSet.end(); i++)
        for(set<string> :: iterator j=next(i); j!=newSet.end(); j++){
            int subSeq = getLongestCommon_substr(*i, *j);
            if (subSeq < min) min = subSeq;
        }
    cout << min;
    return 0;
}