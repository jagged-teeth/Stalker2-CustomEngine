#pragma once
#include "CoreMinimal.h"
#include "EPlayerTriggerState.generated.h"

UENUM()
enum class EPlayerTriggerState : uint64 {
    None,
    MainTrigger,
    AimTrigger,
    MeleeTrigger = 4,
    ChangeAmmoTypeTrigger = 8,
    ChangeFireTypeTrigger = 16,
    ReloadTrigger = 32,
    UnjamTrigger = 64,
    JumpTrigger = 128,
    LeanLeftTrigger = 256,
    LeanRightTrigger = 512,
    CrouchTrigger = 1024,
    WalkTrigger = 2048,
    SprintTrigger = 4096,
    DropItemTrigger = 8192,
    PickUpLeftHandTrigger = 16384,
    PickUpRightHandTrigger = 32768,
    InteractRightHandTrigger = 65536,
    InteractLeftHandTrigger = 131072,
    UseItemLeftHandTrigger = 262144,
    UseItemRightHandTrigger = 524288,
    RemoveLeftHandFromMainItemTrigger = 1048576,
    ReturnLeftHandOnMainItemTrigger = 2097152,
    AutoCoverTrigger = 4194304,
    PrepareMainItemUseTrigger = 8388608,
    KnockDownTrigger = 16777216,
    InstallAttachTrigger = 33554432,
    ThrowWithoutEquipTrigger = 67108864,
    VaultTrigger = 134217728,
    EquipBothHandsTrigger = 268435456,
    ToggleFlashlightTrigger = 536870912,
    UseBackpackTrigger = 1073741824,
    LimpTrigger = 2147483648,
    ToggleShootingAttach = 4294967296,
    ItemSelectorTrigger = 8589934592,
    ThrowStrongTrigger = 17179869184,
    ThrowWeakTrigger = 34359738368,
    SwapWeaponTrigger = 68719476736,
    AttachSelectorTrigger = 137438953472,
    InteractTrigger = 274877906944,
    PickUpTrigger = 549755813888,
    HoldBreathTrigger = 1099511627776,
    UsePDATrigger = 2199023255552,
    UnloadTrigger = 4398046511104,
    InspectArtifactTrigger = 8796093022208,
    InspectArtifactWithBackpackTrigger = 17592186044416,
    RestoreCrouchTrigger = 35184372088832,
    PlayGuitarTrigger = 70368744177664,
    SprintStartedTrigger = 140737488355328,
    LadderSprintTrigger = 281474976710656,
    DodgeTrigger = 562949953421312,
    PrepareAmmoTypeChangeTrigger = 1125899906842624,
    TakeNextItemTrigger = 2251799813685248,
};
