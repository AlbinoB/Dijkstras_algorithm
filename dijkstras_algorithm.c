#include<stdio.h>
main()
{
int a[100][100],nodes,i,j,b[100],c[100],z,visitedarr[100],trueck=0,arrayindex,smallest,x,sum=0,p=0;
char n[100];
printf("\n enter the number of nodes:");//enter the total num of vertex's
scanf("%d",&nodes);
printf("\n enter the names of nodes:");//enter the all the vertex's in the form of a string
scanf("%s",&n);
for( i=0;i<nodes;i++)
 for( j=i;j<nodes;j++)
  {
    if(i==j)
      {
          a[i][j]=0;
      }else
      {
          printf(" distance from %c to %c:",n[i],n[j]);//accept weight from each vertex
          scanf("%d",&a[i][j]);
          a[j][i]=a[i][j];

      }
  }
printf("     ");
for(i=0;i<nodes;i++)
 {
     printf("%c    ",n[i]);
     b[i]=0;
     visitedarr[i]=0;
 }
printf("\n");
for( i=0;i<nodes;i++)//display the table
{
  printf("%c   ",n[i]);
 for( j=0;j<nodes;j++)
 {
          printf("%+d   ",a[i][j]);

 }
printf("\n");
}


z=0;
for( i=0;i<nodes;)
 {
 for(j=0 ;j<nodes;j++)
 {
   if(a[i][j]!=-1 &&  i!=j && visitedarr[j]!=1)
   {   sum=b[i]+a[i][j];
       if(b[j]>sum)
       {
           b[j]=sum;
       }else
       {
           if(b[j]==0)
             b[j]=sum;
       }
       c[z++]=j;
       trueck=1;
   }
 }
   if(trueck==1&&z>1)
   {
       arrayindex=c[0];
       smallest=b[c[0]];
    for (x=1;x<z;x++)
   {
       if(b[c[x]]<=smallest)
       {
           smallest=b[c[x]];
           arrayindex=c[x];
       }
   }
   visitedarr[i]=1;
   if(i<arrayindex)
   {i=arrayindex;}else
   {
       i=i+1;
   }
   trueck=0;
   z=0;
   }else
   {
       if((trueck==1)&&z==1)
       {
           arrayindex=c[0];
           visitedarr[i]=1;
           i=arrayindex;
           z=0;
           trueck=0;
           }else{
           if(i==nodes-1)
              {
                  i++;
                  trueck=0;
              }
       }
   }
   p++;
   if(p>nodes)
   {
     break;
   }
 }
 for( j=0;j<nodes;j++)
  {
   printf("\n Minimum distance  %c  to %c is :%d",n[0],n[j],b[j]);
  }
  printf("\n");

}
