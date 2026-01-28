#include <stdio.h>

int main(){
    int arr[] = {2, 4, 6, 8, 10 ,12};
    int n = 6 ;
    int key = 10 ; 
     
    int  count  = 0 ;
    int  start = 0 ;
    int  end = n-1 ;

    while (start <=end ){
        int mid  = start + end /2 ; 
        count++ ;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]< key){

            start = mid + 1;

        }
        else{
            end = mid - 1 ;
        }




    }

    
}