#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089359f4(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  cVar1 = *(char *)(param_1 + 0x76);
  iVar6 = param_1 + cVar1;
  if ((*(byte *)(iVar6 + 0x19fc) & 1) == 0) {
    bVar2 = *(byte *)(iVar6 + 0x19fc);
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1c);
    *(undefined *)(iVar6 + 0x1a00) = 0;
    iVar6 = *(int *)(iVar7 + cVar1 * 4 + 0x88);
    *(uint *)(iVar6 + 0xd0) = *(uint *)(iVar6 + 0xd0) & 0xfffffffe;
    bVar2 = *(byte *)(param_1 + *(char *)(param_1 + 0x76) + 0x19fc);
  }
  if ((bVar2 & 1) != 0) {
    piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
    uVar5 = (uint)*(byte *)(param_1 + *(char *)(param_1 + 0x76) + 0x19f8);
    iVar6 = *piVar3 + ((int)uVar5 >> 3);
    if ((int)uVar5 < 0) {
      bVar2 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
    }
    else {
      bVar2 = (byte)(1 << (uVar5 & 7));
    }
    *(byte *)(iVar6 + 0x531) = *(byte *)(iVar6 + 0x531) | bVar2;
  }
  iVar7 = 0;
  iVar6 = param_1;
  do {
    if (*(char *)(iVar6 + 0x1a04) == -1) {
      piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
      piVar4 = (int *)_DONE_Get_DAT_08AAC9E0();
      *(undefined *)(*piVar3 + *(int *)(*piVar4 + 0x48c) * 2 + iVar7 + 0x4e4) = 0xff;
    }
    else {
      piVar3 = (int *)_DONE_Get_DAT_08AAC9E0();
      piVar4 = (int *)_DONE_Get_DAT_08AAC9E0();
      *(undefined *)(*piVar3 + *(int *)(*piVar4 + 0x48c) * 2 + iVar7 + 0x4e4) =
           *(undefined *)(iVar6 + 0x1a04);
    }
    iVar7 = iVar7 + 1;
    iVar6 = param_1 + iVar7;
  } while (iVar7 < 2);
  return;
}

