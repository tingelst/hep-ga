[![Build Status](https://semaphoreci.com/api/v1/projects/94e5b3f9-7cf9-4ac1-a7eb-8f818089beec/444798/badge.svg)](https://semaphoreci.com/tingelst/hep-ga)
--

# hep-ga

## Project description
hep-ga is a C++11 library for efficient numeric calculations with geometric
algebra. It provides a template class for multi-vectors of G_{p,q} and
template-expressions for many operations such as addition, geometric product,
inner and outer product.

hep-ga was originally developed by Christopher Schwan (https://github.com/cschwan/hep-ga)

## Installation and testing


hep-ga is a header-only library which requires no compilation.

To build the examples and the unit tests use:
```
mkdir build
cd build
cmake ..
make
```

The unit tests can be executed using:
```
make tests
```

## Usage
See doxygen documentation.
