#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088954e0(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_58;
  undefined4 *local_54;
  int local_50;
  uint local_4c;
  
  iVar5 = -1;
  if (*(int *)(param_1 + 0x1a0) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
  }
  if (iVar5 < 0x15 || 0x20 < iVar5) {
    iVar7 = param_1 + 0xa0;
    iVar5 = (**(code **)(*(int *)(param_1 + 0xe8) + 0x14))
                      (iVar7 + *(short *)(*(int *)(param_1 + 0xe8) + 0x10));
    local_50 = iVar7;
    if (iVar5 == 0) {
      if ((*(char *)(param_1 + 0xc4) == '\0') &&
         (fVar9 = *(float *)(param_1 + 0xc0) + 0.03333334, *(float *)(param_1 + 0xc0) = fVar9,
         *(float *)(param_1 + 0xbc) <= fVar9)) {
        *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xbc);
        *(undefined *)(param_1 + 0xc4) = 1;
      }
      if (*(char *)(param_1 + 0xc4) == '\0') {
        iVar5 = *(int *)(param_1 + 0xe8);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x9e1);
        iVar5 = FUN_089bed14(99);
        if (iVar5 < cVar1) {
          uVar3 = FUN_088b67d4();
          local_54 = (undefined4 *)0x0;
          local_58 = 0;
          if (uVar3 != 0) {
            local_58 = uVar3;
            local_4c = uVar3;
            FUN_089d8634();
            uVar4 = FUN_089d81a4();
            FUN_089d816c(1);
            local_54 = (undefined4 *)FUN_089d7d74(uVar3 << 2,0,0);
            FUN_089d816c(uVar4);
            FUN_089d866c();
            uVar3 = 0;
            puVar6 = local_54;
            if (local_58 != 0) {
              do {
                *puVar6 = 0;
                uVar3 = uVar3 + 1;
                puVar6 = puVar6 + 1;
              } while (uVar3 < local_4c);
            }
          }
          iVar5 = 0;
          uVar3 = 0;
          bVar2 = true;
          if (DAT_08b00950 != 0) {
            iVar7 = DAT_08b00950;
            do {
              if (*(int *)(iVar7 + 0x44) == 3) {
                iVar8 = *(int *)(param_1 + 0x1a0) + 0x434;
                fVar9 = (float)FUN_08887b94(iVar8);
                iVar8 = FUN_08887a90(iVar8);
                fVar10 = (float)iVar8;
                if (iVar8 < 0) {
                  fVar10 = fVar10 + 4.294967e+09;
                }
                bVar2 = (fVar9 / fVar10) * 100.0 <= 70.0;
              }
              if (bVar2) {
                local_70 = *(undefined4 *)(iVar7 + 0x20);
                uStack_6c = *(undefined4 *)(iVar7 + 0x24);
                uStack_68 = *(undefined4 *)(iVar7 + 0x28);
                uStack_64 = *(undefined4 *)(iVar7 + 0x2c);
                fVar9 = (float)FUN_0888e238(0x447a0000,0x42b40000,param_1,&local_70);
                if ((fVar9 != 0.0) &&
                   (iVar8 = FUN_088931b8(param_1,(undefined4 *)(iVar7 + 0x20)), iVar8 == 0)) {
                  if (uVar3 < local_58) {
                    if (local_54[uVar3] != 1) {
                      local_54[uVar3] = 1;
                    }
                    iVar5 = iVar5 + 1;
                  }
                  else {
                    iVar5 = iVar5 + 1;
                  }
                }
              }
              iVar7 = *(int *)(iVar7 + 4);
              uVar3 = uVar3 + 1 & 0xff;
            } while (iVar7 != 0);
          }
          puVar6 = local_54;
          if (iVar5 != 0) {
            uVar3 = 0;
            iVar7 = DAT_08b00950;
            if (0 < iVar5 + -1) {
              do {
                uVar3 = uVar3 + 1 & 0xff;
                iVar7 = *(int *)(iVar7 + 4);
              } while ((int)uVar3 < iVar5 + -1);
            }
            if (iVar7 != 0) {
              *(undefined *)(param_1 + 0xb4) = 1;
              *(int *)(param_1 + 0xec) = iVar7;
            }
          }
          if (local_54 != (undefined4 *)0x0) {
            FUN_089d8634();
            FUN_089d7fd8(puVar6,0,0);
            FUN_089d866c();
          }
        }
        *(undefined4 *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 0xbc) = 0x3f800000;
        *(undefined *)(param_1 + 0xc4) = 0;
        iVar5 = *(int *)(param_1 + 0xe8);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0xe8);
    }
    uVar4 = (**(code **)(iVar5 + 0x14))(local_50 + *(short *)(iVar5 + 0x10));
    return uVar4;
  }
  return 0;
}

