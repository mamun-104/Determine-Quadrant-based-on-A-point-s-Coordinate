#include<stdio.h>
#include<math.h>

/// Determine Quadrant based on A point's Coordinate

int main()
{
    double x1,y1;
    scanf("%lf%lf",&x1,&y1);
    if(x1>0 && y1>0)
    {
        printf("First Quadrant\n");
    }
    else if(x1<0 && y1>0)
    {
        printf("Second Quadrant\n");
    }
    else if(x1<0 && y1<0)
    {
        printf("Third Quadrant\n");
    }
    else

    {
        printf("Fourth Quadrant\n");
    }


    return 0;
}




