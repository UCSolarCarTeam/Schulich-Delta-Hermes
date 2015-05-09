#pragma once

#include <QPushButton>

class I_EscapeDialog
{
public:
    virtual ~I_EscapeDialog() {}

    void keyPressEvent(QKeyEvent * event);
    virtual QPushButton& settingsButton() = 0;
    virtual QPushButton& aboutButton() = 0;
    virtual QPushButton& returnButton() = 0;
    virtual QPushButton& toggleFullscreenPushButton() = 0;
    virtual QPushButton& exitButton() = 0;
};
