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