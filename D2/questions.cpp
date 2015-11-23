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

/*Function: void Questions::loadQuestions()
 * Purpose: load questions for profile from text file
 */
void Questions::loadQuestions(){
    int count = 0;
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
            count++;
            questionsList.append(line);
            //temp.append("Hello");
        }
    }
     qDebug()<<"questionList: "<< questionsList.length()<<"count: "<<count;
}


QList<QString> Questions::getQuestions(){
    loadQuestions();
     qDebug() <<"First question added : " <<questionsList.at(0);
     qDebug() <<"Second question added: " <<questionsList.at(1);

    return questionsList;
}
