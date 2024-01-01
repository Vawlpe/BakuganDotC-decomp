#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a04f38)
// WARNING: Removing unreachable block (ram,0x08a04f6c)
// WARNING: Removing unreachable block (ram,0x08a04e0c)
// WARNING: Removing unreachable block (ram,0x08a04d3c)
// WARNING: Removing unreachable block (ram,0x08a04d44)
// WARNING: Removing unreachable block (ram,0x08a04d4c)
// WARNING: Removing unreachable block (ram,0x08a05128)
// WARNING: Removing unreachable block (ram,0x08a05030)
// WARNING: Removing unreachable block (ram,0x08a05068)
// WARNING: Removing unreachable block (ram,0x08a05094)
// WARNING: Removing unreachable block (ram,0x08a05220)
// WARNING: Removing unreachable block (ram,0x08a04c30)
// WARNING: Removing unreachable block (ram,0x08a04b9c)
// WARNING: Removing unreachable block (ram,0x08a04e3c)
// WARNING: Removing unreachable block (ram,0x08a04d64)

undefined8 pow(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  int local_30;
  
  local_38 = FUN_08a06b78();
  iVar1 = isnan(param_3,param_4);
  if (iVar1 == 0) {
    iVar1 = isnan(param_1,param_2);
    local_58 = param_1;
    local_54 = param_2;
    local_50 = param_3;
    local_4c = param_4;
    if (iVar1 == 0) {
      iVar1 = FUN_08a0ed34(param_1,param_2,0,0);
      if (iVar1 == 0) {
        iVar1 = FUN_08a0ed34(param_3,param_4,0,0);
        if (iVar1 == 0) {
          return 0x3ff0000000000000;
        }
        iVar1 = FUN_08a05ef0(param_3,param_4);
        if (iVar1 != 0) {
          iVar1 = FUN_08a0ed34(param_3,param_4,0,0);
          if (iVar1 < 0) {
            local_60 = 1;
            local_5c = &DAT_08aa4498;
            local_40 = 0;
            local_48 = __negdf2(0,0x7ff00000);
            iVar1 = FUN_08a05f20(&local_60);
            if (iVar1 == 0) {
              puVar2 = (undefined4 *)FUN_08a0f7b0();
              *puVar2 = 0x21;
            }
            if (local_40 != 0) {
              local_30 = local_40;
              piVar3 = (int *)FUN_08a0f7b0();
              *piVar3 = local_30;
            }
            return local_48;
          }
        }
      }
      else {
        iVar1 = FUN_08a05ef0((undefined4)local_38,local_38._4_4_);
        uVar5 = local_38;
        if (iVar1 == 0) {
          iVar1 = FUN_08a05ef0(param_1,param_2);
          uVar5 = local_38;
          if (iVar1 != 0) {
            iVar1 = FUN_08a05ef0(param_3,param_4);
            uVar5 = local_38;
            if (iVar1 != 0) {
              iVar1 = isnan((undefined4)local_38,local_38._4_4_);
              if (iVar1 != 0) {
                local_60 = 1;
                local_5c = &DAT_08aa4498;
                local_40 = 0;
                local_48 = FUN_08a0eb10(0,0,0,0);
                iVar1 = FUN_08a05f20(&local_60);
                if (iVar1 == 0) {
                  puVar2 = (undefined4 *)FUN_08a0f7b0();
                  *puVar2 = 0x21;
                }
                if (local_40 != 0) {
                  local_30 = local_40;
                  piVar3 = (int *)FUN_08a0f7b0();
                  *piVar3 = local_30;
                }
                return local_48;
              }
              local_60 = 3;
              local_5c = &DAT_08aa4498;
              local_40 = 0;
              uVar5 = __muldf3(param_3,param_4,0,0x3fe00000);
              uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
              local_48._4_4_ = 0x7ff00000;
              local_48._0_4_ = 0;
              iVar1 = FUN_08a0ed34(param_1,param_2,0,0);
              if (iVar1 < 0) {
                uVar6 = rint((int)uVar5,uVar4);
                iVar1 = FUN_08a0ed34((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar5,uVar4);
                if (iVar1 != 0) {
                  local_48 = __negdf2(0,0x7ff00000);
                }
              }
              iVar1 = FUN_08a05f20(&local_60);
              if (iVar1 == 0) {
                puVar2 = (undefined4 *)FUN_08a0f7b0();
                *puVar2 = 0x22;
              }
              if (local_40 != 0) {
                local_30 = local_40;
                piVar3 = (int *)FUN_08a0f7b0();
                *piVar3 = local_30;
              }
              return local_48;
            }
          }
        }
        local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_38._0_4_ = (undefined4)uVar5;
        iVar1 = FUN_08a0ed34((undefined4)local_38,local_38._4_4_,0,0);
        local_38 = uVar5;
        if (iVar1 == 0) {
          iVar1 = FUN_08a05ef0(param_1,param_2);
          if (iVar1 != 0) {
            iVar1 = FUN_08a05ef0(param_3,param_4);
            if (iVar1 != 0) {
              local_60 = 4;
              local_5c = &DAT_08aa4498;
              local_40 = 0;
              local_48._4_4_ = 0;
              local_48._0_4_ = 0;
              iVar1 = FUN_08a05f20(&local_60);
              if (iVar1 == 0) {
                puVar2 = (undefined4 *)FUN_08a0f7b0();
                *puVar2 = 0x22;
              }
              if (local_40 != 0) {
                local_30 = local_40;
                piVar3 = (int *)FUN_08a0f7b0();
                *piVar3 = local_30;
              }
              return CONCAT44(local_48._4_4_,(undefined4)local_48);
            }
          }
        }
      }
    }
    else {
      iVar1 = FUN_08a0ed34(param_3,param_4,0,0);
      if (iVar1 == 0) {
        local_60 = 1;
        local_5c = &DAT_08aa4498;
        local_40 = 0;
        local_48._0_4_ = param_1;
        local_48._4_4_ = param_2;
        iVar1 = FUN_08a05f20(&local_60);
        if (iVar1 == 0) {
          puVar2 = (undefined4 *)FUN_08a0f7b0();
          *puVar2 = 0x21;
        }
        if (local_40 != 0) {
          local_30 = local_40;
          piVar3 = (int *)FUN_08a0f7b0();
          *piVar3 = local_30;
        }
        return CONCAT44(local_48._4_4_,(undefined4)local_48);
      }
    }
  }
  return local_38;
}

