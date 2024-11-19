#include <stdio.h>
#include <math.h>

float myFn(float x){
    return (pow(x,3)-5*x-sin(x)-6);
}
int main() {

    float a,b,c,root,e;
    int i=1;
    printf("enter tolerable error:");
    scanf("%f",&e);
    printf("enter initial guesses \n");
    scanf("%f%f",&a,&b) ;
  
    printf("SN  \t\t  a  \t\t  b  \t\t  f(a)  \t\t  f(b)  \t\t  c  \t\t \n");
      
   do{

       c = b-((b-a)*myFn(b))/(myFn(b)-myFn(a));
       printf("%d  \t\t  %f  \t\t  %f  \t\t  %f  \t\t  %f  \t\t  %f  \n",i,a,b,myFn(a),myFn(b),c);
          		a=b;
       b=c;
       i++;

   }while(fabs(b-a)>e);
   
   root = c;
   printf("The required root is: %f \n",root);
    printf("Aayush Dhakal");
    
    return 0;
}


