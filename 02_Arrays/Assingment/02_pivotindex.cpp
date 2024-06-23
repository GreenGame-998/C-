/*
 Find the pivot index: the sum of the elements left to the pivot is equal to the right ones.
Method 1:
1. traverse through the array
2. make two functions: the first one will cal. the sum of the left elements and other one will do the same for the right
3. when these two become same we return the index.

Method 2:
we can first find the left and right sum intially for (let say i=0),
then as we move our i to the right just add arr[i] to the left sum and minus arr[i+1], for the right sum.
*/

