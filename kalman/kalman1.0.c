#include <stdio.h>


float kalman(float sensorx, float alfa ,float dt){
    static float ain = 0;
    static float vin = 0;
    static float xin = 0;
    float prediction_x = xin + vin*dt + ain*dt*dt/2;
    float xf = prediction_x + alfa*(sensorx - prediction_x);
    float vf = (xf-xin)/dt;
    ain = (vf-vin)/dt;
    xin = xf;
    vin = vf;
    return xf;
}
