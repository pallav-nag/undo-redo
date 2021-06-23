#include<stdio.h>
int top=-1,n=5,i=-1;
char stack[5][100];

void write()
{
    top++;
    i=top;
    printf("\nEnter text:");
    scanf(" %s \n",&stack[top]);
    for(int k=0;k<i+1;k++)
    {
        printf("%s\n\n",stack[k]);
    }
}
void redo()
{
    if(i==0)
        printf("\nRedo not possible\n\n");
    else
    {
        for(int k=0;k<=i+1;k++)
        {  
        printf("%s\n\n",stack[k]);
        }
    }
}
void undo()
{
    if(i==0)
        printf("\nUndo not possible\n\n");
    else
    {
        for(int k=0;k<=i-1;k++)
        {      
        printf("%s\n\n",stack[k]);
        }
    }
}
int main()
{
   int x=0;
   while(x!=4)
   {
        printf("Select Operation\n");
        printf("1:WRITE\n2:UNDO\n3:REDO\n4:Exit\n");
        scanf("%d",&x);
        if(x==1)
            write();
        else if(x==2)
            undo();
        else if(x==3)
            redo();
    }
        if (x==4)
            printf("Exited");
        return 0;
}
