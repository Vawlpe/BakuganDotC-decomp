#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eba08(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined auStack_60 [64];
  
  uVar3 = DAT_08b00bd6;
  uVar2 = DAT_08b00bd4;
  if (((*(byte *)(param_1 + 0x273) & 1) == 0) && (bVar1 = *(byte *)(param_1 + 0x26a), bVar1 < 5)) {
    if (bVar1 == 1) {
      *(undefined *)(param_1 + 0x26a) = 2;
    }
    else if (bVar1 == 2) {
      if (*(char *)(param_1 + 0x270) != '\x02') {
        iVar5 = 0;
        if (*(short *)(param_1 + 0x25e) == 0) {
          iVar5 = FUN_088eb718(param_1);
        }
        else if (*(short *)(param_1 + 0x25c) < 0) {
          *(short *)(param_1 + 0x25c) = *(short *)(param_1 + 0x25e);
          iVar5 = 1;
        }
        else {
          *(short *)(param_1 + 0x25c) = *(short *)(param_1 + 0x25c) + -1;
        }
        if (iVar5 != 0) {
          *(undefined2 *)(param_1 + 0x254) = 4;
          *(undefined *)(param_1 + 0x26a) = 4;
          FUN_089c879c(0x3dcccccd,1);
        }
      }
    }
    else if (bVar1 == 3) {
      iVar5 = *(short *)(param_1 + 0x25a) + -1;
      *(short *)(param_1 + 0x25a) = (short)iVar5;
      if (iVar5 * 0x10000 >> 0x10 < 0) {
        *(undefined2 *)(param_1 + 0x25a) = 200;
      }
    }
    else if (bVar1 == 4) {
      if (*(short *)(param_1 + 0x254) < 0) {
        iVar5 = FUN_089bf93c(0x1a4,1);
        if (iVar5 == 0) {
          *(undefined *)(param_1 + 0x26a) = 0;
          *(short *)(param_1 + 0x256) = *(short *)(param_1 + 0x256) + 1;
        }
        else {
          *(undefined *)(param_1 + 0x26a) = 2;
        }
      }
      else {
        *(short *)(param_1 + 0x254) = *(short *)(param_1 + 0x254) + -1;
      }
    }
    else if (*(ushort *)(param_1 + 0x256) < *(ushort *)(param_1 + 600)) {
      uVar4 = FUN_0880dd54();
      FUN_089b4c84(auStack_60,"mes_f%d_%02d_%s.bin",uVar2,uVar3,uVar4);
      iVar5 = FUN_089be054(DAT_08ac520c,auStack_60);
      iVar6 = FUN_088cc354(iVar5);
      DAT_08abea20 = 3;
      iVar8 = param_1 + (uint)*(ushort *)(param_1 + 0x256) * 2;
      pcVar7 = "ctllx";
      iVar9 = (int)*(short *)(iVar8 + 0x50);
      if (iVar9 < iVar6) {
        pcVar7 = *(char **)(iVar5 + iVar9 * 4);
      }
      uVar4 = FUN_088cc550(pcVar7,(int)*(short *)(iVar8 + 0x150));
      *(undefined4 *)(param_1 + 0x34) = uVar4;
      DAT_08abea20 = 0;
      *(undefined *)(param_1 + 0x26a) = 1;
    }
  }
  return;
}

