def merge_sort(arr):
    
    if len(arr)>1:
        
        left_arr=arr[:len(arr)//2]
        right_arr=arr[len(arr)//2:]
        
        #recursion
        merge_sort(left_arr)
        merge_sort(right_arr)
        
        #merge
        
        i=0#left arr index
        j=0#right arr index
        k=0#merged arr index
        
        while i<len(left_arr) and j<len(right_arr):#when index for both halfs is lower than lenghts
            
            if left_arr[i]<right_arr[j]:#comparing values
                arr[k]=left_arr[i]
                i+=1
              
            else:
                arr[k]=right_arr[j]
                j+=1
                
            k+=1
            
        while i<len(left_arr):#for situations when we are done with right half , but not with left
            arr[k]=left_arr[i]
            i+=1
            k+=1                
            
        while j<len(right_arr):#vice versa
            arr[k]=right_arr[j]
            j+=1
            k+=1   
            
if __name__=='main':
    arr=list(map(int,input().split()))
    merge_sort(arr)#inplace sort
    print(arr)