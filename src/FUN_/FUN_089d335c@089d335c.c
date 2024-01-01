#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d335c(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined local_40 [6];
  short local_3a;
  int local_38;
  
  puVar7 = local_40;
  local_38 = 0;
  bVar1 = false;
  if (0 < *(int *)(param_1 + 4)) {
    uVar6 = *(undefined4 *)(param_1 + 4);
    do {
      local_38 = 0x2000;
      iVar2 = zz_sceNetAdhocPdpRecv
                        (uVar6,local_40,&local_3a,*(undefined4 *)(param_1 + 0xc),&local_38,0,1);
      if ((local_3a == 200) &&
         ((pcVar3 = (char *)FUN_089cf9a4(local_40), pcVar3 == (char *)0x0 || (*pcVar3 == '\0')))) {
        if (iVar2 != 0) break;
        DAT_08ac597c = DAT_08ac597c + 1;
        zz_sceKernelDcacheWritebackInvalidateRange(*(undefined4 *)(param_1 + 0xc),local_38);
        local_38 = local_38 + -4;
        iVar9 = *(int *)(param_1 + 0xc) + 4;
        iVar4 = FUN_08a02674(0,iVar9);
        if (**(int **)(param_1 + 0xc) == iVar4) {
          FUN_089cfdcc(iVar9,local_38);
          bVar1 = true;
        }
        else {
          DAT_08ac5980 = DAT_08ac5980 + 1;
          bVar1 = true;
        }
      }
      if (iVar2 != 0) break;
      uVar6 = *(undefined4 *)(param_1 + 4);
    } while( true );
  }
  if (bVar1) {
    zz_sceRtcGetCurrentClockLocalTime();
    *(undefined *)(param_1 + 0x10) = 0;
    *(undefined *)(param_1 + 0x11) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  else {
    iVar2 = FUN_089beb54(DAT_08ac5978 + 0x14,0);
    if (iVar2 < 0xe4e1c1) {
      if (5000000 < iVar2) {
        *(undefined *)(param_1 + 0x11) = 1;
        *(undefined *)(param_1 + 0x12) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0x10) = 1;
      *(undefined *)(param_1 + 0x12) = 0;
    }
    iVar2 = iVar2 / 1000000;
    if (*(int *)(DAT_08ac5978 + 0x24) < iVar2) {
      *(int *)(DAT_08ac5978 + 0x24) = iVar2;
    }
    else {
      if (*(int *)(DAT_08ac5978 + 0x24) <= iVar2 + 1) {
        iVar2 = *(int *)(param_1 + 8);
        goto LAB_089d353c;
      }
      *(int *)(DAT_08ac5978 + 0x24) = iVar2;
    }
  }
  iVar2 = *(int *)(param_1 + 8);
LAB_089d353c:
  if (0 < iVar2) {
    iVar2 = *(int *)(param_1 + 0xc) + 4;
    local_38 = FUN_089cfbf4(iVar2);
    zz_sceKernelDcacheWritebackInvalidateRange(iVar2,local_38);
    uVar6 = FUN_08a02674(0,iVar2,local_38);
    **(undefined4 **)(param_1 + 0xc) = uVar6;
    local_38 = local_38 + 4;
    iVar2 = FUN_089d3760();
    if ((iVar2 < 0x50) && (iVar2 = 0, 0 < local_38)) {
      do {
        iVar4 = iVar2 + 1;
        *puVar7 = 0xff;
        puVar7 = local_40 + iVar2 + 1;
        iVar2 = iVar4;
      } while (iVar4 < 6);
      iVar2 = FUN_089d3ab4();
      if ((iVar2 != 0) && (iVar2 = FUN_089d3adc(), *(int *)(iVar2 + 0x24) == 2)) {
        iVar2 = FUN_089d3adc();
        if (*(int *)(iVar2 + 0x28) == 2) {
          uVar6 = FUN_089d3adc();
          puVar5 = (undefined *)FUN_089d3df4(uVar6);
          iVar2 = 0;
          puVar7 = puVar5;
          do {
            puVar8 = local_40 + iVar2;
            iVar2 = iVar2 + 1;
            *puVar8 = *puVar7;
            puVar7 = puVar5 + iVar2;
          } while (iVar2 < 6);
        }
        else {
          uVar6 = FUN_089d3adc();
          puVar5 = (undefined *)FUN_089d3e50(uVar6);
          iVar2 = 0;
          puVar7 = puVar5;
          do {
            puVar8 = local_40 + iVar2;
            iVar2 = iVar2 + 1;
            *puVar8 = *puVar7;
            puVar7 = puVar5 + iVar2;
          } while (iVar2 < 6);
        }
      }
      local_3a = 100;
      iVar2 = zz_sceNetAdhocPdpSend
                        (*(undefined4 *)(param_1 + 8),local_40,100,*(undefined4 *)(param_1 + 0xc),
                         local_38,0,1);
      if (iVar2 == 0) {
        zz_sceRtcGetCurrentClockLocalTime(DAT_08ac5978 + 4);
      }
    }
  }
  return;
}

