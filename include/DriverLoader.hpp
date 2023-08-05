#pragma once
#include <Windows.h>
class DRIVER {
private:
    LPTSTR mDriverPath, mServiceName, mDosServiceName;
    DWORD mStartType;
    SC_HANDLE mhService;
private:
    bool Init, Loaded, Started;
private:
    inline bool IsInit() const { return Init; }
    inline bool IsLoaded() const { return Loaded; }
    inline bool IsStarted() const { return Started; }

public:
    DWORD UnloadSvc();
    DWORD StopSvc();
    DWORD StartSvc();
    DWORD CreateSvc();
    DWORD InitSvc(LPTSTR DriverPath, LPTSTR ServiceName, LPTSTR DosServiceName, DWORD StartType);
public:
    void LoadDriver(LPTSTR DriverPath, LPTSTR ServiceName, LPTSTR DosServiceName, DWORD StartType);
    void UnloadDriver();
};