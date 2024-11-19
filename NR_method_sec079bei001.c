#include <stdio.h>
#include <math.h>

float myFn(float x){
    return (pow(x,4)-x-10);
}
float myFnDer(float x){
	return (4*x*x*x-1);
}
int main() {

    float a,c,root,e;
    int i=1;
    printf("enter tolerable error:");
    scanf("%f",&e);
    printf("enter initial guesses \n");
   	scanf("%f",&a) ;
    
    
    printf("SN\t\t a  \t\t  f(a)  \t\t  f'(a)  \t\t  c\t\t \n");
    c = (a-(myFn(a)/myFnDer(a)));
   do{
   		a=c;
       c = (a-(myFn(a)/myFnDer(a)));
       printf("%d\t\t  %f  \t\t  %f  \t\t  %f  \t\t  %f   \n",i,a,myFn(a),myFnDer(a),c);
       i++;
	
   }while(fabs(c-a)>e);
   
   root = c;
   printf("The required root is: %f \n",root);
    printf("Aayush Dhakal");
    
    return 0;
}


