

#ifndef __FinancialSamples__IntRateCalculator__
#define __FinancialSamples__IntRateCalculator__

#include <iostream>

class IntRateCalculator
{
    public:
        IntRateCalculator(double rate);
        IntRateCalculator(const IntRateCalculator &v);
        IntRateCalculator &operator =(const IntRateCalculator &v);
        ~IntRateCalculator();
        double singlePeriod(double value);
 //       virtual ~IntRateCalculator();

    protected:

    private:
        double m_rate;
};

inline double IntRateCalculator::singlePeriod(double value)
{
    double f = value*(1+this->m_rate);
    return f;
}
#endif // INTRATECALCULATOR_H
