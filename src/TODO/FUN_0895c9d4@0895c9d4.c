#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895c9d4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x4cd8) == '\0') {
    FUN_0890a598(param_1,1);
    FUN_0895ad80(param_1);
    iVar2 = 0;
    if ('\0' < *(char *)(param_1 + 0x4cda)) {
      iVar4 = 0;
      iVar7 = 0;
      iVar6 = param_1;
      do {
        iVar5 = 0;
        iVar3 = 0;
        do {
          iVar1 = _DONE_Get_DAT_08AAC9E0();
          if (*(int *)(iVar1 + 4) != 0) {
            *(undefined4 *)(*(int *)(iVar1 + 4) + iVar4 + iVar3 + 0xd8) = 0xff;
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + 4;
        } while (iVar5 < 2);
        iVar3 = 0;
        iVar5 = 0;
        do {
          if (*(char *)(iVar6 + iVar3 + 0x4fd8) != -1) {
            iVar1 = _DONE_Get_DAT_08AAC9E0();
            if (*(int *)(iVar1 + 4) != 0) {
              *(uint *)(*(int *)(iVar1 + 4) + iVar4 + iVar5 + 0xd8) =
                   (uint)*(byte *)(iVar6 + iVar3 + 0x4fd8);
            }
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar3 < 2);
        iVar3 = _DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar3 + 4) != 0) {
          *(uint *)(*(int *)(iVar3 + 4) + iVar7 + 0x118) = (uint)*(byte *)(param_1 + iVar2 + 0x5020)
          ;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 8;
        iVar6 = iVar6 + 2;
        iVar7 = iVar7 + 4;
      } while (iVar2 < *(char *)(param_1 + 0x4cda));
    }
    FUN_0895c834(param_1);
    FUN_089b1c54(0,*(uint *)(DAT_08ac58c4 + 4) & 0xff);
  }
  else {
    FUN_0890a598(param_1,0);
  }
  return;
}

