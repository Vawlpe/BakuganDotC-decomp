#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 _WIP_Init__LoopThingIdk_Step(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_1 < 0x13) {
    iVar2 = param_1 * 0x20;
    if (((&DAT_08ac4f78)[param_1 * 8] == -1) &&
       (iVar2 = zz_sceKernelCreateThread
                          ((&PTR_s_MyThread_Main_08ac4f7c)[param_1 * 8],
                           (&PTR__WIP_Main_08ac4f80)[param_1 * 8],
                           *(undefined4 *)(&DAT_08ac4f84 + iVar2),
                           *(undefined4 *)(&DAT_08ac4f88 + iVar2),
                           *(undefined4 *)(&DAT_08ac4f8c + iVar2),*(undefined4 *)(iVar2 + 0x8ac4f90)
                          ), 0 < iVar2)) {
      iVar1 = zz_sceKernelStartThread(iVar2,param_3,param_2);
      if (iVar1 == 0) {
        (&DAT_08ac4f78)[param_1 * 8] = iVar2;
        uVar3 = 1;
      }
      else {
        zz_sceKernelDeleteThread(iVar2);
      }
    }
  }
  return uVar3;
}

