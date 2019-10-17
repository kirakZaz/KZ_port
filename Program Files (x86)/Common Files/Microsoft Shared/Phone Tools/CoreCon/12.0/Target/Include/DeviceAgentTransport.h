

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __DeviceAgentTransport_h__
#define __DeviceAgentTransport_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPacket_FWD_DEFINED__
#define __IPacket_FWD_DEFINED__
typedef interface IPacket IPacket;

#endif 	/* __IPacket_FWD_DEFINED__ */


#ifndef __IDevicePacketStream_FWD_DEFINED__
#define __IDevicePacketStream_FWD_DEFINED__
typedef interface IDevicePacketStream IDevicePacketStream;

#endif 	/* __IDevicePacketStream_FWD_DEFINED__ */


#ifndef __IDeviceStream_FWD_DEFINED__
#define __IDeviceStream_FWD_DEFINED__
typedef interface IDeviceStream IDeviceStream;

#endif 	/* __IDeviceStream_FWD_DEFINED__ */


#ifndef __IAgentTransportShutdownCallback_FWD_DEFINED__
#define __IAgentTransportShutdownCallback_FWD_DEFINED__
typedef interface IAgentTransportShutdownCallback IAgentTransportShutdownCallback;

#endif 	/* __IAgentTransportShutdownCallback_FWD_DEFINED__ */


#ifndef __IDeviceAgentTransport_FWD_DEFINED__
#define __IDeviceAgentTransport_FWD_DEFINED__
typedef interface IDeviceAgentTransport IDeviceAgentTransport;

#endif 	/* __IDeviceAgentTransport_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_DeviceAgentTransport_0000_0000 */
/* [local] */ 

// @semantic SZ_DEVICE_AGENT_TRANSPORT_DLL 
// Dll name
//  
#define SZ_DEVICE_AGENT_TRANSPORT_DLL L"DeviceAgentTransport3.dll" 
//@semantic Dll Entry Points
extern "C" HRESULT __stdcall GetDeviceAgentTransport
(
    IDeviceAgentTransport **out_pTransport);
//@semantic Pointer for exported function
typedef HRESULT (__stdcall *GetDeviceAgentTransportFunc)
(
    IDeviceAgentTransport **);
//@semantic Pointer for exported function
typedef HRESULT (__stdcall *GetNewPacketFunc)
(
    IPacket **);
//@semantic Dll Entry Points
extern "C" HRESULT __stdcall GetNewPacket
(
    IPacket **out_ppPacket);
//@supported allocation model for returned buffers
#define CRT_ALLOCATIONMODEL      0
#define COM_ALLOCATIONMODEL      1
//@semantic Pointer for exported function
typedef HRESULT (__stdcall *SetAllocationModelFunc)
(
    DWORD);
//@semantic Dll Entry Points
extern "C" HRESULT __stdcall SetAllocationModel
(
    DWORD dwAllocationModel);
/* Error codes */
#define CORECON_COR_E_IO _HRESULT_TYPEDEF_(0x80131620L)


extern RPC_IF_HANDLE __MIDL_itf_DeviceAgentTransport_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DeviceAgentTransport_0000_0000_v0_0_s_ifspec;


#ifndef __DeviceAgentTransport2Lib_LIBRARY_DEFINED__
#define __DeviceAgentTransport2Lib_LIBRARY_DEFINED__

/* library DeviceAgentTransport2Lib */
/* [helpstring][version][uuid] */ 

typedef /* [helpstring][version][v1_enum][uuid] */  DECLSPEC_UUID("CAE2339D-C752-4365-B987-E5E452E77A61") 
enum DataTypeEnum
    {
        DT_INVALID	= 0,
        DT_BYTE	= 1,
        DT_INT32	= 2,
        DT_WIDECHAR	= 3,
        DT_BOOL	= 4,
        DT_BYTEARRAY	= 5,
        DT_STRING	= 6
    } 	DataTypeEnum;

// Suppress problems with annotating from idl
#pragma warning(push)
#pragma warning(disable:28718)

EXTERN_C const IID LIBID_DeviceAgentTransport2Lib;

#ifndef __IPacket_INTERFACE_DEFINED__
#define __IPacket_INTERFACE_DEFINED__

/* interface IPacket */
/* [unique][helpstring][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_IPacket;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2F6015CC-2710-4AA1-9408-EAD056B555E1")
    IPacket : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteByte( 
            /* [in] */ BYTE in_byteValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadByte( 
            /* [retval][out] */ BYTE *out_pbyteValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteInt32( 
            /* [in] */ INT32 in_int32Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadInt32( 
            /* [retval][out] */ INT32 *out_pInt32Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteBool( 
            /* [in] */ VARIANT_BOOL in_varBoolValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadBool( 
            /* [retval][out] */ VARIANT_BOOL *out_pVarBoolValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteString( 
            /* [in] */ LPWSTR in_lpwcString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadString( 
            /* [retval][out] */ LPWSTR *out_plpwcString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteChar( 
            /* [in] */ wchar_t in_wcharValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadChar( 
            /* [retval][out] */ wchar_t *out_pwcharValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteBytes( 
            /* [size_is][in] */ BYTE in_pBuffer[  ],
            /* [in] */ ULONG in_ArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadBytes( 
            /* [out] */ BYTE **out_pBuffer,
            /* [out] */ ULONG *out_pArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReadDataType( 
            /* [retval][out] */ DataTypeEnum *out_enumDataType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ LONG *out_pCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsEndOfPacket( 
            /* [retval][out] */ VARIANT_BOOL *pbEndOfPacket) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPacketVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPacket * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPacket * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPacket * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteByte )( 
            IPacket * This,
            /* [in] */ BYTE in_byteValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadByte )( 
            IPacket * This,
            /* [retval][out] */ BYTE *out_pbyteValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteInt32 )( 
            IPacket * This,
            /* [in] */ INT32 in_int32Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadInt32 )( 
            IPacket * This,
            /* [retval][out] */ INT32 *out_pInt32Value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteBool )( 
            IPacket * This,
            /* [in] */ VARIANT_BOOL in_varBoolValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadBool )( 
            IPacket * This,
            /* [retval][out] */ VARIANT_BOOL *out_pVarBoolValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteString )( 
            IPacket * This,
            /* [in] */ LPWSTR in_lpwcString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadString )( 
            IPacket * This,
            /* [retval][out] */ LPWSTR *out_plpwcString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteChar )( 
            IPacket * This,
            /* [in] */ wchar_t in_wcharValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadChar )( 
            IPacket * This,
            /* [retval][out] */ wchar_t *out_pwcharValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteBytes )( 
            IPacket * This,
            /* [size_is][in] */ BYTE in_pBuffer[  ],
            /* [in] */ ULONG in_ArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadBytes )( 
            IPacket * This,
            /* [out] */ BYTE **out_pBuffer,
            /* [out] */ ULONG *out_pArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReadDataType )( 
            IPacket * This,
            /* [retval][out] */ DataTypeEnum *out_enumDataType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IPacket * This,
            /* [retval][out] */ LONG *out_pCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IPacket * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsEndOfPacket )( 
            IPacket * This,
            /* [retval][out] */ VARIANT_BOOL *pbEndOfPacket);
        
        END_INTERFACE
    } IPacketVtbl;

    interface IPacket
    {
        CONST_VTBL struct IPacketVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPacket_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPacket_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPacket_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPacket_WriteByte(This,in_byteValue)	\
    ( (This)->lpVtbl -> WriteByte(This,in_byteValue) ) 

#define IPacket_ReadByte(This,out_pbyteValue)	\
    ( (This)->lpVtbl -> ReadByte(This,out_pbyteValue) ) 

#define IPacket_WriteInt32(This,in_int32Value)	\
    ( (This)->lpVtbl -> WriteInt32(This,in_int32Value) ) 

#define IPacket_ReadInt32(This,out_pInt32Value)	\
    ( (This)->lpVtbl -> ReadInt32(This,out_pInt32Value) ) 

#define IPacket_WriteBool(This,in_varBoolValue)	\
    ( (This)->lpVtbl -> WriteBool(This,in_varBoolValue) ) 

#define IPacket_ReadBool(This,out_pVarBoolValue)	\
    ( (This)->lpVtbl -> ReadBool(This,out_pVarBoolValue) ) 

#define IPacket_WriteString(This,in_lpwcString)	\
    ( (This)->lpVtbl -> WriteString(This,in_lpwcString) ) 

#define IPacket_ReadString(This,out_plpwcString)	\
    ( (This)->lpVtbl -> ReadString(This,out_plpwcString) ) 

#define IPacket_WriteChar(This,in_wcharValue)	\
    ( (This)->lpVtbl -> WriteChar(This,in_wcharValue) ) 

#define IPacket_ReadChar(This,out_pwcharValue)	\
    ( (This)->lpVtbl -> ReadChar(This,out_pwcharValue) ) 

#define IPacket_WriteBytes(This,in_pBuffer,in_ArraySize)	\
    ( (This)->lpVtbl -> WriteBytes(This,in_pBuffer,in_ArraySize) ) 

#define IPacket_ReadBytes(This,out_pBuffer,out_pArraySize)	\
    ( (This)->lpVtbl -> ReadBytes(This,out_pBuffer,out_pArraySize) ) 

#define IPacket_ReadDataType(This,out_enumDataType)	\
    ( (This)->lpVtbl -> ReadDataType(This,out_enumDataType) ) 

#define IPacket_get_Count(This,out_pCount)	\
    ( (This)->lpVtbl -> get_Count(This,out_pCount) ) 

#define IPacket_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IPacket_IsEndOfPacket(This,pbEndOfPacket)	\
    ( (This)->lpVtbl -> IsEndOfPacket(This,pbEndOfPacket) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPacket_INTERFACE_DEFINED__ */


#ifndef __IDevicePacketStream_INTERFACE_DEFINED__
#define __IDevicePacketStream_INTERFACE_DEFINED__

/* interface IDevicePacketStream */
/* [unique][helpstring][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_IDevicePacketStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD6A1F9F-086E-41DF-BAD2-6C7B24825DCF")
    IDevicePacketStream : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [retval][out] */ IPacket **out_ppPacket) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Write( 
            /* [in] */ IPacket *in_pPacket) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPacketAvailable( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Buffering( 
            /* [retval][out] */ VARIANT_BOOL *pbBuffering) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Buffering( 
            /* [in] */ VARIANT_BOOL bBuffering) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsConnected( 
            /* [retval][out] */ VARIANT_BOOL *pbConnected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MaxPacketSize( 
            /* [retval][out] */ LONG *plPacketSize) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDevicePacketStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDevicePacketStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDevicePacketStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDevicePacketStream * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IDevicePacketStream * This,
            /* [retval][out] */ IPacket **out_ppPacket);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            IDevicePacketStream * This,
            /* [in] */ IPacket *in_pPacket);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPacketAvailable )( 
            IDevicePacketStream * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffering )( 
            IDevicePacketStream * This,
            /* [retval][out] */ VARIANT_BOOL *pbBuffering);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Buffering )( 
            IDevicePacketStream * This,
            /* [in] */ VARIANT_BOOL bBuffering);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsConnected )( 
            IDevicePacketStream * This,
            /* [retval][out] */ VARIANT_BOOL *pbConnected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IDevicePacketStream * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MaxPacketSize )( 
            IDevicePacketStream * This,
            /* [retval][out] */ LONG *plPacketSize);
        
        END_INTERFACE
    } IDevicePacketStreamVtbl;

    interface IDevicePacketStream
    {
        CONST_VTBL struct IDevicePacketStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDevicePacketStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDevicePacketStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDevicePacketStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDevicePacketStream_Read(This,out_ppPacket)	\
    ( (This)->lpVtbl -> Read(This,out_ppPacket) ) 

#define IDevicePacketStream_Write(This,in_pPacket)	\
    ( (This)->lpVtbl -> Write(This,in_pPacket) ) 

#define IDevicePacketStream_IsPacketAvailable(This,pVal)	\
    ( (This)->lpVtbl -> IsPacketAvailable(This,pVal) ) 

#define IDevicePacketStream_get_Buffering(This,pbBuffering)	\
    ( (This)->lpVtbl -> get_Buffering(This,pbBuffering) ) 

#define IDevicePacketStream_put_Buffering(This,bBuffering)	\
    ( (This)->lpVtbl -> put_Buffering(This,bBuffering) ) 

#define IDevicePacketStream_IsConnected(This,pbConnected)	\
    ( (This)->lpVtbl -> IsConnected(This,pbConnected) ) 

#define IDevicePacketStream_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#define IDevicePacketStream_get_MaxPacketSize(This,plPacketSize)	\
    ( (This)->lpVtbl -> get_MaxPacketSize(This,plPacketSize) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDevicePacketStream_INTERFACE_DEFINED__ */


#ifndef __IDeviceStream_INTERFACE_DEFINED__
#define __IDeviceStream_INTERFACE_DEFINED__

/* interface IDeviceStream */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDeviceStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("48956B2C-47F3-45EE-8AB3-B7B09220F8AC")
    IDeviceStream : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Read( 
            /* [size_is][out] */ BYTE in_pBuffer[  ],
            /* [out][in] */ DWORD *in_pArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Write( 
            /* [size_is][in] */ BYTE in_pBuffer[  ],
            /* [in] */ DWORD in_ArraySize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsDataAvailable( 
            /* [out] */ VARIANT_BOOL *pbDataAvailable) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Buffering( 
            /* [retval][out] */ VARIANT_BOOL *pbBuffering) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Buffering( 
            /* [in] */ VARIANT_BOOL bBuffering) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsConnected( 
            /* [out] */ VARIANT_BOOL *pbConnected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Disconnect( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDeviceStreamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeviceStream * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeviceStream * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeviceStream * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IDeviceStream * This,
            /* [size_is][out] */ BYTE in_pBuffer[  ],
            /* [out][in] */ DWORD *in_pArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Write )( 
            IDeviceStream * This,
            /* [size_is][in] */ BYTE in_pBuffer[  ],
            /* [in] */ DWORD in_ArraySize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsDataAvailable )( 
            IDeviceStream * This,
            /* [out] */ VARIANT_BOOL *pbDataAvailable);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Buffering )( 
            IDeviceStream * This,
            /* [retval][out] */ VARIANT_BOOL *pbBuffering);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Buffering )( 
            IDeviceStream * This,
            /* [in] */ VARIANT_BOOL bBuffering);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsConnected )( 
            IDeviceStream * This,
            /* [out] */ VARIANT_BOOL *pbConnected);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Disconnect )( 
            IDeviceStream * This);
        
        END_INTERFACE
    } IDeviceStreamVtbl;

    interface IDeviceStream
    {
        CONST_VTBL struct IDeviceStreamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeviceStream_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeviceStream_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeviceStream_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeviceStream_Read(This,in_pBuffer,in_pArraySize)	\
    ( (This)->lpVtbl -> Read(This,in_pBuffer,in_pArraySize) ) 

#define IDeviceStream_Write(This,in_pBuffer,in_ArraySize)	\
    ( (This)->lpVtbl -> Write(This,in_pBuffer,in_ArraySize) ) 

#define IDeviceStream_IsDataAvailable(This,pbDataAvailable)	\
    ( (This)->lpVtbl -> IsDataAvailable(This,pbDataAvailable) ) 

#define IDeviceStream_get_Buffering(This,pbBuffering)	\
    ( (This)->lpVtbl -> get_Buffering(This,pbBuffering) ) 

#define IDeviceStream_put_Buffering(This,bBuffering)	\
    ( (This)->lpVtbl -> put_Buffering(This,bBuffering) ) 

#define IDeviceStream_IsConnected(This,pbConnected)	\
    ( (This)->lpVtbl -> IsConnected(This,pbConnected) ) 

#define IDeviceStream_Disconnect(This)	\
    ( (This)->lpVtbl -> Disconnect(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeviceStream_INTERFACE_DEFINED__ */


#ifndef __IAgentTransportShutdownCallback_INTERFACE_DEFINED__
#define __IAgentTransportShutdownCallback_INTERFACE_DEFINED__

/* interface IAgentTransportShutdownCallback */
/* [unique][helpstring][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_IAgentTransportShutdownCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1ECA6EBC-4B7A-4BA6-8516-DB38DF0045A5")
    IAgentTransportShutdownCallback : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Shutdown( 
            /* [in] */ IUnknown *in_pUnknown) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAgentTransportShutdownCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAgentTransportShutdownCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAgentTransportShutdownCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAgentTransportShutdownCallback * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            IAgentTransportShutdownCallback * This,
            /* [in] */ IUnknown *in_pUnknown);
        
        END_INTERFACE
    } IAgentTransportShutdownCallbackVtbl;

    interface IAgentTransportShutdownCallback
    {
        CONST_VTBL struct IAgentTransportShutdownCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAgentTransportShutdownCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAgentTransportShutdownCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAgentTransportShutdownCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAgentTransportShutdownCallback_Shutdown(This,in_pUnknown)	\
    ( (This)->lpVtbl -> Shutdown(This,in_pUnknown) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAgentTransportShutdownCallback_INTERFACE_DEFINED__ */


#ifndef __IDeviceAgentTransport_INTERFACE_DEFINED__
#define __IDeviceAgentTransport_INTERFACE_DEFINED__

/* interface IDeviceAgentTransport */
/* [unique][helpstring][nonextensible][uuid][object] */ 


EXTERN_C const IID IID_IDeviceAgentTransport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A28F4830-7032-44FE-9038-C215AC298C22")
    IDeviceAgentTransport : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AcknowledgeLaunch( 
            /* [in] */ DWORD in_ArraySize,
            /* [size_is][in] */ LPCOLESTR in_szServiceIds[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AcceptConnectionEx( 
            /* [full][in] */ LPCOLESTR in_szServiceId,
            /* [out] */ IDevicePacketStream **out_pDevicePacketStream) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RegisterShutdownCallback( 
            /* [in] */ IAgentTransportShutdownCallback *in_pCallback,
            /* [in] */ IUnknown *in_pUnknown) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnregisterShutdownCallback( 
            /* [in] */ IAgentTransportShutdownCallback *in_pCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDeviceAgentTransportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeviceAgentTransport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeviceAgentTransport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeviceAgentTransport * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcknowledgeLaunch )( 
            IDeviceAgentTransport * This,
            /* [in] */ DWORD in_ArraySize,
            /* [size_is][in] */ LPCOLESTR in_szServiceIds[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcceptConnectionEx )( 
            IDeviceAgentTransport * This,
            /* [full][in] */ LPCOLESTR in_szServiceId,
            /* [out] */ IDevicePacketStream **out_pDevicePacketStream);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RegisterShutdownCallback )( 
            IDeviceAgentTransport * This,
            /* [in] */ IAgentTransportShutdownCallback *in_pCallback,
            /* [in] */ IUnknown *in_pUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnregisterShutdownCallback )( 
            IDeviceAgentTransport * This,
            /* [in] */ IAgentTransportShutdownCallback *in_pCallback);
        
        END_INTERFACE
    } IDeviceAgentTransportVtbl;

    interface IDeviceAgentTransport
    {
        CONST_VTBL struct IDeviceAgentTransportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeviceAgentTransport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeviceAgentTransport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeviceAgentTransport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeviceAgentTransport_AcknowledgeLaunch(This,in_ArraySize,in_szServiceIds)	\
    ( (This)->lpVtbl -> AcknowledgeLaunch(This,in_ArraySize,in_szServiceIds) ) 

#define IDeviceAgentTransport_AcceptConnectionEx(This,in_szServiceId,out_pDevicePacketStream)	\
    ( (This)->lpVtbl -> AcceptConnectionEx(This,in_szServiceId,out_pDevicePacketStream) ) 

#define IDeviceAgentTransport_RegisterShutdownCallback(This,in_pCallback,in_pUnknown)	\
    ( (This)->lpVtbl -> RegisterShutdownCallback(This,in_pCallback,in_pUnknown) ) 

#define IDeviceAgentTransport_UnregisterShutdownCallback(This,in_pCallback)	\
    ( (This)->lpVtbl -> UnregisterShutdownCallback(This,in_pCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeviceAgentTransport_INTERFACE_DEFINED__ */

#endif /* __DeviceAgentTransport2Lib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_DeviceAgentTransport_0000_0001 */
/* [local] */ 

#pragma warning(pop)


extern RPC_IF_HANDLE __MIDL_itf_DeviceAgentTransport_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_DeviceAgentTransport_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


