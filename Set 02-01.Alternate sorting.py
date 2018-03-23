#!/usr/bin/python
''' Alternate sorting: Given an array of integers, rearrange the array in such a way that the first element is first maximum and second element is first minimum.
    Eg.) Input  : {1, 2, 3, 4, 5, 6, 7}
         Output : {7, 1, 6, 2, 5, 3, 4}'''
arr=[] 
def main():
     arr_size=input("array size : ")
     print "elements : "
     for i in range(arr_size):
         arr.append(input())
     for i in range(len(arr)-1):
         if i%2==0:
             for j in range(i,len(arr)):
                 if arr[i]<arr[j]:
                     arr[i],arr[j]=arr[j],arr[i]
         else:
             for j in range(i,len(arr)):
                 if arr[i]>arr[j]:
                     arr[i],arr[j]=arr[j],arr[i]
     print arr  
     
if __name__=="__main__":
        main()
