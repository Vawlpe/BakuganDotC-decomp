#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089a50c0(uint param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = (param_1 & 0xff) * 0x10;
  if ((&DAT_08b0105c)[iVar1] == 0) {
    iVar2 = *(int *)(&DAT_08b01050 + iVar1);
    fVar5 = (float)(uint)(byte)(&DAT_08b0105d)[iVar1];
    fVar3 = (float)(uint)(byte)(&DAT_08b0105e)[iVar1];
    fVar6 = *(float *)(&DAT_08b01058 + iVar1) + 1.0 / *(float *)(&DAT_08b01054 + iVar1);
    fVar4 = (float)(uint)(byte)(&DAT_08b0105f)[iVar1];
    *(float *)(&DAT_08b01058 + iVar1) = fVar6;
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
      *(undefined4 *)(&DAT_08b01058 + iVar1) = 0x3f800000;
      (&DAT_08b0105c)[iVar1] = 1;
    }
  }
  else {
    if (1 < (byte)(&DAT_08b0105c)[iVar1]) {
      return 1;
    }
    iVar2 = *(int *)(&DAT_08b01050 + iVar1);
    fVar5 = (float)(uint)(byte)(&DAT_08b0105d)[iVar1];
    fVar3 = (float)(uint)(byte)(&DAT_08b0105e)[iVar1];
    fVar6 = *(float *)(&DAT_08b01058 + iVar1) - 1.0 / *(float *)(&DAT_08b01054 + iVar1);
    fVar4 = (float)(uint)(byte)(&DAT_08b0105f)[iVar1];
    *(float *)(&DAT_08b01058 + iVar1) = fVar6;
    if (fVar6 <= 0.0) {
      *(undefined4 *)(&DAT_08b01058 + iVar1) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
      *(float *)(iVar2 + 0xc0) = fVar5 * 0.0;
      *(float *)(iVar2 + 0xc4) = fVar3 * 0.0;
      *(float *)(iVar2 + 200) = fVar4 * 0.0;
      (&DAT_08b0105c)[iVar1] = (&DAT_08b0105c)[iVar1] + '\x01';
      return 1;
    }
  }
  *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
  *(float *)(iVar2 + 0xc0) = fVar6 * fVar5;
  *(float *)(iVar2 + 0xc4) = fVar6 * fVar3;
  *(float *)(iVar2 + 200) = fVar6 * fVar4;
  return 0;
}

