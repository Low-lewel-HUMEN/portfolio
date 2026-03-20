# Notes struct
* [Variable name style](#variable-name-style)

# Variable name style
* Строго венгерская нотация WinAPI:

**NUMBERS**:
| prefix                         | type                           | example                        |
|--------------------------------|--------------------------------|--------------------------------|
|                                |                                |                                |
| b                              | UNSIGNED BYTE               +8 | bMask                          |
| w                              | UNSIGNED WORD              +16 | wMask                          |
| ul                             | UNSIGNED LONG              +32 | ulMask                         |
| ull                            | UNSIGNED LONG LONG         +64 | ullMask                        |
| sb                             | SIGNED BYTE                 -8 | sbMask                         |
| sw                             | SIGNED WORD                -16 | swMask                         |
| l                              | SIGNED LONG                -32 | lMask                          |
| ll                             | SIGNED LONG LONG           -64 | llMask                         |


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