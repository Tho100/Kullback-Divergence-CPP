#include <iostream>
#include <stdio.h>
#include <math.h>

int kullback_leibler_dvg(double p[], double q[],int len) {
    double s_pq = 0.0;
    double s_qp = 0.0;
    for(int i=0; i<len; i++) {
        s_pq = s_pq + p[i] * log(p[i]/q[i]);
        s_qp = s_qp + q[i] * log(q[i]/p[i]);
    }
    std::cout << "P || Q = " << s_pq << '\n';
    std::cout << "Q || P = " << s_qp << std::endl;
}

int main() {

    double n1[] = {0.12,0.55,0.25};
    double n2[] = {0.70,0.25,0.30};
    int len = sizeof(n1)/sizeof(n1[0]);

    kullback_leibler_dvg(n1,n2,len);

    return 0;
}
