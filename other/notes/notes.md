# Notes struct
* [Variable name style](#variable-name-style)

# Variable name style
* Строго венгерская нотация WinAPI:

**NUMBERS**:
| prefix                         | type                           | example                        |
|--------------------------------|--------------------------------|--------------------------------|
|                                |                                |                                |
| ub                             | UNSIGNED BYTE               +8 | ubMask                         |
| uw                             | UNSIGNED WORD              +16 | uwMask                         |
| ul                             | UNSIGNED LONG              +32 | ulMask                         |
| ull                            | UNSIGNED LONG LONG         +64 | ullMask                        |
| b                              | SIGNED BYTE                 -8 | bMask                          |
| w                              | SIGNED WORD                -16 | wMask                          |
| l                              | SIGNED LONG                -32 | lMask                          |
| ll                             | SIGNED LONG LONG           -64 | llMask                         |
| st                             | SIZE_T                    +MAX | stMask


**OTHER TYPE**:
| prefix                         | type                           | example                        |
|--------------------------------|--------------------------------|--------------------------------|
|                                |                                |                                |
| bl                             | BOOL                           | blMask                         |
| s                              | STRING                         | sMask                          |
| sz                             | STRING WITH ZERO               | szMask                         |
| lp                             | POINTER                        | lpMask                         |
| h                              | HANDLE                         | hMask                          |
| fn                             | FUNCTION                       | FnMask                         |