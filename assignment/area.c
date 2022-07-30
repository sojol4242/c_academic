#include <stdio.h>
#include <math.h>
void main()
{

    int x1, y1, x2, y2, x3, y3, x4, y4;
    int ab,ad,bc,cd,area,perimeter;
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    
    ab=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    ad=sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    bc=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    cd=sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
 
    if (ab==cd && bc==ad)
    {
        area=ab*ad;
        perimeter=2*(ab+ad);
        printf("area of rectangle is= %d\nperimeter of rectangle is %d\n",area,perimeter);
    }
    else{
        printf("This is not a rectangle");
    }
}
