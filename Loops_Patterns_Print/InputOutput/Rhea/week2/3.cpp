#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& a, int x) {
        int l=0;
        int r=a.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(x==a[mid]){
                return mid;
            }
            //left sorted
            if(a[l]<a[mid]){
                if(x<a[mid]&&x>=a[l]){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(a[mid]<=a[r]){
                    if(x>a[mid]&&x<=a[r]){
                        l=mid+1;
                    }
                    else{
                        r=mid-1;
                    }
                }
            }
        }
        return -1;
    }

int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        a.push_back(e);
    }
    int x;
    cin>>x;
    int ans=search(a,x);
    cout<<ans;


}



