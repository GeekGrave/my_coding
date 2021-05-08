#include<stdio.h>
#include<stdlib.h>

int n=5;
struct stack {
    int top;
    int a[5];
};

typedef struct stack st;

void createEmptyStack(st *s) {
  s->top = -1;
}

int empty(st *s){
    if(s->top==-1)
        return 1;
    else    
        return 0;
}

void push(st *s,int x){
    s->top++;
    s->a[s->top]=x;
}

void pop(st *s){
    s->top--;
}

int top(st *s){
    return s->a[s->top];
}

void sort(int a[],int n){
    st *s1 = (st *)malloc(sizeof(st));
    createEmptyStack(s1);
    st *s2 = (st *)malloc(sizeof(st));
    createEmptyStack(s2);
    for(int i=0;i<n;i++){
        push(s1,a[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            while(!empty(s1)){
                int x;
                x=top(s1);
                pop(s1);

                if(empty(s2)){
                    push(s2,x);
                }

                else{
                    if(top(s2) > x){
                        int t;
                        t=top(s2);
                        pop(s2);
                        push(s2,x);
                        push(s2,t);
                    }

                    else{
                        push(s2,x);
                    }
                }
            }
            a[n-1-i] = top(s2);
            pop(s2);
        }

        else{
            while(!empty(s2)){ 
                int x = top(s2);
                pop(s2);
                  
                if (empty(s1)){ 
                    push(s1,x); 
                }
                  
                else{ 
                    
                    if (top(s1) > x){ 
                        int t = top(s1);
                        pop(s1); 
                        push(s1,x); 
                        push(s1,t); 
                    } 
                    
                    else{
                        push(s1,x); 
                    }
                } 
            } 
              
            a[n-1-i] = top(s1);
            pop(s1);     
        }
    }

    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    sort(a,5);
    return 0;
}
