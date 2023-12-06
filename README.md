# strobf
A dead-simple string obfuscation library. Uses a password-like "key" to obfuscate character contents in-plce, supporting both obfuscation and reversal. Dependency-free, capable of running on any system.

## How to use?
Download and import `strobf.h`. Use `strobf()` to obfuscate a string, and `obfstr()` to reverse the process. Note that both these functions modify the character buffer in-place.

## License
All code in this repo is subject to the GNU General Public License v3.0. Please be mindful of this when forking, download, and redistributing.
