# strobf
A dead simple string obfuscation utility, capable of using a defined "key" to obfuscate a string into a unique-per-key obfuscation string. Reversal is also possible.
This header library is designed with 0 dependencies in mind, making it capable of running on every system, every os, every architecture.

## Using
Simply download the repo, and copy `strobf.h` to your C source directories.
Then, `#include "strobf.h"` as needed and make use of `strobf()` to obfuscate, or `obfstr()` to reverse the process as needed.

## License
All code in this repo is subject to the GNU General Public License v3.0. Please be mindful of this when forking, download, and redistributing.
