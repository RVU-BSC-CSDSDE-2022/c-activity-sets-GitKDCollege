#include<stdio.h>
int main(void){
    struct triangle{
        float base;
        float altitude;
        float area;
    };
    int n;
    printf("Enter the number of Triangles\n");
    scanf("%d",&n);
    struct triangle tgl[n];
    int i;
    int store;
    float small=0;
    for (i=0;i<n;i++){
        printf("Enter the Base of Triangle-%d\n",i+1);
        scanf("%f",&tgl[i].base);
        printf("Enter the Altitude of Triangle-%d\n",i+1);
        scanf("%f",&tgl[i].altitude);
        tgl[i].area=(0.5)*(tgl[i].base)*(tgl[i].altitude);
        if (small==0){
            small=tgl[i].area;
            store=i;
        }
        else if (tgl[i].area<small){
            small=tgl[i].area;
            store=i;
        }
    }
    printf("The Smallest Triangle out of Triangles with Base and Altitude ");
    for (i=0;i<n;i++){
        printf("(%.1f,%.1f)",tgl[i].base,tgl[i].altitude);
        if (i<n-1){
            printf(" , ");
        }
    }
    printf(" is the Triangle-%d with base:%.1f and Altitude:%.1f, having an Area:%.1f \n",store+1,tgl[store].base,tgl[store].altitude,small);
    // printf("The Smallest Triangle out of entered Triangles has Area: %f, which is Triangle-%d\n",small,store);
    return 0;
}