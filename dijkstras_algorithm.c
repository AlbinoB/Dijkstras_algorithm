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

}
