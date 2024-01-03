#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089a95e4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (*(byte *)(param_1 + 0xe3c) == 0) {
    DAT_08ac0e70 = 1;
    iVar3 = FUN_089bf6e8(0x1fe,100);
    iVar2 = FUN_0880dc00("DWMesHelp");
    FUN_088cc354(iVar2);
    FUN_0890e844(*(undefined4 *)(iVar2 + (uint)*(byte *)(param_1 + 0xe3d) * 4));
    if (*(byte *)(param_1 + 0xe3d) < 4) {
      *(undefined4 *)(iVar3 + 0x7c) = 1;
      cVar1 = *(char *)(param_1 + 0xe3c);
    }
    else {
      *(undefined4 *)(iVar3 + 0x84) = 1;
      cVar1 = *(char *)(param_1 + 0xe3c);
    }
    *(char *)(param_1 + 0xe3c) = cVar1 + '\x01';
  }
  else {
    if (1 < *(byte *)(param_1 + 0xe3c)) {
      piVar4 = (int *)DONE_Get_DAT_08AAC9E0();
      if ((*(ushort *)(*piVar4 + 0x6a6) & 1) == 0) {
        piVar4 = (int *)DONE_Get_DAT_08AAC9E0();
        if ((*(ushort *)(*piVar4 + 0x6a6) & 2) != 0) {
          piVar4 = (int *)DONE_Get_DAT_08AAC9E0();
          *(ushort *)(*piVar4 + 0x6a6) = *(ushort *)(*piVar4 + 0x6a6) & 0xfffd;
          *(undefined *)(param_1 + 0xe3e) = 1;
        }
      }
      else {
        if (*(byte *)(param_1 + 0xe3d) < 6) {
          FUN_089a95a4(param_1,*(byte *)(param_1 + 0xe3d) + 1);
          return 0;
        }
        piVar4 = (int *)DONE_Get_DAT_08AAC9E0();
        *(ushort *)(*piVar4 + 0x6a6) = *(ushort *)(*piVar4 + 0x6a6) & 0xfffe;
        *(undefined *)(param_1 + 0xe3e) = 1;
      }
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar3 = FUN_089bf93c(0x1fe,1);
    if (iVar3 == 0) {
      iVar3 = FUN_0890e868();
      if (iVar3 == 1) {
        *(undefined *)(param_1 + 0xe3e) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xe3e) = 1;
      }
      *(undefined *)(param_1 + 0xe3c) = 2;
    }
  }
  return 0;
}

