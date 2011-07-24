#include <stdio.h>
int main(int argc, const char *argv[])
{
    int n,z,i;
    z=1;
    n=4;
    for(i=1;i<n+1;i++)
    z*=i;
    printf("n!=%d\n",z);
    return 0;
}
