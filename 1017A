#include<iostream>
#include<vector>
#include<algorithm>
 
int main(){
    int n=0;
    std::cin>>n;
    std::vector <int> s;
    int b1,b2,b3,b4;
    std::cin>>b1>>b2>>b3>>b4;
    int balt=b1+b2+b3+b4;
    
    for(int i=1;i<n;i++){
        int a1,a2,a3,a4;
        std::cin>>a1>>a2>>a3>>a4;
        int bal=a1+a2+a3+a4;
        s.push_back(bal);
        
    }
    
    std::sort(s.begin(),s.end());
    std::reverse(s.begin(),s.end());
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(balt>=s[i]){
            ans=i+1;
            break;
            
        }
    }if(s.size()==1){
        std::cout<<1;
    }else{
        if(ans==0){
            std::cout<<s.size()+1;
        }
        else{
            std::cout<<ans;
        }
    }
    
}
