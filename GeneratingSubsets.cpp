#include<iostream>
#include<vector>

void search(std::vector<int> ans, int k, int n){
// if kth element not greater to size of all elements print subarray
  if(k==n+1){
    for(int i=0;i<ans.size();i++){
      std::cout<<ans[i]<<" ";
    }
    std::cout<<'\n';
    ans.resize(0);
  }
  else{
  // add element k
    ans.push_back(k);
  // search next element
    search(ans, k+1, n);
  // after all pop last element and search next
    ans.pop_back();
    search(ans, k+1, n);  
  }

}

int main(){
  std::vector<int> ans;
  search(ans, 1, 3);
  
  return 0;
}
