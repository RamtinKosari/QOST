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
             * @brief Structure to Store Chassis Data of Product
             * @param manufacturer Product Manufacturer
             * @param version Product Version
             * @param serial Product Serial Number
             * @param state Object to Access Product's Power Supply, Boot Up and Thermal State
             * @param type Product Type
             */
            struct Chassis {
                /**
                 * @brief Product Manufacturer
                 */
                std::string manufacturer;
                /**
                 * @brief Product Version
                 */
                std::string version;
                /**
                 * @brief Product Serial Number
                 */
                std::string serial;
                /**
                 * @brief Product Type
                 */
                std::string type;
                /**
                 * @brief Structure to Store Product's Power Supply, Boot Up and Thermal State
                 * @param power_supply Power Supply State
                 * @param boot_up Boot Up State
                 * @param thermal Thermal State
                 */
                struct State {
                    /**
                     * @brief Power Supply State
                     * @return safe
                     * @return unsafe
                     */
                    bool power_supply;
                    /**
                     * @brief Boot Up State
                     * @return safe
                     * @return unsafe
                     */
                    bool boot_up;
                    /**
                     * @brief Theraml State
                     * @return safe
                     * @return unsafe
                     */
                    bool thermal;
                };
                /**
                 * @brief Object to Access Product's Power Supply, Boot Up and Thermal State
                 * @param power_supply Power Supply State
                 * @param boot_up Boot Up State
                 * @param thermal Thermal State
                 */
                State state;
            };
            /**
             * @brief Object to Access Chassis Data of Product
             * @param manufacturer Product Manufacturer
             * @param version Product Version
             * @param serial Product Serial Number
             * @param state Object to Access Product's Power Supply, Boot Up and Thermal State
             * @param type Product Type
             */
            Chassis chassis;
            /**
             * @brief Structure to Store Bios Data
             * @param rom_size Size of ROM
             * @param version Version of Bios
             * @param vendor Vendor of Bios
             */
            struct Bios {
                /**
                 * @brief Version of Bios
                 */
                std::string version;
                /**
                 * @brief Vendor of Bios
                 */
                std::string vendor;
                /**
                 * @brief Size of ROM
                 */
                int rom_size;
            };
            /**
             * @brief Object to Access Bios Data
             * @param rom_size Size of ROM
             * @param version Version of Bios
             * @param vendor Vendor of Bios
             */
            Bios bios;
            /**
             * @brief Structure to Store System Data
             * @param manufacturer Product Manufacturer
             * @param product_name Product Name
             * @param family Product Family
             * @param serial Product Serial Number
             * @param UUID Product UUID Code
             */
            struct System {
                /**
                 * @brief Product Manufacturer
                 */
                std::string manufacturer;
                /**
                 * @brief Product Name
                 */
                std::string product_name;
                /**
                 * @brief Product Family
                 */
                std::string family;
                /**
                 * @brief Product Serial
                 */
                std::string serial;
                /**
                 * @brief Product UUID
                 */
                std::string UUID;
            };
            /**
             * @brief Object to Access System Data
             * @param manufacturer Product Manufacturer
             * @param product_name Product Name
             * @param family Product Family
             * @param serial Product Serial Number
             * @param UUID Product UUID Code
             */
            System system;
            /**
             * @brief Structure to Store Base Board Data
             * @param manufacturer Base Board Manufacturer
             * @param product_name Base Board Product Name
             * @param version Base Board Version
             * @param serial Base Board Serial Number
             * @param type Base Board Type
             * @param device Object to Access Base Board's Devices Data
             */
            struct BaseBoard {
                /**
                 * @brief Base Board Manufacturer
                 */
                std::string manufacturer;
                /**
                 * @brief Base Board Product Name
                 */
                std::string product_name;
                /**
                 * @brief Base Board Version
                 */
                std::string version;
                /**
                 * @brief Base Board Serial Number
                 */
                std::string serial;
                /**
                 * @brief Base Board Type
                 */
                std::string type;
                /**
                 * @brief Structure to Store Board Devices Data
                 * @param designation Designation of Device Board
                 * @param status Status of Device Board
                 * @param type type of Device Board
                 */
                struct BoardDevices {
                    /**
                     * @brief Designation of Device Board
                     */
                    std::string designation;
                    /**
                     * @brief Type of Device Board
                     */
                    std::string type;
                    /**
                     * @brief Status of Device Board
                     */
                    bool status;
                };
                /**
                 * @brief Object to Access Board Devices Data
                 * @param designation Designation of Device Board
                 * @param status Status of Device Board
                 * @param type type of Device Board
                 */
                std::vector<BoardDevices> device;
            };
            /**
             * @brief Object to Access Base Board Data
             * @param manufacturer Base Board Manufacturer
             * @param product_name Base Board Product Name
             * @param version Base Board Version
             * @param serial Base Board Serial Number
             * @param type Base Board Type
             * @param device Object to Access Base Board's Devices Data
             */
            BaseBoard baseboard;
            /**
             * @brief Structure to Store Processor Data
             * @param manufacturer Processor Manufacturer
             * @param max_speed Processor Max Speed
             * @param voltage Processor Voltage
             * @param family Processor Family
             * @param speed Processor Speed
             * @param type Processor Type
             * @param id Processor ID
             */
            struct Processor {
                /**
                 * @brief Processor Manufacturer
                 */
                std::string manufacturer;
                /**
                 * @brief Processor Family
                 */
                std::string family;
                /**
                 * @brief Processor Type
                 */
                std::string type;
                /**
                 * @brief Processor ID
                 */
                std::string id;
                /**
                 * @brief Processor Voltage
                 */
                double voltage;
                /**
                 * @brief Processor Max Speed
                 */
                int max_speed;
                /**
                 * @brief Processor Speed
                 */
                int speed;
            };
            /**
             * @brief Object to Access Processor Data
             * @param manufacturer Processor Manufacturer
             * @param max_speed Processor Max Speed
             * @param voltage Processor Voltage
             * @param family Processor Family
             * @param speed Processor Speed
             * @param type Processor Type
             * @param id Processor ID
             */
            Processor processor;
            /**
             * @brief Structure to Store Memory Data
             * @param amount_of_devices Amount of Memory Devices
             * @param location Location of Memory Devices
             * @param device Object to Access each Memory Device Data
             */
            struct Memory {
                /**
                 * @brief Amount of Memory Devices
                 */
                int amount_of_devices;
                /**
                 * @brief Location of Memory Devices
                 */
                std::string location;
                /**
                 * @brief Structure to Store Memory Device Data
                 * @param manufacturer Memory Device Manufacturer
                 * @param bank_locator Memory Device Bank Locator
                 * @param form_factor Memory Device Form Factor
                 * @param type_detail Memory Device Type Detail
                 * @param voltage Memory Device Voltage
                 * @param locator Memory Device Locator
                 * @param speed Memory Device Speed
                 * @param type Memory Device Type
                 * @param size Memory Device Size
                 */
                struct Device {
                    /**
                     * @brief Memory Device Manufacturer
                     */
                    std::string manufacturer;
                    /**
                     * @brief Memory Device Bank Locator
                     */
                    std::string bank_locator;
                    /**
                     * @brief Memory Device Form Factor
                     */
                    std::string form_factor;
                    /**
                     * @brief Memory Device Type Detail
                     */
                    std::string type_detail;
                    /**
                     * @brief Memory Device Locator
                     */
                    std::string locator;
                    /**
                     * @brief Memory Device Type
                     */
                    std::string type;
                    /**
                     * @brief Memory Device Voltage
                     */
                    double voltage;
                    /**
                     * @brief Memory Device Speed
                     */
                    int speed;
                    /**
                     * @brief Memory Device Size
                     */
                    int size;
                };
                /**
                 * @brief Object to Access Memory Device Data
                 * @param manufacturer Memory Device Manufacturer
                 * @param bank_locator Memory Device Bank Locator
                 * @param form_factor Memory Device Form Factor
                 * @param type_detail Memory Device Type Detail
                 * @param voltage Memory Device Voltage
                 * @param locator Memory Device Locator
                 * @param speed Memory Device Speed
                 * @param type Memory Device Type
                 * @param size Memory Device Size
                 */
                Device device;
            };
            /**
             * @brief Object to Access Memory Data
             * @param amount_of_devices Amount of Memory Devices
             * @param location Location of Memories
             * @param device Object to Access each Memory Device Data
             */
            Memory memory;
            /**
             * @brief Structure to Store Disk Storage Data
             * @param mount_point Disk Storage Mount Point Path
             * @param avalible Disk Storage Avalible Space
             * @param used Disk Storage Used Space
             * @param size Disk Storage Size
             * @param type Disk Storage Type
             * @param main Current-Use Disk Storage Status
             */
            struct DiskStorage {
                /**
                 * @brief Disk Storage Mount Point Path
                 */
                std::string mount_point;
                /**
                 * @brief Disk Storage Type
                 */
                std::string type;
                /**
                 * @brief Disk Storage Avalible Space
                 */
                double avalible;
                /**
                 * @brief Disk Storage Used Space
                 */
                double used;
                /**
                 * @brief Disk Storage Size
                 */
                double size;
                /**
                 * @brief Current-Use Disk Storage Status
                 */
                bool main;
            };
            /**
             * @brief Structure to Store Disk Storage Data
             * @param mount_point Disk Storage Mount Point Path
             * @param avalible Disk Storage Avalible Space
             * @param used Disk Storage Used Space
             * @param size Disk Storage Size
             * @param type Disk Storage Type
             * @param main Current-Use Disk Storage Status
             */
            std::vector<DiskStorage> partition;
            /**
             * @brief Structure to Store Graphics Card Data
             * @param product_name Graphics Card Product Name
             * @param vendor Graphics Card Vendor
             */
            struct GraphicsCard {
                /**
                 * @brief Graphics Card Product Name
                 */
                std::string product_name;
                /**
                 * @brief Graphics Card Vendor
                 */
                std::string vendor;
            };
            /**
             * @brief Structure to Store Graphics Card Data
             * @param product_name Graphics Card Product Name
             * @param vendor Graphics Card Vendor
             */
            std::vector<GraphicsCard> graphics;
            /**
             * @brief Structure to Store Additional Parts Data
             * @param keyboard Object to Access Keyboard Data
             * @param network Object to Access Network Data
             * @param monitor Object to Access Monitor Data
             * @param mouse Object to Access Mouse Data
             * @param sound Object to Access Sound Data
             */
            struct Additional {
                /**
                 * @brief Structure to Store Keyboard Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                struct Keyboard {
                    /**
                     * @brief Name of Product
                     */
                    std::string name;
                    /**
                     * @brief Status of Product
                     */
                    bool status;
                };
                /**
                 * @brief Object to Access Keyboard Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                std::vector<Keyboard> keyboard;
                /**
                 * @brief Structure to Store Mouse Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                struct Mouse {
                    /**
                     * @brief Name of Product
                     */
                    std::string name;
                    /**
                     * @brief Status of Product
                     */
                    bool status;
                };
                /**
                 * @brief Object to Access Mouse Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                std::vector<Mouse> mouse;
                /**
                 * @brief Structure to Store Monitor Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                struct Monitor {
                    /**
                     * @brief Name of Product
                     */
                    std::string name;
                    /**
                     * @brief Status of Product
                     */
                    bool status;
                };
                /**
                 * @brief Object to Access Monitor Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                std::vector<Monitor> monitor;
                /**
                 * @brief Structure to Store Sound Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                struct Sound {
                    /**
                     * @brief Name of Product
                     */
                    std::string name;
                    /**
                     * @brief Status of Product
                     */
                    bool status;
                };
                /**
                 * @brief Object to Access Sound Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                std::vector<Sound> sound;
                /**
                 * @brief Structure to Store Monitor Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                struct Network {
                    /**
                     * @brief Name of Product
                     */
                    std::string name;
                    /**
                     * @brief Status of Product
                     */
                    bool status;
                };
                /**
                 * @brief Object to Access Monitor Data
                 * @param status Status of Product
                 * @param name Name of Product
                 */
                std::vector<Network> network;
            };
            /**
             * @brief Object to Access Additional Parts Data
             * @param keyboard Object to Access Keyboard Data
             * @param network Object to Access Network Data
             * @param monitor Object to Access Monitor Data
             * @param mouse Object to Access Mouse Data
             * @param sound Object to Access Sound Data
             */
            Additional driver;
            /**
             * @brief Structure to Store Services Data
             * @param name Service Name
             * @param status Service Status
             */
            struct Services {
                /**
                 * @brief Service Name
                 */
                std::string name;
                /**
                 * @brief Service Status
                 */
                bool status;
            };
            /**
             * @brief Object to Access Services Data
             * @param name Service Name
             * @param status Service Status
             */
            std::vector<Services> service;
            /**
             * @brief Structure to Store Network Data
             * @param connection_name Network Connection Name
             * @param connection_UUID Network Connection UUID
             * @param interface Network Interface
             * @param state Network State
             * @param ipv4 Network IPv4
             * @param ipv6 Network IPv6
             * @param type Network Type
             * @param ping Network Ping
             */
            struct Network {
                /**
                 * @brief Network Connection Name
                 */
                std::string connection_name;
                /**
                 * @brief Network Connection UUID
                 */
                std::string connection_UUID;
                /**
                 * @brief Network Interface
                 */
                std::string interface;
                /**
                 * @brief Network IPv4
                 */
                std::string ipv4;
                /**
                 * @brief Network IPv6
                 */
                std::string ipv6;
                /**
                 * @brief Network Type
                 */
                std::string type;
                /**
                 * @brief Network Ping
                 */
                double ping;
                /**
                 * @brief Network State
                 */
                bool state;
            };
            /**
             * @brief Object to Access Network Data
             * @param connection_name Network Connection Name
             * @param connection_UUID Network Connection UUID
             * @param interface Network Interface
             * @param state Network State
             * @param ipv4 Network IPv4
             * @param ipv6 Network IPv6
             * @param type Network Type
             * @param ping Network Ping
             */
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