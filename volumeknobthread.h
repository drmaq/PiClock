#ifndef VOLUMEKNOBTHREAD_H
#define VOLUMEKNOBTHREAD_H

#include <QObject>
#include <QThread>

enum KnobState { KnobInit, KnobRight, KnobLeft, KnobRZero, KnobLZero };

class VolumeKnobThread : public QThread
{

    Q_OBJECT
public:
    VolumeKnobThread();

private:
    void run();

    KnobState knobState;

    /*bool InitState();
    bool RightState();
    bool LeftState();
    bool ZeroState();
*/
    int pinA;
    int pinB;
    int pinC;

    bool switchOn;

    void SwitchState(KnobState state);

signals:
    void up();
    void down();
    void pressed();

};

#endif // VOLUMEKNOBTHREAD_H
