 int maxSubarraySum(int arr[], int n){

        int sum=arr[0];
        int maxi=arr[0];
        
        for(int i=1;i<n;i++)
        {
            sum=max(sum+arr[i],arr[i]);
            maxi=max(sum,maxi);
        }
        
        return maxi;
        
    }