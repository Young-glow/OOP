#include <iostream>

class AppSettings {
private:
    AppSettings() {}
    static AppSettings* instance;

public:
    int resolutionX;
    int resolutionY;

    static AppSettings* getInstance() {
        if (instance == nullptr) {
            instance = new AppSettings();
        }
        return instance;
    }
};

AppSettings* AppSettings::instance = nullptr;

class window {
public:
    window() {
        AppSettings::getInstance()->resolutionX = 800;
        AppSettings::getInstance()->resolutionY = 600;
    }

    void print() {
        std::cout << "Window resolution: " 
                  << AppSettings::getInstance()->resolutionX << "x" 
                  << AppSettings::getInstance()->resolutionY << std::endl;
    }
};

int main() {
    window myWindow;

    myWindow.print();
    AppSettings::getInstance()->resolutionX = 1024;
    AppSettings::getInstance()->resolutionY = 768;
    myWindow.print();

    return 0;
}
