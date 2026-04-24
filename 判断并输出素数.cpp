#include<stdio.h>

int is(int n){
    int ret=1,i;
    if(n==1||(n%2==0&&n!=2))
       return 0;
    if(n==2){
        return 1;
    }
    for(i=3;i*i<=n;i+=2){
        if(n%i==0){
            ret=0;
            break;
        }
    }
    return ret;
}


int main( )
{  
	int a,b;
    scanf("%d %d",&a,&b);
    int count=0;
    for(int i=a;i<=b;i++){
        if(is(i)){
            printf("%d ",i);
            count ++;
            if(count%10==0){
                printf("\n");
            }
        }
    }
    return 0;
}
