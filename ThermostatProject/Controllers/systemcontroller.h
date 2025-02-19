#ifndef SYSTEMCONTROLLER_H
#define SYSTEMCONTROLLER_H

#include <QObject>

class SystemController : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int CurrentSystemTemprature READ CurrentSystemTemprature WRITE setCurrentSystemTemprature NOTIFY CurrentSystemTempratureChanged)
    Q_PROPERTY(int TargetTemp READ TargetTemp WRITE setTargetTemp NOTIFY TargetTempChanged)
    Q_PROPERTY(QString SystemStatusMessage READ SystemStatusMessage WRITE setSystemStatusMessage NOTIFY SystemStatusMessageChanged)
    Q_PROPERTY(HeatSelectState SystemState READ SystemState WRITE setSystemState NOTIFY SystemStateChanged)
public:
    explicit SystemController(QObject *parent = nullptr);

    enum HeatSelectState{
        HEATING,
        COOLING,
        AUTO
    };
    Q_ENUM(HeatSelectState)

    int CurrentSystemTemprature() const;

    int TargetTemp() const;

    QString SystemStatusMessage() const;

    HeatSelectState SystemState() const;

public slots:
    void setCurrentSystemTemprature(int CurrentSystemTemprature);

    void setTargetTemp(int TargetTemp);

    void setSystemStatusMessage(QString SystemStatusMessage);

    void setSystemState(HeatSelectState SystemState);

signals:

    void CurrentSystemTempratureChanged(int CurrentSystemTemprature);

    void TargetTempChanged(int TargetTemp);

    void SystemStatusMessageChanged(QString SystemStatusMessage);

    void SystemStateChanged(HeatSelectState SystemState);

private:
    void CheckSystemSatatus();
    int m_CurrentSystemTemprature;
    int m_TargetTemp;
    QString m_SystemStatusMessage;
    HeatSelectState m_SystemState;
};

#endif // SYSTEMCONTROLLER_H
