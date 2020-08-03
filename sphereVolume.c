#include <stdio.h>
#define PI (22.0f / 7.0f)

int main(void)
{
    int radiusInMeters = 10;

    float volume = (4.0f / 3.0f) * PI * radiusInMeters * radiusInMeters * radiusInMeters;

    printf("the valume of %d meters radius sphere is %f\n", radiusInMeters, volume);
}