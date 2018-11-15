int isSubsetSum(int arr[], int n, int sum,
                int subset[], int count)
{
  int i;
  if(sum == 0) 
{
       printf("\n");
       for(i =0; i < count; i++)
           printf("%d  ",  subset[i]);
           return true;
       }
  if(n < 0  && sum != 0)  
  return false;
 
  subset[count] =  arr[n];
  return
         isSubsetSum(arr, n-1, sum-arr[n], subset, count + 1)  
         || isSubsetSum(arr, n-1, sum, subset, count );
}
 
/* Driver program */
int main(){
  
  int set[] = {1,3,5,4,6};
  int n  =  sizeof(set)/sizeof(set[0]);
  int K = 10;
  int subset[n]
  printf("Is there subset with Sum = %d : %s",
          K, isSubsetSum(set, n, subset, K) ? "Yes": "No");
  return 0;
}
