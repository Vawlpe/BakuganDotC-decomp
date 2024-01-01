#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint ** FUN_08a13120(int param_1,uint **param_2)

{
  short sVar1;
  int iVar2;
  uint **ppuVar3;
  uint **ppuVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != (uint **)0x0) {
    iVar5 = 0;
    do {
      iVar2 = param_1 * 0x24;
      ppuVar4 = *(uint ***)(&DAT_08af1350 + iVar2);
      if (ppuVar4 == (uint **)0x0) {
LAB_08a13174:
        ppuVar3 = *(uint ***)(&DAT_08af1354 + iVar2);
      }
      else {
        if (param_2 < ppuVar4) {
          if (*ppuVar4 <= param_2) {
            *(short *)((int)ppuVar4 + 0xe) = *(short *)((int)ppuVar4 + 0xe) + 1;
            return param_2;
          }
          goto LAB_08a13174;
        }
        ppuVar3 = *(uint ***)(&DAT_08af1354 + iVar2);
      }
      if (ppuVar3 == (uint **)0x0) {
LAB_08a13198:
        ppuVar3 = *(uint ***)(&DAT_08af135c + iVar2);
      }
      else {
        if (param_2 < ppuVar3) {
          if (*ppuVar3 <= param_2) {
            sVar1 = *(short *)((int)ppuVar3 + 0xe);
LAB_08a1321c:
            *(uint ***)(&DAT_08af1354 + iVar2) = ppuVar4;
            *(uint ***)(&DAT_08af1350 + iVar2) = ppuVar3;
            *(short *)((int)ppuVar3 + 0xe) = sVar1 + 1;
            return param_2;
          }
          goto LAB_08a13198;
        }
        ppuVar3 = *(uint ***)(&DAT_08af135c + iVar2);
      }
      if (param_2 < ppuVar3) {
LAB_08a131f0:
        iVar6 = (param_1 + 1) / 3 + (param_1 + 1 >> 0x1f);
      }
      else {
        iVar6 = (param_1 + 1) / 3 + (param_1 + 1 >> 0x1f);
        if (param_2 < *(uint ***)(&DAT_08af1360 + iVar2)) {
          ppuVar3 = *(uint ***)(&DAT_08af134c + iVar2);
          while (ppuVar3 != (uint **)0x0) {
            if (param_2 < ppuVar3) {
              if (*ppuVar3 <= param_2) {
                sVar1 = *(short *)((int)ppuVar3 + 0xe);
                goto LAB_08a1321c;
              }
              ppuVar3 = (uint **)ppuVar3[2];
            }
            else {
              ppuVar3 = (uint **)ppuVar3[2];
            }
          }
          goto LAB_08a131f0;
        }
      }
      iVar5 = iVar5 + 1;
      param_1 = param_1 + 1 + (iVar6 - (param_1 + 1 >> 0x1f)) * -3;
    } while (iVar5 != 3);
  }
  return param_2;
}

