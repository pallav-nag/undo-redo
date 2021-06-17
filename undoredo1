#include<stdio.h>
int top=-1,n=5,i=-1;
char stack[5][100];

void write(){
        top++;
        i=top;
        printf("\nEnter text:");
        scanf(" %s \n",&stack[top]);
}
void redo(){
    if(top==i)
        printf("\nRedo not possible\n\n");
    else
        printf("%s\n\n",stack[++i]);
}
void undo(){
    if(i==0)
        printf("\nUndo not possible\n\n");
    else
        printf("%s\n\n",stack[--i]);
}
void read(){
    for(i=-1;i<5;i++){
        printf("%s \n",stack[i]);
    }
}
int main()
{
   int x=0;
   while(x!=5){
        printf("Select Operation\n");
        printf("1:WRITE\n2:UNDO\n3:REDO\n4:Exit\n");
        scanf("%d",&x);
        if(x==1)
            write();
        else if(x==2)
            undo();
        else if(x==3)
            redo();
        else if(x==4)
            read();
    }
   if (x==5)
    printf("Exited");
   return 0;
}
