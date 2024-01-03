#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08996774(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  char local_40 [40];
  
  pcVar9 = local_40;
  pcVar6 = local_40;
  pcVar7 = local_40;
  pcVar8 = local_40;
  local_40[0] = '\x01';
  local_40[1] = 1;
  local_40[2] = 1;
  local_40[3] = 1;
  local_40[4] = 1;
  local_40[5] = 1;
  local_40[6] = 1;
  local_40[7] = 1;
  local_40[8] = 9;
  local_40[9] = 0;
  local_40[10] = 1;
  local_40[11] = 4;
  local_40[12] = 3;
  local_40[13] = 2;
  local_40[14] = 5;
  local_40[15] = 6;
  local_40[16] = 7;
  local_40[17] = 0;
  local_40[18] = 1;
  local_40[19] = 4;
  local_40[20] = 3;
  local_40[21] = 2;
  local_40[22] = 5;
  local_40[23] = 6;
  local_40[24] = 0;
  local_40[25] = 0;
  local_40[26] = 0;
  local_40[27] = 0;
  local_40[28] = 0;
  local_40[29] = 0;
  local_40[30] = 0;
  local_40[31] = 0;
  local_40[32] = 0;
  local_40[33] = 1;
  local_40[34] = 1;
  local_40[35] = 1;
  local_40[36] = 1;
  local_40[37] = 1;
  local_40[38] = 0;
  local_40[39] = 0;
  *(undefined *)(param_1 + 0x109c) = 0;
  *(undefined *)(param_1 + 0x109d) = 0xff;
  *(undefined *)(param_1 + 0x109e) = 0;
  *(undefined *)(param_1 + 0x2268) = 0;
  *(undefined *)(param_1 + 0x2269) = 0;
  *(undefined *)(param_1 + 0x10b9) = 0;
  uVar10 = 0;
  do {
    if (*pcVar9 != '\0') {
      iVar1 = FUN_08996448(param_1);
      uVar5 = (uint)(byte)pcVar9[8];
      if (iVar1 == 0) {
        piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
        if ((int)uVar5 < 0) {
          uVar4 = -(-uVar5 & 7) & 0x1f;
        }
        else {
          uVar4 = uVar5 & 7;
        }
        if (((uint)*(byte *)(*piVar2 + ((int)uVar5 >> 3) + 0x8b) & 1 << uVar4) != 0) {
          *(byte *)(param_1 + 0x10b9) = *(byte *)(param_1 + 0x10b9) | (byte)(1 << (uVar10 & 0x1f));
        }
      }
      else {
        piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
        if ((int)uVar5 < 0) {
          uVar4 = -(-uVar5 & 7) & 0x1f;
        }
        else {
          uVar4 = uVar5 & 7;
        }
        if (((uint)*(byte *)(*piVar2 + ((int)uVar5 >> 3) + 0x8f) & 1 << uVar4) != 0) {
          *(byte *)(param_1 + 0x10b9) = *(byte *)(param_1 + 0x10b9) | (byte)(1 << (uVar10 & 0x1f));
        }
      }
    }
    uVar5 = uVar10 + 1;
    pcVar9 = local_40 + uVar10 + 1;
    uVar10 = uVar5;
  } while ((int)uVar5 < 8);
  *(undefined *)(param_1 + 0x10b8) = 0;
  *(undefined *)(param_1 + 0x10ba) = 0;
  uVar10 = 0;
  do {
    iVar1 = FUN_08996448(param_1);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 0x10b8) = *(byte *)(param_1 + 0x10b8) | (byte)(1 << (uVar10 & 0x1f));
    }
    else {
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      if (*(char *)(*piVar2 + 0x462) == '\0') {
        if (local_40[uVar10 + 0x20] == '\0') {
          if ((uVar10 == 6) && ((*(byte *)(param_1 + 0x10b9) & 0x40) != 0)) {
            *(byte *)(param_1 + 0x10b8) = *(byte *)(param_1 + 0x10b8) | 0x40;
            *(byte *)(param_1 + 0x10ba) = *(byte *)(param_1 + 0x10ba) | 0x40;
          }
        }
        else {
          *(byte *)(param_1 + 0x10b8) = *(byte *)(param_1 + 0x10b8) | (byte)(1 << (uVar10 & 0x1f));
        }
      }
      else if (uVar10 != 0) {
        *(byte *)(param_1 + 0x10b8) = *(byte *)(param_1 + 0x10b8) | (byte)(1 << (uVar10 & 0x1f));
      }
    }
    uVar10 = uVar10 + 1;
    uVar5 = 0;
  } while ((int)uVar10 < 8);
  uVar10 = 1;
  do {
    if ((*(byte *)(param_1 + 0x10b8) & uVar10) != 0) {
      *(char *)(param_1 + 0x109c) = (char)uVar5;
      break;
    }
    uVar5 = uVar5 + 1;
    uVar10 = 1 << (uVar5 & 0x1f);
  } while ((int)uVar5 < 8);
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 1;
    *(char *)(param_1 + iVar1 + 0x10a0) = pcVar6[8];
    pcVar6 = local_40 + iVar1 + 1;
    iVar1 = iVar3;
  } while (iVar3 < 8);
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 1;
    *(char *)(param_1 + iVar1 + 0x10a8) = pcVar7[0x10];
    pcVar7 = local_40 + iVar1 + 1;
    iVar1 = iVar3;
  } while (iVar3 < 8);
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 1;
    *(char *)(param_1 + iVar1 + 0x10b0) = pcVar8[0x18];
    pcVar8 = local_40 + iVar1 + 1;
    iVar1 = iVar3;
  } while (iVar3 < 8);
  *(undefined4 *)(param_1 + 0x1f04) = 0;
  *(undefined4 *)(param_1 + 0x21d0) = 0;
  *(undefined4 *)(param_1 + 0x21d4) = 0;
  *(undefined4 *)(param_1 + 0x21d8) = 0;
  *(undefined4 *)(param_1 + 0x21dc) = 0;
  memset_jak((undefined *)(param_1 + 0x21f0),0,0x60);
  *(undefined4 *)(param_1 + 0x2250) = 0;
  *(undefined *)(param_1 + 0x2254) = 0;
  *(undefined *)(param_1 + 0x2255) = 0;
  *(undefined *)(param_1 + 0x2256) = 0;
  *(undefined *)(param_1 + 0x226a) = 0;
  *(undefined4 *)(param_1 + 0x226c) = 0;
  *(undefined4 *)(param_1 + 0x2270) = 0;
  *(undefined4 *)(param_1 + 0x2274) = 0;
  *(undefined4 *)(param_1 + 0x2278) = 0;
  *(undefined4 *)(param_1 + 0x227c) = 0;
  *(undefined4 *)(param_1 + 0x2280) = 0;
  *(undefined4 *)(param_1 + 0x2284) = 0;
  *(undefined4 *)(param_1 + 0x2288) = 0;
  *(undefined4 *)(param_1 + 0x228c) = 0;
  *(undefined4 *)(param_1 + 0x2290) = 0;
  *(undefined *)(param_1 + 0x229c) = 0;
  *(undefined4 *)(param_1 + 0x2294) = 0;
  *(undefined4 *)(param_1 + 0x2298) = 0;
  *(undefined4 *)(param_1 + 0x22a0) = 0;
  *(undefined *)(param_1 + 0x226b) = 0;
  *(undefined4 *)(param_1 + 0x232c) = 0;
  memset_jak((undefined *)(param_1 + 0x10c0),0,0x10);
  FUN_08996474(param_1);
  memset_jak((undefined *)(param_1 + 0x1220),0,0x66c);
  iVar1 = FUN_08996448(param_1);
  *(bool *)(param_1 + 0x10bb) = iVar1 == 0;
  return;
}

