#include<coord.hh>
#include<plot.hh>
#include<sets.hh>

std::string plot(d::compact::coord<double, 2> *ptr, di amnt) {
}

int main() {
    constexpr double EPS=1e-4;
    constexpr d::R sampleRange(-2., 2.);
    consteval di sampleAmt=std::ceil(sampleRange.span()/EPS);
    consteval double dx=sampleRange.span()/(sampleAmt-1);
    d::compact::coord<double, 2> pts[sampleAmt];
    for(di i=0; i<sampleAmt; ++i)
        pts[i][0]=sampleRange.von()+dx*(double)i;
    return 0;
}
