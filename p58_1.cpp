#include<stdio.h>
#include<math.h>
int main(){
    double x1,y1,r1,x2,y2,r2,d=0;
    
    scanf("%lf %lf %lf",&x1,&y1,&r1);
    scanf("%lf %lf %lf",&x2,&y2,&r2);
    d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    if(d<r1+r2)
        printf("overlapped\n");
    else
        printf("not overlapped\n");
}
