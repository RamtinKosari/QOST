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
     * @brief Class for Start Up Tools
     */
    class StartUp : public Data {
        private:
            /**
             * @brief Object to Access Data
             * @note to Get Data, Use Get Methodes
             */
            Data data;
        public:
    };
    /**
     * @brief Class for Shut Down Tools
     */
    class ShutDown : public Data {
        private:
            /**
             * @brief Object to Access Data
             * @note to Get Data, Use Get Methodes
             */
            Data data;
        public:
    };

# endif // __QOST_HEADER