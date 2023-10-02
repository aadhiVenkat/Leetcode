​we have to find the target given matrix. if present true else false
lets' use BinarySearch becuse in question told matrix have asscending order. so we can use binary search
 rows(m) is lenth of the matrix.
 columns(n) is length of the (0,1) size
 lets consider low is 0 and high is (m*n)/2  means consider (4*3)/2
 iterate until low is lessthan equal to high
 get middle low+high /2
 get middle_value matrix[mid/n][mid%n]
 check mid_value is equal to target then return true
 else check mid_value is lessthan target then assign mid-1 to high
 else assign mid+1 to low
 out of loop without returning then value is not found we have to return false


 TimeComplexity(O(logn))
