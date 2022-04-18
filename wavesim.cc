/* Particle Structure Wave Simulation
 * Framework: Force model
 */

#include<physobj.hh>
#include<plot.hh>
#include<sets.hh>

std::string plot(d::dyn::compact::mono<double, 2, 2> *ptr, di amnt) {
    return "Unimplemented!";
}

int main() {
    // User-control variables
    constexpr double forceAmp=1;
    constexpr double EPS=1e-4;

    std::cout << std::setprecision(14);
    const d::R sampleRange(-2., 2.);
    const di sampleAmt=std::ceil(sampleRange.span()/EPS);
    const double dx=sampleRange.span()/(sampleAmt-1);
    d::dyn::compact::mono<double, 2, 2> pts[sampleAmt];
    for(di i=0; i<sampleAmt; ++i)
        pts[i][0][0]=sampleRange.von()+dx*(double)i;
    for(di i=0; i<sampleAmt; ++i) std::cout << pts[i] << std::endl;
    return 0;
}
