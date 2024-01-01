#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b54b8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  bVar1 = false;
  if ((*(int *)(param_1 + 0x140) != 0) && (*(int *)(param_1 + 0x140) != 2)) {
    iVar4 = *(int *)(param_1 + 0xec);
    uVar7 = 0;
    if (0 < iVar4) {
      iVar9 = 0;
      iVar10 = 0;
      do {
        uVar8 = 1 << (uVar7 & 0x1f);
        if ((*(uint *)(param_1 + 0x148) & uVar8) != 0) {
          cVar6 = '\0';
          iVar4 = *(int *)(*(int *)(param_1 + 0x19c) + iVar9 + 0x164);
          fVar11 = (float)(**(code **)(iVar4 + 0x14))
                                    (*(int *)(param_1 + 0x19c) + iVar9 +
                                     (int)*(short *)(iVar4 + 0x10));
          iVar4 = param_1 + uVar7;
          if (fVar11 <= 0.5) {
            cVar6 = *(char *)(iVar4 + 0x14c) + '\x01';
          }
          *(char *)(iVar4 + 0x14c) = cVar6;
          if (*(byte *)(iVar4 + 0x14c) < 0x3d) {
            iVar5 = *(int *)(param_1 + 0x19c);
          }
          else {
            *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & ~uVar8;
            iVar5 = *(int *)(param_1 + 0x19c);
          }
          iVar5 = *(int *)(iVar5 + iVar9 + 0x110);
          bVar1 = true;
          if (iVar5 < 0x10) {
            if (*(int *)(*(int *)(param_1 + 0x1c8) + iVar10) != iVar5) {
              if (*(char *)(iVar4 + 0x16c) == '\0') {
                if (iVar5 % 5 == 0) {
                  if (*(int *)(param_1 + 0x1cc) == 0) {
                    cVar6 = *(char *)(iVar4 + 0x16c);
                  }
                  else {
                    iVar2 = FUN_088ac9ac(1);
                    if (iVar2 == 0) {
                      cVar6 = *(char *)(iVar4 + 0x16c);
                    }
                    else {
                      iVar2 = FUN_089bffd4();
                      if (iVar2 == 0) {
                        cVar6 = *(char *)(iVar4 + 0x16c);
                      }
                      else {
                        uVar3 = FUN_089bfff0();
                        FUN_089c00c4(uVar3,*(undefined4 *)(param_1 + 0x1cc),
                                     *(int *)(param_1 + 0x19c) + iVar9 + 0xa0,0,1);
                        cVar6 = *(char *)(iVar4 + 0x16c);
                      }
                    }
                  }
                }
                else {
                  cVar6 = *(char *)(iVar4 + 0x16c);
                }
                *(char *)(iVar4 + 0x16c) = cVar6 + '\x01';
                iVar4 = *(int *)(param_1 + 0x1c8);
              }
              else {
                iVar4 = *(int *)(param_1 + 0x1c8);
              }
              *(int *)(iVar4 + iVar10) = iVar5;
              iVar4 = *(int *)(param_1 + 0xec);
              goto LAB_088b5670;
            }
            *(undefined *)(iVar4 + 0x16c) = 0;
          }
          else {
            *(undefined *)(iVar4 + 0x16c) = 0;
          }
          iVar4 = *(int *)(param_1 + 0xec);
        }
LAB_088b5670:
        uVar7 = uVar7 + 1;
        iVar9 = iVar9 + 0x170;
        iVar10 = iVar10 + 4;
      } while ((int)uVar7 < iVar4);
    }
  }
  if ((!bVar1) || (iVar4 = *(int *)(param_1 + 0x140), *(int *)(param_1 + 0x1c0) < iVar4)) {
    fVar11 = *(float *)(param_1 + 0x18c) - 0.03333334;
    *(float *)(param_1 + 0x18c) = fVar11;
    if (fVar11 <= 0.0) {
      FUN_089de940(param_1,0);
      return;
    }
    *(float *)(param_1 + 0x6c) = fVar11;
    iVar4 = *(int *)(param_1 + 0x140);
  }
  *(int *)(param_1 + 0x140) = iVar4 + 1;
  return;
}

