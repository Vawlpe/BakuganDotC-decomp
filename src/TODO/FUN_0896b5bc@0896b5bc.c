#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896b5bc(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (*(char *)(param_1 + 0x29bc) == '\0') {
    iVar3 = 0;
    if ('\0' < *(char *)(param_1 + 0x29bd)) {
      iVar5 = 0;
      iVar8 = 0;
      uVar2 = param_1;
      uVar9 = param_1;
      do {
        iVar6 = 0;
        iVar4 = 0;
        do {
          iVar1 = DONE_Get_DAT_08AAC9E0(uVar2);
          if (*(int *)(iVar1 + 4) != 0) {
            *(undefined4 *)(*(int *)(iVar1 + 4) + iVar5 + iVar4 + 0xd8) = 0xff;
          }
          iVar6 = iVar6 + 1;
          uVar2 = (uint)(iVar6 < 2);
          iVar4 = iVar4 + 4;
        } while (uVar2 != 0);
        uVar7 = 0;
        iVar4 = 0;
        uVar2 = uVar9;
        do {
          if (((*(byte *)(uVar2 + 0x29fc) & 1) != 0) && (uVar7 < 2)) {
            iVar6 = DONE_Get_DAT_08AAC9E0();
            if (*(int *)(iVar6 + 4) != 0) {
              *(uint *)(*(int *)(iVar6 + 4) + iVar5 + uVar7 * 4 + 0xd8) =
                   (uint)*(byte *)(uVar2 + 0x29ec);
            }
            uVar7 = uVar7 + 1 & 0xff;
          }
          iVar4 = iVar4 + 1;
          uVar2 = uVar9 + iVar4;
        } while (iVar4 < 4);
        iVar4 = DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar4 + 4) != 0) {
          *(uint *)(*(int *)(iVar4 + 4) + iVar8 + 0x118) = (uint)*(byte *)(param_1 + iVar3 + 0x2a4c)
          ;
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 8;
        iVar8 = iVar8 + 4;
        uVar2 = (uint)(iVar3 < *(char *)(param_1 + 0x29bd));
        uVar9 = uVar9 + 4;
      } while (uVar2 != 0);
    }
    FUN_0890a598(param_1,1);
  }
  else {
    FUN_0890a598(param_1,0);
  }
  return;
}

