#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0891502c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_0880cc48();
  if (*(char *)(*piVar1 + *(int *)(param_1 + 0x16a8) * 6 + param_2 + 0x540) == '\0') {
    if (((0 < param_2) &&
        ((&DAT_08a9bb4c)[*(int *)(&DAT_08a9baf8 + *(int *)(param_1 + 0x16a8) * 4) * 6 + param_2] !=
         '\0')) &&
       (piVar1 = (int *)FUN_0880cc48(),
       *(char *)(*piVar1 + *(int *)(param_1 + 0x16a8) * 6 + param_2 + 0x53f) == '\0')) {
      return 0;
    }
    piVar1 = (int *)FUN_0880cc48();
    iVar4 = *(int *)(*piVar1 + 0x464);
    uVar2 = FUN_0880cc48();
    iVar3 = FUN_0880d0ac(uVar2,0x2d);
    iVar4 = iVar4 - iVar3;
    iVar3 = FUN_08913084(*(undefined4 *)(param_1 + 0x16a8),*(undefined4 *)(param_1 + 0x1698));
    if (*(short *)(&DAT_08a9bbcc + iVar3 * 4) <= iVar4) {
      return 1;
    }
  }
  return 0;
}

