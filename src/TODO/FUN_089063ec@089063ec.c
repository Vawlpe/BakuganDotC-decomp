#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089063ec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  iVar2 = 0;
  iVar1 = FUN_089054c0(*(undefined4 *)(param_1 + 0x28));
  if (iVar1 == 0) {
    iVar2 = 2;
    iVar1 = FUN_08905508(*(undefined4 *)(param_1 + 0x28));
    if (iVar1 != 0) {
      iVar2 = 1;
    }
  }
  if (param_2 < 3) {
    iVar3 = *(int *)((&PTR_DAT_08ac0e48)[iVar2] + param_2 * 4);
  }
  if (iVar3 == -1) {
    iVar3 = 0x125;
  }
  return iVar3;
}

