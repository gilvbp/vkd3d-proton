static const DWORD execute_indirect_state_predication_cs_code_dxbc[] =
{
    0x43425844, 0x5a66c2bf, 0x0970d204, 0x92950097, 0x539d92eb, 0x00000001, 0x000000f8, 0x00000003,
    0x0000002c, 0x0000003c, 0x0000004c, 0x4e475349, 0x00000008, 0x00000000, 0x00000008, 0x4e47534f,
    0x00000008, 0x00000000, 0x00000008, 0x58454853, 0x000000a4, 0x00050050, 0x00000029, 0x0100086a,
    0x04000059, 0x00208e46, 0x00000000, 0x00000001, 0x04000059, 0x00208e46, 0x00000001, 0x00000001,
    0x0400009e, 0x0011e000, 0x00000000, 0x00000004, 0x02000068, 0x00000001, 0x0400009b, 0x00000001,
    0x00000001, 0x00000001, 0x06000036, 0x00100012, 0x00000000, 0x0020800a, 0x00000000, 0x00000000,
    0x05000036, 0x00100022, 0x00000000, 0x00004001, 0x00000000, 0x080000ad, 0x0011e000, 0x00000000,
    0x00100046, 0x00000000, 0x0020800a, 0x00000001, 0x00000000, 0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE execute_indirect_state_predication_cs_dxbc = { execute_indirect_state_predication_cs_code_dxbc, sizeof(execute_indirect_state_predication_cs_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
