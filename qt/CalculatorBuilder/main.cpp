#include "calculatorform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
   Q_INIT_RESOURCE(calculatorbuilder);

    QApplication app(argc, argv);
    CalculatorForm calculator;
    calculator.show();
    return app.exec();
}
