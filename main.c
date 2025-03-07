#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf(" enter number of animals\n");
    scanf("%d",&n);

    char domestic_animals[n];
    printf(" enter domestic animals\n%S",domestic_animals);
    for(int i=0; i<n;i++){
        scanf("%s",&domestic_animals);
    }

    int x;
    printf(" enter number of wild animals\n");
    scanf("%d",&x);

    char wild_animals[x];
    printf(" enter wild animals\n%S",wild_animals);
    for(int i=0; i<n;i++){
        scanf("%s",&wild_animals);
    }
    int z=n+x;
    printf("the value of n plus x is %d\n",z);




    return 0;
}
