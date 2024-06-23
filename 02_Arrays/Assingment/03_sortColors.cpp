/*
we are given an arrray which contains 0s,1s & 2s and we are supposed to place them in the ascending format.

Method 1:
we count the numbers of 0,1 nd 2.
then place them inside the array.    --O(n) time complexity and O(1) space complexity.

Method 2:
use two pointers approach (s and e), and traverse the array if the arr[i]=0 swap(arr[i],arr[s]) and s++ and so on (e-- for 2)
stop when i<=e.
*/