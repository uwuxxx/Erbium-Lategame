#pragma once

struct FConfiguration
{
    static inline auto Playlist = L"/Game/Athena/Playlists/Showdown/Playlist_ShowdownAlt_Solo.Playlist_ShowdownAlt_Solo";
    static inline auto MaxTickRate = 30; // max storm dmg
    static inline auto bLateGame = true;
    static inline auto LateGameZone = 3; // lategame starting zone
    static inline auto bLateGameLongZone = true; // zone doesnt close for a long time if u want infinite respawns lategame
    static inline auto bEnableCheats = false;
    static inline auto SiphonAmount = 30; // choose ur siphon for kill right here! 0 is disable
    static inline auto bInfiniteMats = true; // inf mats do false if not wanted
    static inline auto bInfiniteAmmo = true; // inf ammo remove if wanted
    static inline auto bForceRespawns = true; // build your client with this too!/this is for respawns
    static inline auto bJoinInProgress = false; // tbh idk if it works never checked
    static inline auto bAutoRestart = false; // restart backend when match finished
    static inline auto bKeepInventory = false; // keep inventory
    static inline auto Port = 3551; // nexa backend or other like reload
    static inline constexpr auto bEnableIris = true; 
    static inline constexpr auto bGUI = true;
    static inline constexpr auto bCustomCrashReporter = true;
    static inline constexpr auto bUseStdoutLog = false;
    static inline constexpr auto WebhookURL = ""; // fill in if you want status to send to a webhook
};
