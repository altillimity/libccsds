#include "mpdu.h"
#include <cstdint>
#include <cmath>

namespace libccsds
{
    // Parse MPDU from CADU
    MPDU parseMPDU(CADU &cadu)
    {
        uint16_t first_header_pointer = (cadu[10] % (int)pow(2, 3)) << 8 | cadu[11];
        return {first_header_pointer, &cadu[12]};
    }

} // namespace libccsds
