// main.cpp

#include <QtGlobal>
#include <QDebug>
#include <QCoreApplication>

// [0] include QXlsx headers
#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    using namespace QXlsx;

    Document test("test.xlsx");

    test.addSheet();

    for ( int numero = 0 ; numero < 10 ; numero++ )
    {
        float x = numero / 2. ;
        float y = numero * numero ;

        Format format_nombre;
        test.write( numero, 1, x, format_nombre );
        test.write( numero, 2, y, format_nombre );
    }

    Chart* chart = test.insertChart( 9, 1, QSize(400, 400) );
    chart->setChartType( Chart::CT_ScatterChart );

    chart->addSeries( CellRange("A1:B9") );

    test.save();

    return 0; // return a.exec();
}
