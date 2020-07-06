# **Kadane's Algorithm**

## Maximum SubArray

**Maximum SubArray In Given Array**


```cpp
int kadane(arr){

    maxSum = currentSum = arr[0];

    for (int i = 1; i < n; i++){
        currentSum = max(arr[i] , currentSum+arr[i]);
        if (currentSum > maxSum){
            maxSum = currentSum;
        }     
    }

    return maxSum;
    
}
```

