#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QWidget>

namespace Ui {
class MusicPlayer;
}

class MusicPlayer : public QWidget
{
    Q_OBJECT

public:
    explicit MusicPlayer(QWidget *parent = 0);
    ~MusicPlayer();

signals:
   void GoBack();

private slots:
   void on_okButton_clicked();
   void on_chillOutButton_clicked();
   void on_HDMButton_clicked();
   void on_lightButton_clicked();

   void VolumeUp();
   void VolumeDown();
   void Mute();

   void StartProcess(QString command, QStringList args);

private:
    Ui::MusicPlayer *ui;
};

#endif // MUSICPLAYER_H
