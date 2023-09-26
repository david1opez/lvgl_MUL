#include "iostream"

// Definitions
template <typename T>
void updateValue(T* memoryLocation, const T& newValue) {
    if (memoryLocation != nullptr) {
        *memoryLocation = newValue;
    } else {
        std::cerr << "Error: Invalid memory location pointer." << std::endl;
    }
};

// Imports
lv_obj_t * ImportLoadingScreen(unsigned short * percentage = 0, bool showOnStart = true) {        
    lv_obj_t * parent = lv_obj_create(NULL);

    percentage = 100;

    bool new_ShowOnStart_value = true;
    updateValue(showOnStart, new_ShowOnStart_value);

    return parent
};

lv_obj_t * ImportAutonSelector() {
    lv_obj_t * parent = lv_obj_create(NULL);
    return parent
};

lv_obj_t * ImportOdometry() {
    lv_obj_t * parent = lv_obj_create(NULL);
    return parent
};

lv_obj_t * ImportStats() {
    lv_obj_t * parent = lv_obj_create(NULL);
    return parent
};

// Code
void GUI_test() {
    unsigned short loadingPercentage = 0;

    std::string currentTab = "autonSelector";
    currentTab.reserve(14);

    bool showOnStart = false;
    
    showOnStart = true;

    lv_obj_t * LoadingScreen = ImportLoadingScreen(&loadingPercentage, showOnStart);
    lv_obj_t * AutonSelector = ImportAutonSelector();
    lv_obj_t * Odometry = ImportOdometry();
    lv_obj_t * Stats = ImportStats();

    if(loadingPercentage < 100) {
        lv_scr_load(LoadingScreen);
    } else {
        if(currentTab == "autonSelector") {
            lv_scr_load(AutonSelector);
        }
        else if(currentTab == "odometry") {
            lv_scr_load(Odometry);
        }
        else if(currentTab == "stats") {
            lv_scr_load(Stats);
        }
    }
};
