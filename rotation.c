#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int rotate;  
    scanf("%d",&rotate);
    int d=0;
    while(d<rotate){
        int i =0;
        int temp;
           temp =a[0];
        while(i<n-1){
          
            a[i] = a[i+1];
            i++;
        }
        a[n-1] = temp;
         d++;
    }
    for(int i = 0 ; i<n ; i++){
        printf(" %d",a[i]);
    }
    
    
}
