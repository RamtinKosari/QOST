# ifndef __QOST_CORE
    /**
     * @file Core.hpp
     * @author Ramtin Kosari(ramtinkosari&gmail.com)
     * @brief Q Operating System Tools's Core Macro
     * @version 0.1
     * @date 2023-03-16
     */
    # define __QOST_CORE
    //-- Check Compiler
    # if defined(__GNUC__) || defined(__clang__)
        /**
         * @note GNU and Clang Compiler has Their Own Settings
         */
        # define DEFAULT_COMPILER 0
    # elif defined(__MINGW32__) || defined(__MINGW64__)
        /**
         * @note MinGW Compiler has Its Own Settings
         */
        # define DEFAULT_COMPILER 1
    # endif // Check Compiler
    //-- Check Operating System
    # if defined(unix) || defined(__unix) || defined(__unix__) || defined(__APPLE__) || defined(__MACH__) 
        /**
         * @note Unix Based Operating System has Some Unique
         * Libraries to be Included
         */
        # define DEFAULT_OS 0
        # ifndef _X11_XLIB_H_
            # include <X11/Xlib.h>
        # endif // _X11_XLIB_H_
    # elif defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__)
        /**
         * @note Windows Operating System has Some Unique
         * Libraries to be Included
         */
        # define DEFAULT_OS 1
        # ifndef _WCTYPE_H
            # include <wctype.h>
        # endif // _WCTYPE_h
        # include <windows.h>
    # endif // Check Operating System
    //-- Check and Include OpenCV
    # ifndef OPENCV_HIGHGUI_HPP
        // # include <opencv4/opencv2/highgui.hpp>
        // # include <opencv4/opencv2/imgproc.hpp>
    # endif // Check OpenCV
    //-- Include Configs Header
    # ifndef __QOST_CONFIGS
        # include "Configs.hpp"
    # endif // __QOST_CONFIGS
    //-- Includes Definitions Header
    //-- Include Needed Libraries
    # include <iostream>
    # include <vector>
    # include <string>
# endif // __QOST_CORE