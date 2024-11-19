#include <stdio.h>
#include <math.h>

float myFn(float x){
    return (x*x*x-5*x-sin(x)-6);
}
int main() {

    float a,b,c,root,e;
    int i=1;
    printf("enter tolerable error:");
    scanf("%f",&e);
    printf("enter initial guesses \n");
   
    do{
        scanf("%f%f",&a,&b) ;
    }while(myFn(a)*myFn(b)>0);
    
    printf("SN\t\ta\t\tb\t\tf(a)\t\tf(b)\t\tc\t\tf(c) \n");
    
   do{
       c = (a+b)/2;
       printf("%d\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f \n",i,a,b,myFn(a),myFn(b),c,myFn(c));
       
       if(myFn(a)*myFn(b)<0){
           b=c;
       }
       else{
           a=c;
       }
       i++;
   }while(fabs(a-b)>e);
   
   root = c;
   printf("The required root is: %f \n",root);
    printf("Aayush Dhakal");
    
    return 0;
}


