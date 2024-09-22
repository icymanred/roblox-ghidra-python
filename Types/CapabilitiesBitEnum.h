typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long long    GUID;
typedef pointer32 ImageBaseOffset32;

typedef long double    longdouble;
typedef long long    longlong;
typedef unsigned long long    qword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined5;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    wchar16;
typedef short    wchar_t;
typedef unsigned short    word;
typedef enum Capabilities { /* Roblox script capabilities */
    Plugin=0,
    LocalUser=1,
    WritePlayer=2,
    RobloxScript=3,
    RobloxEngine=4,
    NotAccessible=5,
    RunClientScript=8,
    RunServerScript=9,
    AccessOutsideWrite=11,
    Unassigned=15,
    AssetRequire=16,
    LoadString=17,
    ScriptGlobals=18,
    CreateInstances=19,
    Basic=20,
    Audio=21,
    DataStore=22,
    Network=23,
    Physics=24,
    UI=25,
    CSG=26,
    Chat=27,
    Animation=28,
    Avatar=29,
    Assistant=62,
    Restricted=63
} Capabilities;

