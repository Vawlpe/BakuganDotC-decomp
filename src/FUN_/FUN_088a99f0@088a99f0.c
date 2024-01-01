#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a99f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  float local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined auStack_30 [4];
  float local_2c;
  
  if ((*(char *)(param_1 + 0x285) == '\0') && (iVar1 = FUN_088a97cc(param_1), iVar1 == 0)) {
    local_40 = *(undefined4 *)(param_1 + 0x20);
    uStack_38 = *(undefined4 *)(param_1 + 0x28);
    uStack_34 = *(undefined4 *)(param_1 + 0x2c);
    local_3c = *(float *)(param_1 + 0x24) + 3000.0;
    iVar1 = FUN_0889d57c(&local_40,&local_40);
    if (iVar1 != 0) {
      FUN_088a8f2c(auStack_30,(undefined4 *)(param_1 + 0x20),0x3fbf2100);
      local_3c = local_2c + 100.0;
      iVar1 = 6;
      iVar3 = *(int *)(DAT_08ac58c4 + 4);
      if (0x27 < iVar3) {
        iVar3 = 0;
      }
      iVar2 = FUN_089bed14(100);
      iVar3 = iVar3 * 0x10;
      if (*(int *)(&DAT_08a840a8 + iVar3) <= iVar2) {
        iVar1 = FUN_088a97e8(*(undefined4 *)(&DAT_08a840ac + iVar3),
                             *(undefined4 *)(&DAT_08a840b0 + iVar3),
                             *(undefined4 *)(&DAT_08a840b4 + iVar3),0);
      }
      if (iVar1 == 6) {
        return;
      }
      FUN_088b65c4(iVar1,&local_40,600,0,0);
    }
    *(undefined *)(param_1 + 0x285) = 1;
  }
  return;
}

