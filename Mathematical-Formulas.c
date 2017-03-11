#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float midpoint_rule(float upper_bound, float lower_bound, float n){
    float i, j;
    float result_1, result, Theresult;
    float interval=(upper_bound-lower_bound)/n;
    result_1=0;
    j=lower_bound+interval/2;
    for(i=j;i<upper_bound;i=i+interval){
            result=0;
            result= pow(M_E,i*i);
            result_1+=result;
    }
    Theresult=(interval*result_1);
    return Theresult;
}
float trapezoid_rule(float upper_bound, float lower_bound, float n){
    float i;
    float result_2, result_1, result, Theresult;
    float interval=((float)upper_bound-lower_bound)/n;
    result_1=0;
    for(i=lower_bound;i<upper_bound;i=i+interval){
        result_2=0;
        result=0;
        result_2= pow(M_E,(i+interval)*(i+interval));
        result = pow(M_E,i*i);
        result_1+=result+result_2;
    }
    Theresult=(interval*result_1)/2;
    return Theresult;
}
float simpsons_rule(float upper_bound, float lower_bound, int n){
    float i;
    float result_3, result_2, result_1, result, Theresult;
    if(n%2==0){
        float interval=(upper_bound-lower_bound)/n;
        result_1=0;
        for(i=lower_bound;i<upper_bound-interval;i=i+interval+interval){
            result=0;
            result_2=0;
            result_3=0;
            result= pow(M_E,i*i);
            result_2=pow(M_E,(i+interval)*(i+interval));
            result_3=pow(M_E,(i+interval+interval)*(i+interval+interval));
            result_1+=result+4*result_2+result_3;
        }
        Theresult=((upper_bound-lower_bound)/n)/3*result_1;
    return Theresult;
    }
    else
        printf("Interval must be even!!!!!\n");
}
float midpoint_rule_1(float upper_bound, float lower_bound, float n){
    float i, j;
    float result_1, result, Theresult;
    float interval=(upper_bound-lower_bound)/n;
    result_1=0;
    j=lower_bound+interval/2;
    for(i=j;i<upper_bound;i=i+interval){
            result=0;
            result= 2*pow(M_E,i)-2*i;
            result_1+=result;
    }
    Theresult=(interval*result_1);
    return Theresult;
}
float trapezoid_rule_1(float upper_bound, float lower_bound, float n){
    float i;
    float result_2, result_1, result, Theresult;
    float interval=(upper_bound-lower_bound)/n;
    result_1=0;
    for(i=lower_bound;i<upper_bound;i=i+interval){

        result_2= 2*(pow(M_E,(i+interval))-i);
        result  = 2*(pow(M_E,i)-i);
        result_1+=result+result_2;
    }
    Theresult=(interval*result_1)/2;
    return Theresult;
}
float simpsons_rule_1(float upper_bound, float lower_bound, int n){
    float i;
    float result_3, result_2, result_1, result, Theresult;
    if(n%2==0){
        float interval=(upper_bound-lower_bound)/n;
        result_1=0;
        for(i=lower_bound;i<upper_bound-interval;i=i+interval+interval){

            result= 2*pow(M_E,i)-2*i;
            result_2=2*pow(M_E,(i+interval))-2*i;
            result_3=2*pow(M_E,(i+interval+interval))-2*i;
            result_1+=result+4*result_2+result_3;
        }
        Theresult=(((upper_bound-lower_bound)/n)/3)*result_1;
        return Theresult;
        }
    else
        printf("Interval must be even!!!!!\n");
}
int main(void){
    float lower_bound, upper_bound;
    int n;
    char c;
    while(1){
            /*Hocam bu odev foyunde press 0 to exit ten sonra arada 'r'ye basýlmýs arada bir tus oldugunu var sayarak alta bir scanf koydum */
        printf("Enter your upper limit:");
        scanf(" %f", &upper_bound);
        printf("Enter your lower limit:");
        scanf(" %f", &lower_bound);
        printf("Enter your interval count:");
        scanf(" %d", &n);
        printf("---------------------------------------------\n");
        printf("Function 1\n");
        printf("LB: %f UB: %f INTERVAL: %d \n", lower_bound, upper_bound, n);
        printf("MIDPOINT RESULT: %f\n", midpoint_rule(upper_bound, lower_bound, n));
        printf("TRAPEZOID RESULT: %f\n", trapezoid_rule(upper_bound, lower_bound, n));
        printf("SIMPSONS RESULT: %f\n", simpsons_rule(upper_bound, lower_bound, n));
        printf("Function 2\n");
        printf("MIDPOINT RESULT:  %f\n", midpoint_rule_1(upper_bound, lower_bound, n));
        printf("TRAPEZOID RESULT: %f\n", trapezoid_rule_1(upper_bound, lower_bound, n));
        printf("SIMPSONS RESULT: %f\n", simpsons_rule_1(upper_bound, lower_bound, n));
        printf("PRESS '0' TO EXIT! \n");
        scanf(" %c", &c);
        if(c=='0'){
            return 0;
        }
    }
}






