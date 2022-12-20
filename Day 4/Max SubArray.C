int maxSubArray(int* num, int n){
    int sum=0;
    int maxsum=num[0];
    for(int i=0; i<n; i++){
        sum += num[i];
        if(sum>maxsum)
            maxsum=sum;
        if(sum<0)
            sum=0;
        

        
    }
    return maxsum;

}
