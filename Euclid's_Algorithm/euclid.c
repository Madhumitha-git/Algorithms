#include <stdio.h>
int gcd(int m,int n){
    if(n==0)
    return m;
    else
    gcd(n,m%n);
}

int main() {
    int m,n;
    printf("Enter two numbers\n");
    scanf("%d %d",&m,&n);
    int value=gcd(m,n);
    printf("%d",value);
    
    return 0;
}
