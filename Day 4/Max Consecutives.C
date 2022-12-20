int findMaxConsecutiveOnes(int* num, int n){
    int count=0; 
    int m=0;
    for(int i=0; i<n; i++){
        if(num[i]==1){
            count++;
        }else{
            count=0;
        }
        if(count>m){
            m=count;
        }
    }
    return m;
}
