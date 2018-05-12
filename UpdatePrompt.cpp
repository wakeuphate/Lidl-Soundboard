#include "UpdatePrompt.h"

UpdatePrompt::UpdatePrompt(QWidget* parent)  : QWidget(parent)
{

    this->setFixedSize(465,200);
    /* QSimpleUpdater is single-instance
     Calling this method will create a static QSimpleUpdater object
     and return its adress */
    QSimpleUpdater * _updater = QSimpleUpdater::getInstance();


    // check for update, if update available, we show the prompt
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"LIDL Update Checker",
                                  "A new update is available, do you wish to update the soundboard?",
                                    QMessageBox::Yes|QMessageBox::No);
    // if we chose to update than we proceed
    if (reply)
        this->BeginUpdate();
}

UpdatePrompt::BeginUpdate()
{

}
