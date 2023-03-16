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
     */
    class Data {
        private:
            /**
             * @brief Structure to Store Hardware's Info
             * @param Manufacture Manufacture Info
             * @param Processor Processor Info
             * @param Graphic Graphics Info
             * @param Display Display Info
             * @param Battery Battery Info
             * @param Disk Disk Info
             */
            struct Hardware {
                /**
                 * @brief Structure to Store Manufacture's Info
                 * @param serial Serial Number of System
                 * @param brand Brand of System
                 * @param model Model of System
                 */
                struct Manufacture {
                    /**
                     * @brief Serial Number of System
                     */
                    std::string serial;
                    /**
                     * @brief Brand Name of System
                     */
                    std::string brand;
                    /**
                     * @brief Model Name ID of System
                     */
                    std::string model;
                };
                /**
                 * @brief Object to Access Manufacture's Info
                 * @param serial Serial Number of System
                 * @param brand Brand of System
                 * @param model Model of System
                 */
                Manufacture manufacture;
                /**
                 * @brief Structure to Store Processor's Info
                 * @param capacity Capacity of Processor
                 * @param brand Brand of Processor
                 * @param model Model of Processor
                 * @param speed Speed of Processor
                 * @param type Type of Processor
                 */
                struct Processor {
                    /**
                     * @brief Capacity of Processor
                     * @note Unit : Giga Byte
                     */
                    unsigned int capacity;
                    /**
                     * @brief Brand of Processor
                     */
                    std::string brand;
                    /**
                     * @brief Model of Processor
                     */
                    std::string model;
                    /**
                     * @brief Type of Processor
                     */
                    std::string type;
                    /**
                     * @brief Speed of Processor
                     * @note Unit : Mega Hertz
                     */
                    double speed;
                };
                /**
                 * @brief Object to Access Processor's Info
                 * @param capacity
                 * @param brand
                 * @param model
                 * @param speed
                 * @param type
                 */
                Processor processor;
                /**
                 * @brief Structure to Store Graphic Card's Data
                 * @param isSwitchable AMD to Intel or Vice Versa
                 * @param capacity Capacity of Graphic Card
                 * @param brand Brand of Graphic Card
                 * @param model Model of Graphic Card
                 * @param type Type of Graphic Card
                 */
                struct Graphic {
                    /**
                     * @brief Amd to Intel or Vice Versa
                     * @note Yes or No
                     */
                    bool isSwitchable;
                    /**
                     * @brief Capacity of Graphic Card
                     * @note Unit : Giga Byte
                     */
                    unsigned int capacity;
                    /**
                     * @brief Brand of Graphic Card
                     */
                    std::string brand;
                    /**
                     * @brief Model of Graphic Card
                     */
                    std::string model;
                    /**
                     * @brief Type of Graphic Card
                     */
                    std::string type;
                };
                /**
                 * @brief Object to Access Graphic Card's Data
                 * @param isSwitchable AMD to Intel or Vice Versa
                 * @param capacity Capacity of Graphic Card
                 * @param brand Brand of Graphic Card
                 * @param model Model of Graphic Card
                 * @param type Type of Graphic Card
                 */
                Graphic graphic;
                /**
                 * @brief Structure to Store Display Monitor's Data
                 * @param resolution Resolution of Display Monitor
                 * @param height Height of Display Monitor
                 * @param width Width of Display Monitor
                 * @param size Size of Display Monitor
                 * @param rate Refresh Rate of Display Monitor
                 */
                struct DisplayMonitor {
                    /**
                     * @brief Resolution of Display Monitor
                     */
                    std::string resolution;
                    /**
                     * @brief Height of Screen
                     * @note Unit : Pixels
                     */
                    unsigned int height;
                    /**
                     * @brief Width of Screen
                     * @note Unit : Pixels
                     */
                    unsigned int width;
                    /**
                     * @brief Size of Display Monitor
                     * @note Unit : Inch
                     */
                    unsigned int size;
                    /**
                     * @brief Refresh Rate of Display Monitor
                     * @note Unit : Hertz
                     */
                    unsigned int rate;
                };
                /**
                 * @brief Object to Access Display Monitor's Data
                 * @param resolution Resolution of Display Monitor
                 * @param height Height of Display Monitor
                 * @param width Width of Display Monitor
                 * @param size Size of Display Monitor
                 * @param rate Refresh Rate of Display Monitor
                 */
                DisplayMonitor monitor;
                /**
                 * @brief Structure to Store Storage Data
                 * @param capacity Capacity of System Storage
                 * @param type Type of System Storage
                 * @param fs File System Partition of System Storage
                 */
                struct Storage {
                    /**
                     * @brief Capacity of System Storage
                     * @note Unit : Giga Byte
                     */
                    unsigned int capacity;
                    /**
                     * @brief Type of System Storage
                     * @note SSD or HDD
                     */
                    std::string type;
                    /**
                     * @brief File System Partition of System Storage
                     */
                    std::string fs;
                };
                /**
                 * @brief Object to Access Storage Data
                 * @param capacity Capacity of System Storage
                 * @param type Type of System Storage
                 * @param fs File System Partition of System Storage
                 */
                Storage storage;
            };
            /**
             * @brief Object to Access Hardware's Info
             * @param manufacture Manufacture Info
             * @param processor Processor Info
             * @param graphic Graphics Info
             * @param display Display Info
             * @param battery Battery Info
             * @param disk Disk Info
             */
            Hardware hardware;
        public:
    };
    /**
     * @brief Class of Methodes
     */
    class Methodes {
        public:
            /**
             * @brief Get System Data
             * @param option Option of Get Data Method
             * @return true 
             * @return false 
             */
            bool getData(int &option) noexcept;
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