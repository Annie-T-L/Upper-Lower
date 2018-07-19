#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void strString(QString st1)
    {
        QString st2 = st1;
        if(st1[0].isLower())
        {
            for(int i1=0;i1<st1.length();i1+=2)
            {   st1[i1] = st1[i1].toUpper();
                st1[i1+1] = st1[i1+1].toLower();    }
        }
        else if(st1[0].isUpper())
        {
            for(int i1=1;i1<st1.length();i1+=2)
            {   st1[i1-1] = st1[i1-1].toLower();
                st1[i1] = st1[i1].toUpper();    }
        }
        qDebug() << st2 << " ... " << st1;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.strString("klklfkhkjhf");
    s1.strString("Hjyrgrdjdf");
    s1.strString("ajdjkg765");
    s1.strString("MkjfuGG");

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
