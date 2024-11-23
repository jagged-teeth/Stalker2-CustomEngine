#pragma once
#include "CoreMinimal.h"
#include "EMappingContext.generated.h"

UENUM()
enum class EMappingContext : int32 {
    None,
    Exploration,
    Inventory,
    Trade,
    ItemSelector,
    AttachSelector,
    Dialogue,
    DialogueOnTheGo,
    ImportantChoice,
    Debug,
    PDA,
    Map,
    Journal,
    Note,
    Sleep,
    Ladder,
    NoInput,
    Upgrades,
    UpgradesPopup,
    UpgradesNavigation,
    Codelock,
    Menu,
    Aiming,
    Bolt,
    Grenade,
    Knife,
    PDA_Encyclopedia,
    PDA_Stats,
    DeathScreen,
    Cutscene,
    QuestNotification,
    SystemNotifications,
    StealthKill,
    Interactivity,
    Popup,
    PDATutorial,
    MenuSettings,
    PlayMovie,
    Subtitle,
    Presentation,
    EULA,
    PlayerContextualAction,
    InspectArtifact,
    ModBrowser,
    StackSplitMenu,
    RightClickContextualMenu,
    Guitar,
    EditSafeZone,
    LoadingScreen,
    GetCount,
};

