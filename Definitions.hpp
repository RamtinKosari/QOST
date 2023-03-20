# ifndef __QOST_DEFINITIONS
    /**
     * @file Definitions.hpp
     * @author Ramtin Kosari(ramtinkosari&gmail.com)
     * @brief Q Operating System Tools's Definitions Macro
     * @version 0.1
     * @date 2023-03-16
     */
    # define __QOST_DEFINITIONS
    //-- Include Assert Header
    # include <assert.h>
    /**
     * @brief Preprocessor Definition
     * @note Use (void) to Silence Unused Warnings
     * @param condition Your Condition, True or False
     * @param message Assert Message
     */
    # define assert_message(condition, message) assert(((void)message, condition))
    /**
     * @brief Preprocessor Definition
     * @note Check Log Statement in Configs Then Log Output to The Terminal
     * @param output Output Message
     */
    # define log(output) if (LOG) {std::cout << output << std::endl;}
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
    /**
     * @brief Namespace of Avalible Operating Systems
     * @param UNIX Unix Based Operating Systems Like MacOS or Linux
     * @param WIN Windows Base Operating System
     */
    namespace OS {
        enum OperatingSystems {
            UNIX,
            WIN
        };
    }
    # define enabled true
    # define disabled false
    # define safe true
    # define unsafe false
    # define connected true
    # define disconnected false
# endif // __QOST_DEFINITIONS