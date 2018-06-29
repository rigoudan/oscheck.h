# oscheck.h
a header file use include to check what the current system is.

## Usage

```c
#include "oscheck.h"
```

if current system is Linux, then macro os_linux will be defined.

```c
#ifdef os_linux
xxx
#endif
```

if current system is Win, then macro os_win will be defined.

```c
#ifdef os_win
xxx
#endif
```

