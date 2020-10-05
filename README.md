# libccsds
A library to handle several CCSDS routines

Why? Throughout my projects, I very often ended up needing some common routines (eg, deframing, demuxing) to deal with CCSDS protocols. There was no library fitting this purpose already (at least, not in C/C++) and copy-pasting code between projects in the long run is... Not a good thing so I decided to put all that in a nice lightweight library!

### Features
Currently this library provides :
- Defined data structures and parsing methods (from binary) for CADU, VCDU, M-PDU, and CCSDS frames
- A CADU deframer, based on a sync machine for better performances (based on [this](http://www.sat.cc.ua/data/CADU%20Frame%20Synchro.pdf))
- A CCSDS demuxer, taking input from a VCID and extracting a stream of CCSDS frames
- A simple derandomizer, taking randomized CADUs and doing the work

This is very much a work-in-progress, so some abstraction (eg, for different frame sizes, VCID encryption marker parsing, etc) is not yet implemented as well as all the planned modularity features.

### Building
This project uses CMake, so all you need to do is those commands :

```
mkdir build && cd build
cmake ..
sudo make install
```
