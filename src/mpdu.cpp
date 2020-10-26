#include "mpdu.h"
#include <cstdint>
#include <cmath>

namespace libccsds
{
    // Parse MPDU from CADU
    MPDU parseMPDU(CADU &cadu, bool hasVCDUInsertZone)
    {
        uint16_t first_header_pointer = (cadu[hasVCDUInsertZone ? 12 : 10] % (int)pow(2, 3)) << 8 | cadu[hasVCDUInsertZone ? 13 : 11];
        return {first_header_pointer, &cadu[hasVCDUInsertZone ? 14 : 12]};
    }

} // namespace libccsds
