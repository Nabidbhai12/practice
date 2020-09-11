#include<stdio.h>
struct emp
{
    char name[100];
    int val;
};
int main()
{
    struct emp nabid[3];
    struct emp abid[3];
    FILE *fp;
    fp=fopen("123.bin","rb");
    for(int a=0;a<2;a++)
    {
    //scanf("%s",nabid[a].name);
   // scanf("%d",&nabid[a].val);
    }
  //  fwrite(&nabid,sizeof(struct emp),2,fp);
     fread(&abid,sizeof(struct emp),2,fp);

    for(int b=0;b<2;b++)
   {
    printf("%s %d \n",abid[b].name,abid[b].val);
   }
    fclose(fp);
}
