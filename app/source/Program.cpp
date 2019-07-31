/**
 * Entry point to an operating system main program.
 *
 * @author    Sergey Baigudin, sergey@baigudin.software
 * @copyright 2019, Embedded Team, Sergey Baigudin
 * @license   http://embedded.team/license/
 */
#include "Program.hpp"
#include "library.String.hpp"

namespace local
{
    /**
     * Starts executing an operating system main program.
     *
     * @return zero, or error code if an error has been occurred.
     */
    int32 Program::start()
    {
        library::String<char,0> str("Hello, world!");
	    volatile static bool isRun = true;
        while( isRun ){}
        return 0;
    }
}
