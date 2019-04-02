#include <stdio.h>

int main (){
    unsigned long int A , B ,i;
    unsigned long long int c=0;
    scanf("%lld %lld",&A,&B);
    for(i=A;i<=B;i++){
        c+=i;
    }
    printf("%lld\n",c);
}