#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089bed14(int param_1)

{
  uint extraout_v1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = DAT_08ac521c * 2;
  if ((DAT_08ac5218 & 0x80000000) != 0) {
    iVar1 = iVar1 + 1;
  }
  uVar2 = iVar1 * 2;
  if ((DAT_08ac5218 & 0x40000000) != 0) {
    uVar2 = uVar2 + 1;
  }
  uVar3 = DAT_08ac5224 * 2;
  if ((DAT_08ac5220 & 0x80000000) != 0) {
    uVar3 = uVar3 + 1;
  }
  DAT_08ac5224 = DAT_08ac5220;
  DAT_08ac5220 = DAT_08ac521c;
  uVar2 = uVar2 ^ uVar3;
  DAT_08ac521c = DAT_08ac5218;
  DAT_08ac5218 = uVar2;
  if (param_1 != 0) {
    FUN_08a0d1f4(uVar2,0,param_1,0);
    return extraout_v1;
  }
  return uVar2;
}

