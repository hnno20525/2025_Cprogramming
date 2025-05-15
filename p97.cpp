#include<stdio.h>
#include<math.h>
int n;
struct point {
    int x;
    int y;
    float dist;
};
int main(){
    point p[10];
    int mini;
    int mindist=999;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d",&p[i].x,&p[i].y);
        p[i].dist=(float)sqrt(p[i].x*p[i].x+p[i].y*p[i].y);
        if(p[i].dist<mindist){
            mini=i;
            mindist=p[i].dist;
        }
    }
        printf("%d %d %.3f\n",p[mini].x,p[mini].y,p[mini].dist);
}
