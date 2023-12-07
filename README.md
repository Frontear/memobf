# memobf
A dead simple memory obfuscation library, capable of obfuscating any memory buffer with a given key. Supports reversal and in-place modification. Dependency free and suited for any system.

## How to use
- `#include "memobf.h"` in your projects
- Use `memobf()` to obfuscate a block of memory to any extent in bytes.
- Use `obfmem()` to reverse the process (use the same key or the data will not be returned correctly)

## License
All code in this repo is subject to the GNU General Public License v3.0. Please be mindful of this when forking, download, and redistributing.
