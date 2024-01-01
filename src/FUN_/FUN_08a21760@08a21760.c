#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a21760(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)(DAT_08afdcc0 * 1000000) / 0xac44;
  uVar4 = 0;
  iVar3 = 0;
  do {
    if ((*(char **)((int)&DAT_08afdcc4 + iVar3) != (char *)0x0) &&
       (**(char **)((int)&DAT_08afdcc4 + iVar3) == '\x01')) {
      piVar5 = (int *)((int)&DAT_08afdcc4 + iVar3);
      iVar2 = *piVar5;
      while( true ) {
        if (*(char *)(iVar2 + 9) != '\0') {
          FUN_08a21d00(iVar2);
          iVar7 = *piVar5;
          iVar2 = *(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0x14);
          if (iVar2 < 0) {
            iVar2 = 0;
          }
          *(int *)(iVar7 + 0x28) =
               *(int *)(iVar7 + 0x28) +
               *(int *)(iVar7 + 0x34) * (iVar2 / (int)(uint)*(ushort *)(iVar7 + 10));
        }
        pcVar1 = *(char **)((int)&DAT_08afdcc4 + iVar3);
        if (uVar6 <= *(uint *)(pcVar1 + 0x28)) break;
        iVar2 = FUN_08a219fc(pcVar1);
        pcVar1 = *(char **)((int)&DAT_08afdcc4 + iVar3);
        pcVar1[9] = '\x01';
        if (*pcVar1 == '\0') goto LAB_08a217ec;
        if (iVar2 == -1) {
          return 0;
        }
        iVar2 = *piVar5;
      }
      *(uint *)(pcVar1 + 0x28) = *(uint *)(pcVar1 + 0x28) - uVar6;
      pcVar1[9] = '\0';
    }
LAB_08a217ec:
    uVar4 = uVar4 + 1;
    iVar3 = uVar4 * 4;
    if (0x7f < uVar4) {
      return 0;
    }
  } while( true );
}

