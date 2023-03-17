# ifndef __QOST_HEADER
    # include "QOST.hpp"
    /**
     * @brief Constructor
     */
    StartUp::StartUp() {
        method.getData(Options::ALL);
    }
    /**
     * @brief Create Data File
     * @return true 
     * @return false 
     */
    bool Methodes::createDataFile() noexcept(true) {
        log(" - Creating New Data File !")
        data = std::ofstream(DATA_FILE);
        if (data.is_open()) {
            return true;
        } else {
            return false;
        }
    }
    /**
     * @brief Check If Data File is Avalible or Not
     * @return true 
     * @return false 
     */
    bool Methodes::checkDataFile() noexcept(true) {
        DIR *file;
        struct dirent *action;
        file = opendir("../QOST");
        std::string filename;
        if (file) {
            while ((action = readdir(file)) != NULL) {
                filename = action->d_name;
                if (filename == DATA_FILE) {
                    log(" - Data File is Avalible")
                    return true;
                }
            }
        }
        log(" - Data File is Not Avalible")
        return false;
    }
    /**
     * @brief Get System Data
     * @param option Option of Get Data Method
     * @return true 
     * @return false 
     */
    bool Methodes::getData(const int &option) noexcept(true) {
        switch (DEFAULT_OS) {
            case OS::UNIX: {
                assert_message(SUPPORT_UNIX, "Unix Based OS is Not Supported !");
                log("Accessing Data ...")
                if (checkDataFile() == false) {
                    createDataFile();
                }
                break;
            };
            case OS::WIN: {
                assert_message(SUPPORT_WIN, "Windows OS is Not Supported !");
                break;
            };
        }
        return true;
    }
    /**
     * @brief Destructor
     */
    Methodes::~Methodes() {
        data.close();
        system("rm -rf data.txt");
    }
# endif // __QOST_HEADER




/**
 * @brief 
 * 
 * 
 * 
 *                            Create system() methodes to get data form os
 *                          
 * 
 * 
 */