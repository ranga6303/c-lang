#include <stdio.h>

int main() {
    float num[1000];
int count=1,l=0,i,j,iter=0,order[1000];
char sym[1000],samp[6]="/*+-=";


    // Input loop
    for (int i = 0; i < 1000; i++) {
        scanf("%f", &num[i]); // Store the integer in an array

        // Clear the input buffer to handle newline character
        while (getchar() != '\n');
       {scanf("%c", &sym[i]);}
       
        count++;// Store the character in an array
        if(sym[i]=='=')
        break;
    }




for(i=0;i<5;i++)
{
for(j=0;j<count;j++)
{
if(sym[j]==samp[i])
l++;
order[l]=j;
;
}


for(i=0;i<5;i++)
{
for(j=0;j<=l;j++)
{
if(sym[order[j]]==samp[i])
{
switch(sym[order[i]])
{
case '/':
div(num,order[j],order,iter,l);
break;
case '*':
multi(num,order[iter],order,iter,l);
break;
case '+':
add(num,order[iter],order,iter,l);
break;
case '-':
sub(num,order[j],order,iter,l);
break;
case '=':
printf("%f",num[0]);
break;
}
}
}
}}
return 0;
}

int div(float v[],int x,int o[],int iter,int len)
{int i,c=len;
v[x]=v[x]/v[x+1];
for(i=0;i<len;i++)
{
v[x+1]=v[x+2];
}
--c;
for(i=iter;i<len;i++)
{
if(o[i+1]>x)
--o[i];
}
++iter;
len=c;
}

int multi(float v[],int x,int o[],int iter,int len)
{int i,c=len;
v[x]=v[x]*v[x+1];
for(i=0;i<len;i++)
{
v[x+1]=v[x+2];
}
--c;
for(i=iter;i<len;i++)
{
if(o[i+1]>x)
--o[i];
}
++iter;
len=c;
}

int add(float v[],int x,int o[],int iter,int len)
{int i,c=len;
printf("%d",x);
v[x]=v[x]+v[x+1];
for(i=x;i+2<len;i++)
{
v[x+1]=v[x+2];
}
--c;
for(i=iter;i<len;i++)
{
if(o[i+1]>x)
--o[i];
}
++iter;
len=c;
}

int sub(float v[],int x,int o[],int iter,int len)
{int i,c=len;
v[x]=v[x]-v[x+1];
for(i=0;i<len;i++)
{
v[x+1]=v[x+2];
}
--c;
for(i=iter;i<len;i++)
{
if(o[i+1]>x)
--o[i];
}
++iter;
len=c;
}
    
