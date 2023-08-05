# DriverLoader
Is it a driver injector or driver loader

# How to compile
cmake ..

# Usage example

You need to include header file and for example you can write this:

1)
```cpp
int main() {
    DRIVER Driver;
    std::string Wait;

    Driver.InitSvc((LPTSTR)L"C:\\HelloWorldDriver.sys", (LPTSTR)L"driver", (LPTSTR)L"driver", SERVICE_DEMAND_START);
    std::cout << "Driver Loaded!" << std::endl;

    Driver.CreateSvc();
    std::cout << "Driver Created!" << std::endl;

    Driver.StartSvc();
    std::cout << "Driver Started!" << std::endl;

    std::cout << "Press any key to unload driver...";
    getline(std::cin, Wait, '\n');

    Driver.UnloadSvc();
    std::cout << "Driver unloaded!" << std::endl;

    return 0;
}
```
2)
