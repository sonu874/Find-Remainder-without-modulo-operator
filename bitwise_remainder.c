#include <stdio.h>
#include <stdlib.h>

int rem(unsigned int a,unsigned int b){
    int ans;
    a=abs(a);
    b=abs(b);
    for(int i=31;i>-1;i=i-1){
        
        if((b<<i)<=a){
            
            
            a=a-(b<<i);
            
            
            //ans+=1<<i;
        }
    }
    //return(a & ~((~(int)0 << b)));
    
    return a;
}


int main() {
    unsigned int a=76,b=10;
    int x=0;
    x=rem(a,b);
    printf("\n%d",x);
    
    return 0;
}
