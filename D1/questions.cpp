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
        return;
    }
    QTextStream textStream(&textFile);
    while (true)
    {
        QString line = textStream.readLine();
        if (line.isNull()) {
            break;
        }
        else{
            count++;
            questionsList.append(line);
            //temp.append("Hello");
        }
    }
}


QList<QString> Questions::getQuestions(){
    loadQuestions();
    return questionsList;
}
