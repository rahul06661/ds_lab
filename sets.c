
#include<stdio.h>
#include<stdbool.h>

bool check(int arr[],int size,int ele)
{
    for(int i=0;i<size;i++)
    {

        if(arr[i]==ele)
        {
            return false;
        }
    }
    return true;
}

bool check1(int arr[],int size,int ele)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {

        if(arr[i]==ele)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        return false;
    }
    else
    {
        return true;
    }

}


void diff_set2_set1(int set1[],int set2[],int size1,int size2)
    {
    int set6[20],s2=0;
    for(int i=0;i<size2;i++)
    {
        if (check1(set1,size1,set2[i]))
        {
            set6[s2]=set2[i];
            s2++;
        }
    }
    printf("\n set2-set1:");
    for(int i=0;i<s2;i++)
    {
        printf("\t%d",set6[i]);
    }
    if (s2==0)
    {
        printf("Null set");
    }
    }

void diff_set1_set2(int set1[],int set2[],int size1,int size2)
{
    int set5[20],sl=0;
    for(int i=0;i<size1;i++)
    {
        if (check1(set2,size2,set1[i]))
        {
            set5[sl]=set1[i];
            sl++;
        }
    }
    printf("\n set1-set2 :");
        for(int i=0;i<sl;i++)
    {
        printf("\t%d",set5[i]);
    }
    if (sl==0)
    {
        printf("Null set");
    }
}

bool chk(int s[],int i,int ele)
{
    for(int j=0;j<i;j++)
    {
        if(s[j]==ele)
        {
            printf("item is present");
            return false;
        }
        else{
            return true;
        }
    }
}


void main()
{
    int set1[10],set2[10],set3[20],size1,size2,size3;
    printf("\n Enter size of first set1 ");
    scanf("%d",&size1);
    printf("\enter set1 elements");

    for(int i=0;i<size1;i++)
    {
        scanf("%d",&set1[i]);
    }

    printf("\n Enter size of first set2 ");
    scanf("%d",&size2);

    printf("\enter set2 elements");

    for(int i=0;i<size2;i++)
    {
        scanf("%d",&set2[i]);
    }

    size3=size1+size2;
    int new_s=size1;
    for(int i=0;i<size1;i++)
    {

        set3[i]=set1[i];
    }
    for(int i=size1,j=0;j<size2;i++,j++)
    {
        if(check(set3,i,set2[j]))
        {
            set3[new_s]=set2[j];
            new_s=new_s+1;

        }
    }
    printf("\n union is :");



    for(int i=0;i<new_s;i++)
    {
       printf("\t%d",set3[i]);
    }
    int sz=0,set4[20];
    for(int i=0;i<size1;i++)
    {

        for(int j=0;j<size2;j++)
        {
            if(set1[i]==set2[j])
            {
                set4[sz]=set1[i];
                sz=sz+1;
            }
        }
    }


        printf("\n intersection is :");
        for(int i=0;i<sz;i++)
        {
            printf("%d\t",set4[i]);
        }

    diff_set1_set2(set1,set2,size1,size2);

    diff_set2_set1(set1,set2,size1,size2);






}
