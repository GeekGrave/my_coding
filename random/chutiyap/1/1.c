#include<stdio.h>
#include<math.h>

struct vertices{
    float x;
    float y;
};

float dist(struct vertices v1, struct vertices v2){
    float d = sqrt((v2.y-v1.y)*(v2.y-v1.y) + (v2.x-v1.x)*(v2.x-v1.x));
    return d;
}

float area(struct vertices v1,struct vertices v2,struct vertices v3){
    float a = dist(v1,v2);
    float b = dist(v2,v3);
    float c = dist(v1,v3);

    float s = (a+b+c)/2;
    float ar = sqrt(s*(s-a)*(s-b)*(s-c));
    return ceil(ar);
}

int find(struct vertices v,struct vertices v1,struct vertices v2,struct vertices v3){
    float ar1 = area(v,v1,v2);
    float ar2 = area(v,v1,v3);
    float ar3 = area(v,v2,v3);

    float ar = area(v1,v2,v3);
    if(ar1+ar2+ar3==ar){
        return 1;
    }
    return 0;

}

int main(){
    struct vertices v1,v2,v3,v;
    
    scanf("%f",&v1.x);
    scanf("%f",&v1.y);
    scanf("%f",&v2.x);
    scanf("%f",&v2.y);
    scanf("%f",&v3.x);
    scanf("%f",&v3.y);
    scanf("%f",&v.x);
    scanf("%f",&v.y);

    printf("%d",find(v,v1,v2,v3));
}