#include "_protocols.h"

const Protocol* protocols[] = {
    &protocol_continuity,
    &protocol_easysetup,
    &protocol_fastpair,
    &protocol_lovespouse,
    &protocol_nameflood,
    &protocol_swiftpair,

    &protocol_magicband,
};

const size_t protocols_count = COUNT_OF(protocols);
