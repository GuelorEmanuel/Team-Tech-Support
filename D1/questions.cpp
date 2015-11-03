#include "questions.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

Questions::Questions()
{
}

Questions::~Questions() {
    //delete stringList;
}

void Questions::loadQuestions(){

    QFile textFile(":Images/listquestions");

    if(!textFile.open(QFile::ReadOnly|QFile::Text)){
        qDebug()<<"Could not open the File for read";
        return;
    }
    QTextStream textStream(&textFile);
    while (true)
    {
        QString line = textStream.readLine();
        if (line.isNull()) {
            qDebug()<<"Line is Null";
            break;
        }
        else{
            qDebug()<<"Adddddding";
            questionsList.append(line);
            //temp.append("Hello");
        }
    }
}
QList<QString> Questions::getQuestions(){
    loadQuestions();
     qDebug() <<"First question added : " <<questionsList.at(0);
     qDebug() <<"Second question added: " <<questionsList.at(1);

    return questionsList;
}
