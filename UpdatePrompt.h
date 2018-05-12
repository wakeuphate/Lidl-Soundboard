#ifndef UPDATEPROMPT_H
#define UPDATEPROMPT_H

#include <QObject>
#include <QWidget>
#include "QSimpleUpdater.h"
#include <QLabel>
#include <QProgressBar>
#include <QMessageBox>

class UpdatePrompt : public QWidget
{
    Q_OBJECT
public:

    UpdatePrompt(QWidget* parent=nullptr);
private:

    // attributes

    QLabel * _labelImg;
    QLabel * _labelUpdateProgress;
    QProgressBar *_progressBar;
    QSimpleUpdater* _updater;

    // methods

};

#endif // UPDATEPROMPT_H
