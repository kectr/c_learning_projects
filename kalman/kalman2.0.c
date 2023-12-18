#include <stdio.h>
#include <stdlib.h>
#include <time.h>



float kalman(float sensorx, float beta, float alfa ,float dt){
    static float ain = 0;
    static float vin = 0;
    static float xin = 0;
    float prediction_x = xin + vin*dt + ain*dt*dt/2;
    float prediction_v = vin + ain*dt;
    float xf = prediction_x + alfa*(sensorx - prediction_x);
    float vf = prediction_v + beta*(sensorx-prediction_x)/dt;
    ain = (vf-vin)/dt;
    xin = xf;
    vin = (xf-xin)/dt;
    return xf;
}

int main(){
    float array1[10] = {2.69,2.67,2.45,2.15,2.54,2.08,2.23,2.74,2.77,2.73};
    float array1_5[10] = {-0.20,-0.26,+0.02,-0.02,-0.18,+0.10,-0.16,+0.11,-0.20,-0.05};
    float array2[10];
    float array3[1000];

    

    for(int i = 0; i<10;i++){
        array2[i] = array1[i]+array1_5[i];
    }

    for(int i = 0;i<1000;i++){
        array3[i] = kalman(array2[i%10],0.3,0.4,1);
    }


    for(int i = 0;i<1000;i++){
        printf("%f - %f - %f - %f\n",array1[i%10],array2[i%10],array3[i],array3[i]-array1[i%10]);

    }

    
    
    return 0;


}
