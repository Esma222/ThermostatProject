#include "systemcontroller.h"

SystemController::SystemController(QObject *parent)
    : QObject(parent),
      m_CurrentSystemTemprature(65),
      m_TargetTemp(70),
      m_SystemStatusMessage("Heating..."),
      m_SystemState(HEATING)
{

}

int SystemController::CurrentSystemTemprature() const
{
    return m_CurrentSystemTemprature;
}

int SystemController::TargetTemp() const
{
    return m_TargetTemp;
}

QString SystemController::SystemStatusMessage() const
{
    return m_SystemStatusMessage;
}

SystemController::HeatSelectState SystemController::SystemState() const
{
    return m_SystemState;
}

void SystemController::setCurrentSystemTemprature(int CurrentSystemTemprature)
{
    if (m_CurrentSystemTemprature == CurrentSystemTemprature)
        return;

    m_CurrentSystemTemprature = CurrentSystemTemprature;
    emit CurrentSystemTempratureChanged(m_CurrentSystemTemprature);
}

void SystemController::setTargetTemp(int TargetTemp)
{
    if (m_TargetTemp == TargetTemp)
        return;

    m_TargetTemp = TargetTemp;
    emit TargetTempChanged(m_TargetTemp);
    CheckSystemSatatus();
}

void SystemController::setSystemStatusMessage(QString SystemStatusMessage)
{
    if (m_SystemStatusMessage == SystemStatusMessage)
        return;

    m_SystemStatusMessage = SystemStatusMessage;
    emit SystemStatusMessageChanged(m_SystemStatusMessage);

}

void SystemController::setSystemState(SystemController::HeatSelectState SystemState)
{
    if (m_SystemState == SystemState)
        return;

    m_SystemState = SystemState;
    emit SystemStateChanged(m_SystemState);
}

void SystemController::CheckSystemSatatus()
{
    if((m_CurrentSystemTemprature< m_TargetTemp)&&(m_SystemState == HEATING))
            setSystemStatusMessage("Heating...");
    else if((m_CurrentSystemTemprature> m_TargetTemp)&&(m_SystemState == COOLING))
            setSystemStatusMessage("Cooling...");
    else if(m_SystemState == AUTO){
        if(m_CurrentSystemTemprature>m_TargetTemp)
            setSystemStatusMessage("Cooling...");
        else if(m_CurrentSystemTemprature<m_TargetTemp)
            setSystemStatusMessage("Heating...");
        else
            setSystemStatusMessage("Holding...");

    }
    else
        setSystemStatusMessage("Holding...");




}
