# ifndef __QOST_HEADER
    /**
     * @file QOST.hpp
     * @author Ramtin Kosari(ramtinkosari&gmail.com)
     * @brief Q Operating System Tools's Macro
     * @version 0.1
     * @date 2023-03-16
     */
    # define __QOST_HEADER
    //-- Include Core Header
    # include "Core.hpp"
    /**
     * @brief Class to Store System Data
     * @param
     */
    class Data {
        private:
            /**
             * @brief Structure to Store Chassis Data of Machine
             * @param manufacturer Machine Manufacturer
             * @param version Machine Version
             * @param serial Machine Serial Number
             * @param state Object to Access Machine's Powe Supply, Boot Up and Thermal State
             * @param type Product Type
             */
            struct Chassis {
                std::string manufacturer;
                std::string version;
                std::string serial;
                std::string type;
                struct State {
                    bool power_supply;
                    bool boot_up;
                    bool thermal;
                };
                State state;
            };
            Chassis chassis;
            struct Bios {
                std::string version;
                std::string vendor;
                int rom_size;
            };
            Bios bios;
            struct System {
                std::string manufacturer;
                std::string product_name;
                std::string family;
                std::string serial;
                std::string UUID;
            };
            System system;
            struct BaseBoard {
                std::string manufacturer;
                std::string product_name;
                std::string version;
                std::string serial;
                std::string type;
                struct BoardDevices {
                    std::string designation;
                    std::string type;
                    bool status;
                };
                std::vector<BoardDevices> device;
            };
            BaseBoard baseboard;
            struct Processor {
                std::string manufacturer;
                std::string family;
                std::string type;
                std::string id;
                double voltage;
                int max_speed;
                int speed;
            };
            Processor processor;
            struct Memory {
                int amount_of_devices;
                std::string location;
                struct Device {
                    int size;
                    std::string manufacturer;
                    std::string bank_locator;
                    std::string form_factor;
                    std::string type_detail;
                    std::string locator;
                    std::string type;
                    double voltage;
                    int speed;
                };
                Device device;
            };
            Memory memory;
            struct DiskStorage {
                std::string mount_point;
                std::string type;
                double avalible;
                double used;
                double size;
                bool main;
            };
            std::vector<DiskStorage> partition;
            struct GraphicsCard {
                std::string product_name;
                std::string vendor;
            };
            std::vector<GraphicsCard> graphics;
            struct Additional {
                struct Keyboard {
                    std::string name;
                    bool status;
                };
                std::vector<Keyboard> keyboard;
                struct Mouse {
                    std::string name;
                    bool status;
                };
                std::vector<Mouse> mouse;
                struct Monitor {
                    std::string name;
                    bool status;
                };
                std::vector<Monitor> monitor;
                struct Sound {
                    std::string name;
                    bool status;
                };
                std::vector<Sound> sound;
                struct Network {
                    std::string name;
                    bool status;
                };
                std::vector<Network> network;
            };
            Additional driver;
            struct Services {
                std::string name;
                bool status;
            };
            std::vector<Services> service;
            struct Network {
                std::string connection_name;
                std::string connection_UUID;
                std::string interface;
                std::string ipv4;
                std::string ipv6;
                std::string type;
                double ping;
                bool state;
            };
            std::vector<Network> network;
        public:
            /**
             * @brief Constructor
             */
            Data();
    };
    /**
     * @brief Class of Methodes
     */
    class Methodes {
        private:
            /**
             * @brief All Accessed Data Stores in This Attribute
             */
            std::ofstream data;
        public:
            /**
             * @brief Destructor
             */
            ~Methodes();
            /**
             * @brief Create Data File
             * @return true 
             * @return false 
             */
            bool createDataFile() noexcept;
            /**
             * @brief Check Data File
             * @return true 
             * @return false 
             */
            bool checkDataFile() noexcept;
            /**
             * @brief Get System Data
             * @param option Option of Get Data Method
             * @return true 
             * @return false 
             */
            bool getData(const int &option) noexcept;
            struct Get {
                struct Cpu {
                    std::string architecture() noexcept;
                    int amount() noexcept;
                    std::string model() noexcept;
                    std::string brand() noexcept;
                    double speed() noexcept;
                };
                Cpu cpu;
            };
            Get get;
    };
    /**
     * @brief Class for Start Up Tools
     */
    class StartUp : public Data, public Methodes {
        private:
            /**
             * @brief Object to Access Data
             * @note to Get Data, Use Get Methodes
             * @param hardware Hardware Data
             * @param software Software Data
             * @param client Client Data
             */
            Data data;
            /**
             * @brief Object to Access Methodes
             * @param getData(Option) Get Data Optional
             */
            Methodes method;
        public:
            /**
             * @brief Constructor
             */
            StartUp();
    };
    /**
     * @brief Class for Shut Down Tools
     */
    class ShutDown : public Data, public Methodes {
        private:
            /**
             * @brief Object to Access Data
             * @note to Get Data, Use Get Methodes
             * @param hardware Hardware Data
             * @param software Software Data
             * @param client Client Data
             */
            Data data;
            /**
             * @brief Object to Access Methodes
             * @param getData(Option) Get Data Optional
             */
            Methodes method;
        public:
    };

# endif // __QOST_HEADER