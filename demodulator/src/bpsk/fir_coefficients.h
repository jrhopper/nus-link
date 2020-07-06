// Filter defined in `make_coefficients.py` with the following parameters:
// taps: 5
// rate: 62500
// bandwidth: 18000
#if 1
#define FIR_STAGES 17
static float fir_coefficients[FIR_STAGES] = {
    -0.00904237869798609f,
    -0.013071949876398573f,
    0.049099829706487026f,
    -0.04181807059855932f,
    -0.06224753945694283f,
    0.16560598366331214f,
    -0.10028343191395284f,
    -0.11196225075134109f,
    0.23216104318347436f,
    -0.11196225075134109f,
    -0.10028343191395284f,
    0.1656059836633122f,
    -0.06224753945694283f,
    -0.0418180705985593f,
    0.049099829706487026f,
    -0.013071949876398585f,
    -0.00904237869798609f,
};
#else
#define FIR_STAGES 5
static float fir_coefficients[FIR_STAGES] = {
    0.007602129069420533f,
    -0.21697500566330508f,
    0.5508457305345488f,
    -0.21697500566330508f,
    0.007602129069420533f,
};
#endif