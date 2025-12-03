int climbstair(int src, int dest){
    //base case
    if(n==0)
     return 0;
    if(n==1)
     return 1;
    // rec relation
    int ans= climbstair(n-1)+climbstair(n-2);
    return ans;

}
