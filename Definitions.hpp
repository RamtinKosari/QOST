# ifndef __QOST_DEFINITIONS
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