# ifndef __QOST_DEFINITIONS
    /**
     * @file Definitions.hpp
     * @author Ramtin Kosari(ramtinkosari&gmail.com)
     * @brief Q Operating System Tools's Definitions Macro
     * @version 0.1
     * @date 2023-03-16
     */
    # define __QOST_DEFINITIONS
    /**
     * @brief Namespace of Method Options Enumeration
     * @param ALL Get All Data of System
     * @param HARD Get Hardware Data of System
     * @param SOFT Get Software Data of System
     */
    namespace Options {
        enum GetData {
            ALL,
            HARD,
            SOFT
        };
    }
# endif // __QOST_DEFINITIONS