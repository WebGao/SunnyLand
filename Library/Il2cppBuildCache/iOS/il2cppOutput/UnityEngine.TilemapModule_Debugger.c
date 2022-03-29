#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[2] = 
{
	{ 5197, 0,  7 } /*tableIndex: 0 */,
	{ 5195, 1,  9 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"tileData",
	"tileAnimationData",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[35] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.Tilemaps.ITilemap::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0 } /* 0x06000003 UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance() */,
	{ 0, 0 } /* 0x06000004 UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite() */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0 } /* 0x06000006 UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color() */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color) */,
	{ 0, 0 } /* 0x06000008 UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform() */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0 } /* 0x0600000A UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject() */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x0600000C UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags() */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0 } /* 0x0600000E UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType() */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.Tilemaps.Tile::.ctor() */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 1 } /* 0x06000014 UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000015 System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */,
	{ 1, 1 } /* 0x06000016 UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000017 System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x06000018 System.Void UnityEngine.Tilemaps.TileBase::.ctor() */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Tilemaps.TilemapRenderer::RegisterSpriteAtlasRegistered() */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.Tilemaps.TilemapRenderer::UnregisterSpriteAtlasRegistered() */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas) */,
	{ 0, 0 } /* 0x0600001E System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color) */,
	{ 0, 0 } /* 0x06000020 System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0 } /* 0x06000021 System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x06000022 System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0 } /* 0x06000023 System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[184] = 
{
	{ 12272, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 12272, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 12272, 1, 11, 11, 9, 28, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 12272, 1, 12, 12, 9, 10, 7, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 12272, 1, 13, 13, 9, 10, 8, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 12272, 1, 11, 11, 9, 28, 1, kSequencePointKind_StepOut, 0, 5 } /* seqPointIndex: 5 */,
	{ 12273, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 12273, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 12273, 1, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 12273, 1, 60, 60, 13, 45, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 12273, 1, 61, 61, 9, 10, 14, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 12273, 1, 60, 60, 13, 45, 8, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 12274, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 12274, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 12274, 1, 70, 70, 9, 10, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 12274, 1, 71, 71, 13, 41, 1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 12274, 1, 72, 72, 13, 31, 11, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 12274, 1, 73, 73, 9, 10, 19, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 12274, 1, 71, 71, 13, 41, 1, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 12275, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 12275, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 12275, 2, 13, 13, 36, 37, 0, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 12275, 2, 13, 13, 38, 54, 1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 12275, 2, 13, 13, 55, 56, 10, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 12276, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 12276, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 12276, 2, 13, 13, 61, 62, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 12276, 2, 13, 13, 63, 80, 1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 12276, 2, 13, 13, 81, 82, 8, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 12277, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 12277, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 12277, 2, 14, 14, 34, 35, 0, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 12277, 2, 14, 14, 36, 51, 1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 12277, 2, 14, 14, 52, 53, 10, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 12278, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 12278, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 12278, 2, 14, 14, 58, 59, 0, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 12278, 2, 14, 14, 60, 76, 1, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 12278, 2, 14, 14, 77, 78, 8, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 12279, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 12279, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 12279, 2, 15, 15, 42, 43, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 12279, 2, 15, 15, 44, 63, 1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 12279, 2, 15, 15, 64, 65, 10, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 12280, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 12280, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 12280, 2, 15, 15, 70, 71, 0, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 12280, 2, 15, 15, 72, 92, 1, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 12280, 2, 15, 15, 93, 94, 8, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 12281, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 12281, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 12281, 2, 16, 16, 44, 45, 0, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 12281, 2, 16, 16, 46, 75, 1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 12281, 2, 16, 16, 76, 77, 10, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 12282, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 12282, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 12282, 2, 16, 16, 82, 83, 0, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 12282, 2, 16, 16, 84, 114, 1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 12282, 2, 16, 16, 115, 116, 8, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 12283, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 12283, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 12283, 2, 17, 17, 38, 39, 0, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 12283, 2, 17, 17, 40, 55, 1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 12283, 2, 17, 17, 56, 57, 10, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 12284, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 12284, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 12284, 2, 17, 17, 62, 63, 0, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 12284, 2, 17, 17, 64, 80, 1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 12284, 2, 17, 17, 81, 82, 8, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 12285, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 12285, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 12285, 2, 18, 18, 48, 49, 0, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 12285, 2, 18, 18, 50, 72, 1, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 12285, 2, 18, 18, 73, 74, 10, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 12286, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 12286, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 12286, 2, 18, 18, 79, 80, 0, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 12286, 2, 18, 18, 81, 104, 1, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 12286, 2, 18, 18, 105, 106, 8, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 12287, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 12287, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 12287, 2, 34, 34, 9, 10, 0, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 12287, 2, 35, 35, 13, 40, 1, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 12287, 2, 36, 36, 13, 38, 14, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 12287, 2, 37, 37, 13, 46, 27, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 12287, 2, 38, 38, 13, 57, 40, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 12287, 2, 39, 39, 13, 38, 53, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 12287, 2, 40, 40, 13, 52, 66, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 12287, 2, 41, 41, 9, 10, 79, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 12287, 2, 35, 35, 13, 40, 8, kSequencePointKind_StepOut, 0, 89 } /* seqPointIndex: 89 */,
	{ 12287, 2, 36, 36, 13, 38, 21, kSequencePointKind_StepOut, 0, 90 } /* seqPointIndex: 90 */,
	{ 12287, 2, 37, 37, 13, 46, 34, kSequencePointKind_StepOut, 0, 91 } /* seqPointIndex: 91 */,
	{ 12287, 2, 38, 38, 13, 57, 47, kSequencePointKind_StepOut, 0, 92 } /* seqPointIndex: 92 */,
	{ 12287, 2, 39, 39, 13, 38, 60, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 12287, 2, 40, 40, 13, 52, 73, kSequencePointKind_StepOut, 0, 94 } /* seqPointIndex: 94 */,
	{ 12288, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 12288, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 12288, 2, 23, 23, 9, 45, 0, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 12288, 2, 25, 25, 9, 60, 11, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 12288, 2, 29, 29, 9, 57, 22, kSequencePointKind_Normal, 0, 99 } /* seqPointIndex: 99 */,
	{ 12288, 2, 31, 31, 9, 67, 29, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 12288, 2, 23, 23, 9, 45, 1, kSequencePointKind_StepOut, 0, 101 } /* seqPointIndex: 101 */,
	{ 12288, 2, 25, 25, 9, 60, 12, kSequencePointKind_StepOut, 0, 102 } /* seqPointIndex: 102 */,
	{ 12288, 2, 31, 31, 9, 67, 37, kSequencePointKind_StepOut, 0, 103 } /* seqPointIndex: 103 */,
	{ 12289, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 104 } /* seqPointIndex: 104 */,
	{ 12289, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 12289, 3, 10, 10, 80, 81, 0, kSequencePointKind_Normal, 0, 106 } /* seqPointIndex: 106 */,
	{ 12289, 3, 10, 10, 82, 112, 1, kSequencePointKind_Normal, 0, 107 } /* seqPointIndex: 107 */,
	{ 12289, 3, 10, 10, 113, 114, 9, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 12289, 3, 10, 10, 82, 112, 3, kSequencePointKind_StepOut, 0, 109 } /* seqPointIndex: 109 */,
	{ 12290, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 12290, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 12290, 3, 13, 13, 103, 104, 0, kSequencePointKind_Normal, 0, 112 } /* seqPointIndex: 112 */,
	{ 12290, 3, 13, 13, 104, 105, 1, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 12291, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 114 } /* seqPointIndex: 114 */,
	{ 12291, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 115 } /* seqPointIndex: 115 */,
	{ 12291, 3, 15, 15, 9, 10, 0, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 12291, 3, 16, 16, 13, 48, 1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 12291, 3, 17, 17, 13, 58, 9, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 12291, 3, 18, 18, 13, 29, 20, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 12291, 3, 19, 19, 9, 10, 24, kSequencePointKind_Normal, 0, 120 } /* seqPointIndex: 120 */,
	{ 12291, 3, 17, 17, 13, 58, 14, kSequencePointKind_StepOut, 0, 121 } /* seqPointIndex: 121 */,
	{ 12292, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122 } /* seqPointIndex: 122 */,
	{ 12292, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123 } /* seqPointIndex: 123 */,
	{ 12292, 3, 22, 22, 130, 131, 0, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 12292, 3, 22, 22, 132, 145, 1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 12292, 3, 22, 22, 146, 147, 5, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 12293, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 12293, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 128 } /* seqPointIndex: 128 */,
	{ 12293, 3, 24, 24, 9, 10, 0, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 12293, 3, 25, 25, 13, 75, 1, kSequencePointKind_Normal, 0, 130 } /* seqPointIndex: 130 */,
	{ 12293, 3, 26, 26, 13, 76, 9, kSequencePointKind_Normal, 0, 131 } /* seqPointIndex: 131 */,
	{ 12293, 3, 27, 27, 13, 38, 20, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 12293, 3, 28, 28, 9, 10, 24, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 12293, 3, 26, 26, 13, 76, 14, kSequencePointKind_StepOut, 0, 134 } /* seqPointIndex: 134 */,
	{ 12294, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 12294, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 136 } /* seqPointIndex: 136 */,
	{ 12294, 3, 31, 31, 91, 92, 0, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 12294, 3, 31, 31, 93, 106, 1, kSequencePointKind_Normal, 0, 138 } /* seqPointIndex: 138 */,
	{ 12294, 3, 31, 31, 107, 108, 5, kSequencePointKind_Normal, 0, 139 } /* seqPointIndex: 139 */,
	{ 12298, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 12298, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 12298, 4, 404, 404, 9, 10, 0, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 12298, 4, 405, 405, 13, 75, 1, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 12298, 4, 406, 406, 9, 10, 19, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 12298, 4, 405, 405, 13, 75, 8, kSequencePointKind_StepOut, 0, 145 } /* seqPointIndex: 145 */,
	{ 12298, 4, 405, 405, 13, 75, 13, kSequencePointKind_StepOut, 0, 146 } /* seqPointIndex: 146 */,
	{ 12299, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 147 } /* seqPointIndex: 147 */,
	{ 12299, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 12299, 4, 410, 410, 9, 10, 0, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 12299, 4, 411, 411, 13, 75, 1, kSequencePointKind_Normal, 0, 150 } /* seqPointIndex: 150 */,
	{ 12299, 4, 412, 412, 9, 10, 19, kSequencePointKind_Normal, 0, 151 } /* seqPointIndex: 151 */,
	{ 12299, 4, 411, 411, 13, 75, 8, kSequencePointKind_StepOut, 0, 152 } /* seqPointIndex: 152 */,
	{ 12299, 4, 411, 411, 13, 75, 13, kSequencePointKind_StepOut, 0, 153 } /* seqPointIndex: 153 */,
	{ 12301, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 12301, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 12301, 4, 422, 422, 61, 62, 0, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 12301, 4, 422, 422, 63, 80, 1, kSequencePointKind_Normal, 0, 157 } /* seqPointIndex: 157 */,
	{ 12301, 4, 422, 422, 81, 82, 8, kSequencePointKind_Normal, 0, 158 } /* seqPointIndex: 158 */,
	{ 12302, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 12302, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 12302, 4, 423, 423, 58, 59, 0, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 12302, 4, 423, 423, 60, 76, 1, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 12302, 4, 423, 423, 77, 78, 8, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 12303, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 12303, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 12303, 4, 424, 424, 70, 71, 0, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 12303, 4, 424, 424, 72, 92, 1, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 12303, 4, 424, 424, 93, 94, 8, kSequencePointKind_Normal, 0, 168 } /* seqPointIndex: 168 */,
	{ 12304, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 169 } /* seqPointIndex: 169 */,
	{ 12304, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 170 } /* seqPointIndex: 170 */,
	{ 12304, 4, 425, 425, 73, 74, 0, kSequencePointKind_Normal, 0, 171 } /* seqPointIndex: 171 */,
	{ 12304, 4, 425, 425, 75, 96, 1, kSequencePointKind_Normal, 0, 172 } /* seqPointIndex: 172 */,
	{ 12304, 4, 425, 425, 97, 98, 8, kSequencePointKind_Normal, 0, 173 } /* seqPointIndex: 173 */,
	{ 12305, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 174 } /* seqPointIndex: 174 */,
	{ 12305, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 175 } /* seqPointIndex: 175 */,
	{ 12305, 4, 426, 426, 62, 63, 0, kSequencePointKind_Normal, 0, 176 } /* seqPointIndex: 176 */,
	{ 12305, 4, 426, 426, 64, 80, 1, kSequencePointKind_Normal, 0, 177 } /* seqPointIndex: 177 */,
	{ 12305, 4, 426, 426, 81, 82, 8, kSequencePointKind_Normal, 0, 178 } /* seqPointIndex: 178 */,
	{ 12306, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 179 } /* seqPointIndex: 179 */,
	{ 12306, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 180 } /* seqPointIndex: 180 */,
	{ 12306, 4, 427, 427, 84, 85, 0, kSequencePointKind_Normal, 0, 181 } /* seqPointIndex: 181 */,
	{ 12306, 4, 427, 427, 86, 109, 1, kSequencePointKind_Normal, 0, 182 } /* seqPointIndex: 182 */,
	{ 12306, 4, 427, 427, 110, 111, 8, kSequencePointKind_Normal, 0, 183 } /* seqPointIndex: 183 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/bokken/buildslave/unity/build/Modules/Tilemap/Managed/ITilemap.cs", { 107, 173, 168, 105, 31, 52, 198, 96, 56, 142, 66, 136, 164, 159, 72, 172} }, //1 
{ "/Users/bokken/buildslave/unity/build/Modules/Tilemap/Managed/Tile.cs", { 121, 80, 238, 205, 152, 125, 96, 4, 12, 18, 146, 139, 102, 200, 201, 39} }, //2 
{ "/Users/bokken/buildslave/unity/build/Modules/Tilemap/Managed/TileBase.cs", { 144, 95, 197, 97, 211, 190, 218, 96, 88, 179, 234, 178, 55, 33, 87, 161} }, //3 
{ "/Users/bokken/buildslave/unity/build/Modules/Tilemap/ScriptBindings/Tilemap.bindings.cs", { 151, 185, 147, 3, 54, 191, 9, 83, 2, 189, 163, 164, 63, 70, 82, 209} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[5] = 
{
	{ 2129, 1 },
	{ 2131, 2 },
	{ 2132, 3 },
	{ 2135, 4 },
	{ 2136, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[11] = 
{
	{ 0, 21 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 12 },
	{ 0, 26 },
	{ 0, 7 },
	{ 0, 26 },
	{ 0, 7 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[35] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.ITilemap::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 21, 0, 1 } /* UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance() */,
	{ 12, 1, 1 } /* UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite) */,
	{ 12, 2, 1 } /* UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color) */,
	{ 12, 3, 1 } /* UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4) */,
	{ 12, 4, 1 } /* UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject) */,
	{ 12, 5, 1 } /* UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 12, 6, 1 } /* UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 26, 7, 1 } /* UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 7, 8, 1 } /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */,
	{ 26, 9, 1 } /* UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 7, 10, 1 } /* System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::RegisterSpriteAtlasRegistered() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::UnregisterSpriteAtlasRegistered() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_TilemapModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_TilemapModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	184,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_TilemapModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	5,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
