#ifndef LINEEDITCOMPLETER_H
#define LINEEDITCOMPLETER_H

#include <QFocusEvent>
#include <QKeyEvent>
#include <QStringList>

#include "customlineedit.h"

class LineEditCompleter : public CustomLineEdit
{
    Q_OBJECT
private:
    QString cursorWord(const QString &line) const;
    QCompleter *c;
private slots:
    void insertCompletion(QString);

protected:
    void keyPressEvent(QKeyEvent *event);
    void focusOutEvent(QFocusEvent *e);

public:
    explicit LineEditCompleter(QWidget *parent = nullptr);
    void setCompleter(QCompleter *);
    void setCompletionList(QStringList);
};

#endif
