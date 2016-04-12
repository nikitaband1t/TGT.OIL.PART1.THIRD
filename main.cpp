#include <iostream>
#include <vector>
#include <ctime>
#include <time.h>
#include <math.h>
/*Count bulk of n-dimension sphere using Monte-Karlo algorithm
 * User should write on input:
 * The start point then write down dimension
 * Sorry i miss deadline cause
 * my calendar has broken*/

int main() {
    srand(time(NULL));
    long radius,N = rand()%100000;
    long dimension;
    std::cin>>dimension;
    std::vector<double> vector;
    for(long i = 0 ; i < dimension ; ++i){
        double data = 0;
        std::cin>>data;
        vector.push_back(data);
    }
    std::cin>>radius;
    float result = 0;
    long N_1 = N;
    while(N_1!=0) {
        std::vector<double> temp_result;
        double value = radius*radius;
        for (auto itt = vector.begin(); itt != vector.end();itt++) {
            /*without distribution function cause
             * random give us good variation*/
            double r =   + (((*itt)+radius) - ((*itt)-radius) ) * ( (double)rand() / (double)RAND_MAX ) + ((*itt)-radius);
            if(r<=(*itt+radius)) {
                value -= pow((r - (*itt)), 2);
            }
            else{
                r = pow(value,1/2);
            }
            temp_result.push_back(r);
        }
        result+=radius*radius-value;
        N_1--;

    }
    std::vector<double> temp_result(dimension,0);
    for(auto mood = vector.begin();mood!=vector.end();++mood){
        (*mo)
    }
    double outp = (2*(radius+));
    std::cout<<(result*outp)/N<<std::endl;
    /*wrong answer*/
    return 0;
}


