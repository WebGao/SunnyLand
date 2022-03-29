#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[3] = 
{
	{ 5444, 0,  0 } /*tableIndex: 0 */,
	{ 5444, 1,  0 } /*tableIndex: 1 */,
	{ 5444, 2,  0 } /*tableIndex: 2 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[3] = 
{
	"redirectURI",
	"baseURI",
	"finalUri",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[6] = 
{
	{ 0, 3 } /* 0x06000001 System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngineInternal.WebRequestUtils::.cctor() */,
	{ 0, 0 } /* 0x06000003 System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */,
	{ 0, 0 } /* 0x06000004 System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[]) */,
	{ 0, 0 } /* 0x06000005 System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLengthHeader(System.UInt64) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestModule[47] = 
{
	{ 14830, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 14830, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 14830, 1, 479, 479, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 14830, 1, 483, 483, 13, 39, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 14830, 1, 483, 483, 0, 0, 13, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 14830, 1, 484, 484, 17, 70, 16, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 14830, 1, 486, 486, 17, 80, 26, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 14830, 1, 487, 487, 13, 43, 34, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 14830, 1, 487, 487, 0, 0, 42, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 14830, 1, 488, 488, 17, 48, 46, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 14830, 1, 490, 490, 13, 62, 56, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 14830, 1, 491, 491, 13, 58, 64, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 14830, 1, 492, 492, 13, 41, 72, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 14830, 1, 493, 493, 9, 10, 82, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 14830, 1, 483, 483, 13, 39, 3, kSequencePointKind_StepOut, 0, 14 } /* seqPointIndex: 14 */,
	{ 14830, 1, 484, 484, 17, 70, 18, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 14830, 1, 486, 486, 17, 80, 28, kSequencePointKind_StepOut, 0, 16 } /* seqPointIndex: 16 */,
	{ 14830, 1, 487, 487, 13, 43, 35, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 14830, 1, 488, 488, 17, 48, 47, kSequencePointKind_StepOut, 0, 18 } /* seqPointIndex: 18 */,
	{ 14830, 1, 490, 490, 13, 62, 58, kSequencePointKind_StepOut, 0, 19 } /* seqPointIndex: 19 */,
	{ 14830, 1, 491, 491, 13, 58, 66, kSequencePointKind_StepOut, 0, 20 } /* seqPointIndex: 20 */,
	{ 14830, 1, 492, 492, 13, 41, 73, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 14831, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 14831, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 14831, 1, 475, 475, 9, 88, 0, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 14831, 1, 475, 475, 9, 88, 5, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 14832, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 14832, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 14832, 2, 32, 32, 9, 10, 0, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 14832, 2, 33, 33, 13, 26, 1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 14832, 2, 34, 34, 9, 10, 5, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 14833, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 14833, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 14833, 2, 38, 38, 9, 10, 0, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 14833, 2, 39, 39, 13, 57, 1, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 14833, 2, 40, 40, 9, 10, 11, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 14833, 2, 39, 39, 13, 57, 3, kSequencePointKind_StepOut, 0, 36 } /* seqPointIndex: 36 */,
	{ 14834, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 14834, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 14834, 3, 120, 120, 9, 10, 0, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 14834, 3, 122, 122, 13, 54, 1, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 14834, 3, 124, 124, 9, 10, 10, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 14834, 3, 122, 122, 13, 54, 4, kSequencePointKind_StepOut, 0, 42 } /* seqPointIndex: 42 */,
	{ 14835, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 14835, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 14835, 3, 127, 127, 72, 73, 0, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 14835, 3, 127, 127, 73, 74, 1, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "/Users/bokken/buildslave/unity/build/Modules/UnityWebRequest/Public/WebRequestUtils.cs", { 226, 186, 65, 208, 68, 104, 95, 247, 88, 190, 184, 26, 234, 191, 168, 170} }, //1 
{ "/Users/bokken/buildslave/unity/build/Modules/UnityWebRequest/Public/CertificateHandler/CertificateHandler.bindings.cs", { 63, 110, 225, 140, 166, 236, 157, 118, 45, 170, 13, 140, 76, 145, 243, 103} }, //2 
{ "/Users/bokken/buildslave/unity/build/Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandler.bindings.cs", { 51, 166, 249, 55, 207, 163, 150, 217, 228, 125, 21, 94, 17, 130, 40, 0} }, //3 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[3] = 
{
	{ 2444, 1 },
	{ 2445, 2 },
	{ 2446, 3 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[3] = 
{
	{ 0, 85 },
	{ 0, 7 },
	{ 0, 13 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[6] = 
{
	{ 85, 0, 1 } /* System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void UnityEngineInternal.WebRequestUtils::.cctor() */,
	{ 7, 1, 1 } /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */,
	{ 13, 2, 1 } /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[]) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLengthHeader(System.UInt64) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandler::ReceiveContentLength(System.Int32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	47,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityWebRequestModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	3,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
