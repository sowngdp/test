#include <stdio.h>
#include <iostream>
using namespace std;
struct point
{
    int x;
    int y;
};

struct vector3chieu
{
    int x;
    int y;
    int z;
};
int main()
{

    point a, b, c;
    printf("nhap xa, ya: \n");
    cin >> a.x >> a.y;
    printf("nhap xb, yb: \n");
    cin >> b.x >> b.y;
    printf("nhap xc, yc: \n");
    cin >> c.x >> c.y;

    vector3chieu ba, ca, baxca;
    ba.x = b.x - a.x;
    ba.y = b.y - a.y;
    ba.z = 0;
    ca.x = c.x - a.x;
    ca.y = c.y - a.y;
    ca.z = 0;

    // baxca.x = ba.y*ca.z-ba.z*ca.y;
    // baxca.y = ba.z*ca.x-ba.x*ca.z;
    baxca.z = ba.x*ca.y-ba.y*ca.x;
    printf("\n(%d, %d, %d)", baxca.x,baxca.y,baxca.z);
    if(baxca.z >0){
        printf("\nleft");
    }else if (baxca.z < 0)
    {
        printf("\nright");
    }else
    {
        printf("\ntowards");
    }
    
    return 0;
}
