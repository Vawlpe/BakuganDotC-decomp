#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08804000(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  uint uVar10;
  
  if ((DAT_08aac7d8 == 0) && (param_1 == 0xffffffff)) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    uVar2 = FUN_089d7d74(0x18c0,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08aac7d8 = uVar2;
    return;
  }
  ppuVar8 = &PTR_s_bfx_133p_02_03_08a338c8;
  if (DAT_08aac7dc == '\0') {
    DAT_08aac7dc = '\x01';
    uVar10 = 0;
    ppuVar9 = ppuVar8;
    do {
      iVar4 = FUN_089f7720(*ppuVar9);
      if (iVar4 != 0) {
        puVar3 = (undefined4 *)FUN_089f7108();
        iVar4 = DAT_08aac7d8;
        iVar6 = 0;
        if (*(short *)((int)ppuVar9 + 6) != 0) {
          do {
            *(undefined4 *)(iVar4 + ((uint)*(ushort *)(ppuVar9 + 1) + iVar6) * 4) = *puVar3;
            iVar6 = iVar6 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar6 < (int)(uint)*(ushort *)((int)ppuVar9 + 6));
        }
      }
      uVar10 = uVar10 + 1;
      ppuVar9 = ppuVar9 + 2;
    } while (uVar10 < 6);
  }
  uVar10 = 0;
  do {
    iVar4 = FUN_089f7720(*ppuVar8);
    if (iVar4 != 0) {
      puVar5 = (undefined *)FUN_089f7108(iVar4);
      iVar4 = DAT_08aac7d8;
      iVar6 = 0;
      if (*(short *)((int)ppuVar8 + 6) != 0) {
        do {
          uVar7 = *(uint *)(iVar4 + ((uint)*(ushort *)(ppuVar8 + 1) + iVar6) * 4);
          iVar6 = iVar6 + 1;
          *puVar5 = (char)(((uVar7 & 0xff) * (param_1 & 0xff)) / 0xff);
          puVar5[1] = (char)(((uVar7 >> 8 & 0xff) * (param_1 >> 8 & 0xff)) / 0xff);
          puVar5[2] = (char)(((uVar7 >> 0x10 & 0xff) * (param_1 >> 0x10 & 0xff)) / 0xff);
          puVar5[3] = (char)(((uVar7 >> 0x18) * (param_1 >> 0x18)) / 0xff);
          puVar5 = puVar5 + 4;
        } while (iVar6 < (int)(uint)*(ushort *)((int)ppuVar8 + 6));
      }
    }
    uVar10 = uVar10 + 1;
    ppuVar8 = ppuVar8 + 2;
  } while (uVar10 < 6);
  return;
}

