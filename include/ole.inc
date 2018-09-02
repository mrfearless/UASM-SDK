;--- include file created by h2incx v0.93, copyright 2005 japheth
;--- source file: c:\programme\devstudio\vc6\include\ole.h, last modified: 4/24/1998 0:0
ifndef _INC_OLE
_INC_OLE	EQU	<>
ifdef WIN16 
	include pshpack1.inc
endif 
ifdef __cplusplus 
;extern "C"{ 
endif 
ifndef WINAPI
WINAPI	EQU	<FAR PASCAL>
CALLBACK	EQU	<FAR PASCAL>
LPCSTR	EQU	<LPSTR>
LRESULT	EQU	<LONG>
HGLOBAL	EQU	<HANDLE>
endif 
ifdef STRICT 
OLE_LPCSTR	EQU	<LPCSTR>
OLE_CONST	EQU	<const>
else 
OLE_LPCSTR	EQU	<LPSTR>
OLE_CONST	EQU	<>
endif 
LRESULT	EQU	<LONG>
HGLOBAL	EQU	<HANDLE>
OT_LINK	EQU	1
OT_EMBEDDED	EQU	2
OT_STATIC	EQU	3
OLEVERB_PRIMARY	EQU	0
OLETARGETDEVICE	struct
otdDeviceNameOffset	WORD	?
otdDriverNameOffset	WORD	?
otdPortNameOffset	WORD	?
otdExtDevmodeOffset	WORD	?
otdExtDevmodeSize	WORD	?
otdEnvironmentOffset	WORD	?
otdEnvironmentSize	WORD	?
otdData	BYTE 1 dup (?)
OLETARGETDEVICE	ends

LPOLETARGETDEVICE  typedef ptr OLETARGETDEVICE
OF_SET	EQU	0001h
OF_GET	EQU	0002h
OF_HANDLER	EQU	0004h
OLESTATUS typedef DWORD
OLE_OK = 0
OLE_WAIT_FOR_RELEASE = 1
OLE_BUSY = 2
OLE_ERROR_PROTECT_ONLY = 3
OLE_ERROR_MEMORY = 4
OLE_ERROR_STREAM = 5
OLE_ERROR_STATIC = 6
OLE_ERROR_BLANK = 7
OLE_ERROR_DRAW = 8
OLE_ERROR_METAFILE = 9
OLE_ERROR_ABORT = 10
OLE_ERROR_CLIPBOARD = 11
OLE_ERROR_FORMAT = 12
OLE_ERROR_OBJECT = 13
OLE_ERROR_OPTION = 14
OLE_ERROR_PROTOCOL = 15
OLE_ERROR_ADDRESS = 16
OLE_ERROR_NOT_EQUAL = 17
OLE_ERROR_HANDLE = 18
OLE_ERROR_GENERIC = 19
OLE_ERROR_CLASS = 20
OLE_ERROR_SYNTAX = 21
OLE_ERROR_DATATYPE = 22
OLE_ERROR_PALETTE = 23
OLE_ERROR_NOT_LINK = 24
OLE_ERROR_NOT_EMPTY = 25
OLE_ERROR_SIZE = 26
OLE_ERROR_DRIVE = 27
OLE_ERROR_NETWORK = 28
OLE_ERROR_NAME = 29
OLE_ERROR_TEMPLATE = 30
OLE_ERROR_NEW = 31
OLE_ERROR_EDIT = 32
OLE_ERROR_OPEN = 33
OLE_ERROR_NOT_OPEN = 34
OLE_ERROR_LAUNCH = 35
OLE_ERROR_COMM = 36
OLE_ERROR_TERMINATE = 37
OLE_ERROR_COMMAND = 38
OLE_ERROR_SHOW = 39
OLE_ERROR_DOVERB = 40
OLE_ERROR_ADVISE_NATIVE = 41
OLE_ERROR_ADVISE_PICT = 42
OLE_ERROR_ADVISE_RENAME = 43
OLE_ERROR_POKE_NATIVE = 44
OLE_ERROR_REQUEST_NATIVE = 45
OLE_ERROR_REQUEST_PICT = 46
OLE_ERROR_SERVER_BLOCKED = 47
OLE_ERROR_REGISTRATION = 48
OLE_ERROR_ALREADY_REGISTERED = 49
OLE_ERROR_TASK = 50
OLE_ERROR_OUTOFDATE = 51
OLE_ERROR_CANT_UPDATE_CLIENT = 52
OLE_ERROR_UPDATE = 53
OLE_ERROR_SETDATA_FORMAT = 54
OLE_ERROR_STATIC_FROM_OTHER_OS = 55
OLE_ERROR_FILE_VER = 56
OLE_WARN_DELETE_DATA = 1000 

OLE_NOTIFICATION typedef DWORD
OLE_CHANGED = 0
OLE_SAVED = 1
OLE_CLOSED = 2
OLE_RENAMED = 3
OLE_QUERY_PAINT = 4
OLE_RELEASE = 5
OLE_QUERY_RETRY = 6

OLE_RELEASE_METHOD typedef DWORD
OLE_NONE = 0
OLE_DELETE = 1
OLE_LNKPASTE = 2
OLE_EMBPASTE = 3
OLE_SHOW = 4
OLE_RUN = 5
OLE_ACTIVATE = 6
OLE_UPDATE = 7
OLE_CLOSE = 8
OLE_RECONNECT = 9
OLE_SETUPDATEOPTIONS = 10
OLE_SERVERUNLAUNCH = 11
OLE_LOADFROMSTREAM = 12
OLE_SETDATA = 13
OLE_REQUESTDATA = 14
OLE_OTHER = 15
OLE_CREATE = 16
OLE_CREATEFROMTEMPLATE = 17
OLE_CREATELINKFROMFILE = 18
OLE_COPYFROMLNK = 19
OLE_CREATEFROMFILE = 20
OLE_CREATEINVISIBLE = 21

OLEOPT_RENDER typedef DWORD
olerender_none = 0
olerender_draw = 1
olerender_format = 2

OLECLIPFORMAT  typedef WORD
OLEOPT_UPDATE typedef DWORD
oleupdate_always = 0
oleupdate_onsave = 1
ifdef OLE_INTERNAL 
oleupdate_oncall = 2
oleupdate_onclose = else 
oleupdate_oncall endif 


HOBJECT  typedef HANDLE
LHSERVER  typedef SDWORD
LHCLIENTDOC  typedef SDWORD
LHSERVERDOC  typedef SDWORD
LPOLEOBJECT typedef ptr _OLEOBJECT

LPOLESTREAM typedef ptr _OLESTREAM

LPOLECLIENT typedef ptr _OLECLIENT

OLEOBJECTVTBL	struct
protoOLEOBJECTVTBL_QueryProtocol typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLE_LPCSTR
pOLEOBJECTVTBL_QueryProtocol typedef ptr protoOLEOBJECTVTBL_QueryProtocol
QueryProtocol	DWORD	?
protoOLEOBJECTVTBL_Release typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_Release typedef ptr protoOLEOBJECTVTBL_Release
Release	pOLEOBJECTVTBL_Release	?
protoOLEOBJECTVTBL_Show typedef proto WINSTDCALLCONV :LPOLEOBJECT,:BOOL
pOLEOBJECTVTBL_Show typedef ptr protoOLEOBJECTVTBL_Show
Show	pOLEOBJECTVTBL_Show	?
protoOLEOBJECTVTBL_DoVerb typedef proto WINSTDCALLCONV :LPOLEOBJECT,:DWORD,:BOOL,:BOOL
pOLEOBJECTVTBL_DoVerb typedef ptr protoOLEOBJECTVTBL_DoVerb
DoVerb	pOLEOBJECTVTBL_DoVerb	?
protoOLEOBJECTVTBL_GetData typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLECLIPFORMAT,:ptr HANDLE
pOLEOBJECTVTBL_GetData typedef ptr protoOLEOBJECTVTBL_GetData
GetData	pOLEOBJECTVTBL_GetData	?
protoOLEOBJECTVTBL_SetData typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLECLIPFORMAT,:HANDLE
pOLEOBJECTVTBL_SetData typedef ptr protoOLEOBJECTVTBL_SetData
SetData	pOLEOBJECTVTBL_SetData	?
protoOLEOBJECTVTBL_SetTargetDevice typedef proto WINSTDCALLCONV :LPOLEOBJECT,:HGLOBAL
pOLEOBJECTVTBL_SetTargetDevice typedef ptr protoOLEOBJECTVTBL_SetTargetDevice
SetTargetDevice	pOLEOBJECTVTBL_SetTargetDevice	?
protoOLEOBJECTVTBL_SetBounds typedef proto WINSTDCALLCONV :LPOLEOBJECT,:ptr OLE_CONST
pOLEOBJECTVTBL_SetBounds typedef ptr protoOLEOBJECTVTBL_SetBounds
SetBounds	pOLEOBJECTVTBL_SetBounds	?
protoOLEOBJECTVTBL_EnumFormats typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLECLIPFORMAT
pOLEOBJECTVTBL_EnumFormats typedef ptr protoOLEOBJECTVTBL_EnumFormats
EnumFormats	pOLEOBJECTVTBL_EnumFormats	?
protoOLEOBJECTVTBL_SetColorScheme typedef proto WINSTDCALLCONV :LPOLEOBJECT,:ptr OLE_CONST
pOLEOBJECTVTBL_SetColorScheme typedef ptr protoOLEOBJECTVTBL_SetColorScheme
SetColorScheme	pOLEOBJECTVTBL_SetColorScheme	?
ifndef SERVERONLY
protoOLEOBJECTVTBL_Delete typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_Delete typedef ptr protoOLEOBJECTVTBL_Delete
Delete	pOLEOBJECTVTBL_Delete	?
protoOLEOBJECTVTBL_SetHostNames typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLE_LPCSTR,:OLE_LPCSTR
pOLEOBJECTVTBL_SetHostNames typedef ptr protoOLEOBJECTVTBL_SetHostNames
SetHostNames	pOLEOBJECTVTBL_SetHostNames	?
protoOLEOBJECTVTBL_SaveToStream typedef proto WINSTDCALLCONV :LPOLEOBJECT,:LPOLESTREAM
pOLEOBJECTVTBL_SaveToStream typedef ptr protoOLEOBJECTVTBL_SaveToStream
SaveToStream	pOLEOBJECTVTBL_SaveToStream	?
protoOLEOBJECTVTBL_Clone typedef proto WINSTDCALLCONV :LPOLEOBJECT,:LPOLECLIENT,:LHCLIENTDOC,:OLE_LPCSTR,:ptr LPOLEOBJECT
pOLEOBJECTVTBL_Clone typedef ptr protoOLEOBJECTVTBL_Clone
Clone	pOLEOBJECTVTBL_Clone	?
protoOLEOBJECTVTBL_CopyFromLink typedef proto WINSTDCALLCONV :LPOLEOBJECT,:LPOLECLIENT,:LHCLIENTDOC,:OLE_LPCSTR,:ptr LPOLEOBJECT
pOLEOBJECTVTBL_CopyFromLink typedef ptr protoOLEOBJECTVTBL_CopyFromLink
CopyFromLink	pOLEOBJECTVTBL_CopyFromLink	?
protoOLEOBJECTVTBL_Equal typedef proto WINSTDCALLCONV :LPOLEOBJECT,:LPOLEOBJECT
pOLEOBJECTVTBL_Equal typedef ptr protoOLEOBJECTVTBL_Equal
Equal	pOLEOBJECTVTBL_Equal	?
protoOLEOBJECTVTBL_CopyToClipboard typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_CopyToClipboard typedef ptr protoOLEOBJECTVTBL_CopyToClipboard
CopyToClipboard	pOLEOBJECTVTBL_CopyToClipboard	?
protoOLEOBJECTVTBL_Draw typedef proto WINSTDCALLCONV :LPOLEOBJECT,:HDC,:ptr OLE_CONST,:ptr OLE_CONST,:HDC
pOLEOBJECTVTBL_Draw typedef ptr protoOLEOBJECTVTBL_Draw
Draw	pOLEOBJECTVTBL_Draw	?
protoOLEOBJECTVTBL_Activate typedef proto WINSTDCALLCONV :LPOLEOBJECT,:DWORD,:BOOL,:BOOL,:HWND,:ptr OLE_CONST
pOLEOBJECTVTBL_Activate typedef ptr protoOLEOBJECTVTBL_Activate
Activate	pOLEOBJECTVTBL_Activate	?
protoOLEOBJECTVTBL_Execute typedef proto WINSTDCALLCONV :LPOLEOBJECT,:HGLOBAL,:DWORD
pOLEOBJECTVTBL_Execute typedef ptr protoOLEOBJECTVTBL_Execute
Execute	pOLEOBJECTVTBL_Execute	?
protoOLEOBJECTVTBL_Close typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_Close typedef ptr protoOLEOBJECTVTBL_Close
Close	pOLEOBJECTVTBL_Close	?
protoOLEOBJECTVTBL_Update typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_Update typedef ptr protoOLEOBJECTVTBL_Update
Update	pOLEOBJECTVTBL_Update	?
protoOLEOBJECTVTBL_Reconnect typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_Reconnect typedef ptr protoOLEOBJECTVTBL_Reconnect
Reconnect	pOLEOBJECTVTBL_Reconnect	?
protoOLEOBJECTVTBL_ObjectConvert typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLE_LPCSTR,:LPOLECLIENT,:LHCLIENTDOC,:OLE_LPCSTR,:ptr LPOLEOBJECT
pOLEOBJECTVTBL_ObjectConvert typedef ptr protoOLEOBJECTVTBL_ObjectConvert
ObjectConvert	pOLEOBJECTVTBL_ObjectConvert	?
protoOLEOBJECTVTBL_GetLinkUpdateOptions typedef proto WINSTDCALLCONV :LPOLEOBJECT,:ptr OLEOPT_UPDATE
pOLEOBJECTVTBL_GetLinkUpdateOptions typedef ptr protoOLEOBJECTVTBL_GetLinkUpdateOptions
GetLinkUpdateOptions	pOLEOBJECTVTBL_GetLinkUpdateOptions	?
protoOLEOBJECTVTBL_SetLinkUpdateOptions typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLEOPT_UPDATE
pOLEOBJECTVTBL_SetLinkUpdateOptions typedef ptr protoOLEOBJECTVTBL_SetLinkUpdateOptions
SetLinkUpdateOptions	pOLEOBJECTVTBL_SetLinkUpdateOptions	?
protoOLEOBJECTVTBL_Rename typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLE_LPCSTR
pOLEOBJECTVTBL_Rename typedef ptr protoOLEOBJECTVTBL_Rename
Rename	pOLEOBJECTVTBL_Rename	?
protoOLEOBJECTVTBL_QueryName typedef proto WINSTDCALLCONV :LPOLEOBJECT,:LPSTR,:ptr DWORD
pOLEOBJECTVTBL_QueryName typedef ptr protoOLEOBJECTVTBL_QueryName
QueryName	pOLEOBJECTVTBL_QueryName	?
protoOLEOBJECTVTBL_QueryType typedef proto WINSTDCALLCONV :LPOLEOBJECT,:ptr SDWORD
pOLEOBJECTVTBL_QueryType typedef ptr protoOLEOBJECTVTBL_QueryType
QueryType	pOLEOBJECTVTBL_QueryType	?
protoOLEOBJECTVTBL_QueryBounds typedef proto WINSTDCALLCONV :LPOLEOBJECT,:ptr RECT
pOLEOBJECTVTBL_QueryBounds typedef ptr protoOLEOBJECTVTBL_QueryBounds
QueryBounds	pOLEOBJECTVTBL_QueryBounds	?
protoOLEOBJECTVTBL_QuerySize typedef proto WINSTDCALLCONV :LPOLEOBJECT,:ptr DWORD
pOLEOBJECTVTBL_QuerySize typedef ptr protoOLEOBJECTVTBL_QuerySize
QuerySize	pOLEOBJECTVTBL_QuerySize	?
protoOLEOBJECTVTBL_QueryOpen typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_QueryOpen typedef ptr protoOLEOBJECTVTBL_QueryOpen
QueryOpen	pOLEOBJECTVTBL_QueryOpen	?
protoOLEOBJECTVTBL_QueryOutOfDate typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_QueryOutOfDate typedef ptr protoOLEOBJECTVTBL_QueryOutOfDate
QueryOutOfDate	pOLEOBJECTVTBL_QueryOutOfDate	?
protoOLEOBJECTVTBL_QueryReleaseStatus typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_QueryReleaseStatus typedef ptr protoOLEOBJECTVTBL_QueryReleaseStatus
QueryReleaseStatus	pOLEOBJECTVTBL_QueryReleaseStatus	?
protoOLEOBJECTVTBL_QueryReleaseError typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_QueryReleaseError typedef ptr protoOLEOBJECTVTBL_QueryReleaseError
QueryReleaseError	pOLEOBJECTVTBL_QueryReleaseError	?
protoOLEOBJECTVTBL_QueryReleaseMethod typedef proto WINSTDCALLCONV :LPOLEOBJECT
pOLEOBJECTVTBL_QueryReleaseMethod typedef ptr protoOLEOBJECTVTBL_QueryReleaseMethod
QueryReleaseMethod	pOLEOBJECTVTBL_QueryReleaseMethod	?
protoOLEOBJECTVTBL_RequestData typedef proto WINSTDCALLCONV :LPOLEOBJECT,:OLECLIPFORMAT
pOLEOBJECTVTBL_RequestData typedef ptr protoOLEOBJECTVTBL_RequestData
RequestData	pOLEOBJECTVTBL_RequestData	?
protoOLEOBJECTVTBL_ObjectLong typedef proto WINSTDCALLCONV :LPOLEOBJECT,:DWORD,:ptr SDWORD
pOLEOBJECTVTBL_ObjectLong typedef ptr protoOLEOBJECTVTBL_ObjectLong
ObjectLong	pOLEOBJECTVTBL_ObjectLong	?
protoOLEOBJECTVTBL_ChangeData typedef proto WINSTDCALLCONV :LPOLEOBJECT,:HANDLE,:LPOLECLIENT,:BOOL
pOLEOBJECTVTBL_ChangeData typedef ptr protoOLEOBJECTVTBL_ChangeData
ChangeData	pOLEOBJECTVTBL_ChangeData	?
endif 
OLEOBJECTVTBL	ends

LPOLEOBJECTVTBL  typedef ptr OLEOBJECTVTBL
ifndef OLE_INTERNAL
OLEOBJECT	struct
lpvtbl	LPOLEOBJECTVTBL	?
OLEOBJECT	ends

endif 

protoOLECLIENTVTBL_CallBack typedef proto WINSTDCALLCONV :LPOLECLIENT,:OLE_NOTIFICATION,:LPOLEOBJECT
pOLECLIENTVTBL_CallBack typedef ptr protoOLECLIENTVTBL_CallBack

OLECLIENTVTBL	struct
CallBack	pOLECLIENTVTBL_CallBack	?
OLECLIENTVTBL	ends

LPOLECLIENTVTBL  typedef ptr OLECLIENTVTBL
OLECLIENT	struct
lpvtbl	LPOLECLIENTVTBL	?
OLECLIENT	ends

protoOLESTREAMVTBL_Get typedef proto WINSTDCALLCONV :LPOLESTREAM,:ptr ,:DWORD
pOLESTREAMVTBL_Get typedef ptr protoOLESTREAMVTBL_Get
protoOLESTREAMVTBL_Put typedef proto WINSTDCALLCONV :LPOLESTREAM,:ptr OLE_CONST,:DWORD
pOLESTREAMVTBL_Put typedef ptr protoOLESTREAMVTBL_Put

OLESTREAMVTBL	struct
Get	pOLESTREAMVTBL_Get	?
Put	pOLESTREAMVTBL_Put	?
OLESTREAMVTBL	ends

LPOLESTREAMVTBL  typedef ptr OLESTREAMVTBL
OLESTREAM	struct
lpstbl	LPOLESTREAMVTBL	?
OLESTREAM	ends

OleDelete proto WINSTDCALLCONV  :DWORD
OleRelease proto WINSTDCALLCONV  :DWORD
OleSaveToStream proto WINSTDCALLCONV  :DWORD, :DWORD
OleEqual proto WINSTDCALLCONV  :DWORD, :DWORD
OleCopyToClipboard proto WINSTDCALLCONV  :DWORD
OleSetHostNames proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD
OleSetTargetDevice proto WINSTDCALLCONV  :DWORD, :DWORD
OleSetBounds proto WINSTDCALLCONV  :DWORD, :ptr DWORD
OleSetColorScheme proto WINSTDCALLCONV  :DWORD, :ptr DWORD
OleQueryBounds proto WINSTDCALLCONV  :DWORD, :ptr DWORD
OleQuerySize proto WINSTDCALLCONV  :DWORD, :ptr DWORD
OleDraw proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr DWORD, :ptr DWORD, :DWORD
OleQueryOpen proto WINSTDCALLCONV  :DWORD
OleActivate proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD
OleExecute proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD
OleClose proto WINSTDCALLCONV  :DWORD
OleUpdate proto WINSTDCALLCONV  :DWORD
OleReconnect proto WINSTDCALLCONV  :DWORD
OleGetLinkUpdateOptions proto WINSTDCALLCONV  :DWORD, :ptr DWORD
OleSetLinkUpdateOptions proto WINSTDCALLCONV  :DWORD, :DWORD
OleQueryProtocol proto WINSTDCALLCONV  :DWORD, :DWORD
OleQueryReleaseStatus proto WINSTDCALLCONV  :DWORD
OleQueryReleaseError proto WINSTDCALLCONV  :DWORD
OleQueryReleaseMethod proto WINSTDCALLCONV  :DWORD
OleQueryType proto WINSTDCALLCONV  :DWORD, :ptr DWORD
OleQueryClientVersion proto WINSTDCALLCONV 
OleQueryServerVersion proto WINSTDCALLCONV 
OleEnumFormats proto WINSTDCALLCONV  :DWORD, :DWORD
OleGetData proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr DWORD
OleSetData proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD
OleQueryOutOfDate proto WINSTDCALLCONV  :DWORD
OleRequestData proto WINSTDCALLCONV  :DWORD, :DWORD
OleQueryLinkFromClip proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD
OleQueryCreateFromClip proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD
OleCreateFromClip proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
OleCreateLinkFromClip proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
OleCreateFromFile proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
OleCreateLinkFromFile proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
OleLoadFromStream proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD
OleCreate proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
OleCreateInvisible proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD, :DWORD
OleCreateFromTemplate proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
OleClone proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD
OleCopyFromLink proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD
OleObjectConvert proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :DWORD, :DWORD, :ptr DWORD
OleRename proto WINSTDCALLCONV  :DWORD, :DWORD
OleQueryName proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr DWORD
OleRevokeObject proto WINSTDCALLCONV  :DWORD
OleIsDcMeta proto WINSTDCALLCONV  :DWORD
OleRegisterClientDoc proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :ptr DWORD
OleRevokeClientDoc proto WINSTDCALLCONV  :DWORD
OleRenameClientDoc proto WINSTDCALLCONV  :DWORD, :DWORD
OleRevertClientDoc proto WINSTDCALLCONV  :DWORD
OleSavedClientDoc proto WINSTDCALLCONV  :DWORD
OleEnumObjects proto WINSTDCALLCONV  :DWORD, :ptr DWORD

OLE_SERVER_USE typedef DWORD
OLE_SERVER_MULTI = 0
OLE_SERVER_SINGLE = 1

LPOLESERVER typedef ptr _OLESERVER

OleRegisterServer proto WINSTDCALLCONV  :DWORD, :DWORD, :ptr DWORD, :DWORD, :DWORD
OleRevokeServer proto WINSTDCALLCONV  :DWORD
OleBlockServer proto WINSTDCALLCONV  :DWORD
OleUnblockServer proto WINSTDCALLCONV  :DWORD, :ptr DWORD
OleLockServer proto WINSTDCALLCONV  :DWORD, :ptr DWORD
OleUnlockServer proto WINSTDCALLCONV  :DWORD

LPOLESERVERDOC typedef ptr _OLESERVERDOC

OleRegisterServerDoc proto WINSTDCALLCONV  :DWORD, :DWORD, :DWORD, :ptr DWORD
OleRevokeServerDoc proto WINSTDCALLCONV  :DWORD
OleRenameServerDoc proto WINSTDCALLCONV  :DWORD, :DWORD
OleRevertServerDoc proto WINSTDCALLCONV  :DWORD
OleSavedServerDoc proto WINSTDCALLCONV  :DWORD

protoOLESERVERVTBL_Open typedef proto WINSTDCALLCONV :LPOLESERVER,:LHSERVERDOC,:OLE_LPCSTR,:ptr LPOLESERVERDOC
pOLESERVERVTBL_Open typedef ptr protoOLESERVERVTBL_Open
protoOLESERVERVTBL_Create typedef proto WINSTDCALLCONV :LPOLESERVER,:LHSERVERDOC,:OLE_LPCSTR,:OLE_LPCSTR,:ptr LPOLESERVERDOC
pOLESERVERVTBL_Create typedef ptr protoOLESERVERVTBL_Create
protoOLESERVERVTBL_CreateFromTemplate typedef proto WINSTDCALLCONV :LPOLESERVER,:LHSERVERDOC,:OLE_LPCSTR,:OLE_LPCSTR,:OLE_LPCSTR,:ptr LPOLESERVERDOC
pOLESERVERVTBL_CreateFromTemplate typedef ptr protoOLESERVERVTBL_CreateFromTemplate
protoOLESERVERVTBL_Edit typedef proto WINSTDCALLCONV :LPOLESERVER,:LHSERVERDOC,:OLE_LPCSTR,:OLE_LPCSTR,:ptr LPOLESERVERDOC
pOLESERVERVTBL_Edit typedef ptr protoOLESERVERVTBL_Edit
protoOLESERVERVTBL_Exit typedef proto WINSTDCALLCONV :LPOLESERVER
pOLESERVERVTBL_Exit typedef ptr protoOLESERVERVTBL_Exit
protoOLESERVERVTBL_Release typedef proto WINSTDCALLCONV :LPOLESERVER
pOLESERVERVTBL_Release typedef ptr protoOLESERVERVTBL_Release
protoOLESERVERVTBL_Execute typedef proto WINSTDCALLCONV :LPOLESERVER,:HGLOBAL
pOLESERVERVTBL_Execute typedef ptr protoOLESERVERVTBL_Execute

OLESERVERVTBL	struct
Open                pOLESERVERVTBL_Open ?
Create              pOLESERVERVTBL_Create ?
CreateFromTemplate  pOLESERVERVTBL_CreateFromTemplate ?
Edit                pOLESERVERVTBL_Edit ?
Exit                pOLESERVERVTBL_Exit ?
Release             pOLESERVERVTBL_Release ?
Execute             pOLESERVERVTBL_Execute ?
OLESERVERVTBL	ends

LPOLESERVERVTBL  typedef ptr OLESERVERVTBL
OLESERVER	struct
lpvtbl	LPOLESERVERVTBL	?
OLESERVER	ends

protoOLESERVERDOCVTBL_Save typedef proto WINSTDCALLCONV :LPOLESERVERDOC
pOLESERVERDOCVTBL_Save typedef ptr protoOLESERVERDOCVTBL_Save
protoOLESERVERDOCVTBL_Close typedef proto WINSTDCALLCONV :LPOLESERVERDOC
pOLESERVERDOCVTBL_Close typedef ptr protoOLESERVERDOCVTBL_Close
protoOLESERVERDOCVTBL_SetHostNames typedef proto WINSTDCALLCONV :LPOLESERVERDOC,:OLE_LPCSTR,:OLE_LPCSTR
pOLESERVERDOCVTBL_SetHostNames typedef ptr protoOLESERVERDOCVTBL_SetHostNames
protoOLESERVERDOCVTBL_SetDocDimensions typedef proto WINSTDCALLCONV :LPOLESERVERDOC,:ptr OLE_CONST
pOLESERVERDOCVTBL_SetDocDimensions typedef ptr protoOLESERVERDOCVTBL_SetDocDimensions
protoOLESERVERDOCVTBL_GetObject typedef proto WINSTDCALLCONV :LPOLESERVERDOC,:OLE_LPCSTR,:ptr LPOLEOBJECT,:LPOLECLIENT
pOLESERVERDOCVTBL_GetObject typedef ptr protoOLESERVERDOCVTBL_GetObject
protoOLESERVERDOCVTBL_Release typedef proto WINSTDCALLCONV :LPOLESERVERDOC
pOLESERVERDOCVTBL_Release typedef ptr protoOLESERVERDOCVTBL_Release
protoOLESERVERDOCVTBL_SetColorScheme typedef proto WINSTDCALLCONV :LPOLESERVERDOC,:ptr OLE_CONST
pOLESERVERDOCVTBL_SetColorScheme typedef ptr protoOLESERVERDOCVTBL_SetColorScheme
protoOLESERVERDOCVTBL_Execute typedef proto WINSTDCALLCONV :LPOLESERVERDOC,:HGLOBAL
pOLESERVERDOCVTBL_Execute typedef ptr protoOLESERVERDOCVTBL_Execute

OLESERVERDOCVTBL	struct
Save            pOLESERVERDOCVTBL_Save ?
Close           pOLESERVERDOCVTBL_Close ?
SetHostNames    pOLESERVERDOCVTBL_SetHostNames ?
SetDocDimensions pOLESERVERDOCVTBL_SetDocDimensions ?
GetObject       pOLESERVERDOCVTBL_GetObject ?
Release         pOLESERVERDOCVTBL_Release ?
SetColorScheme  pOLESERVERDOCVTBL_SetColorScheme ?
Execute         pOLESERVERDOCVTBL_Execute ?
OLESERVERDOCVTBL	ends

LPOLESERVERDOCVTBL  typedef ptr OLESERVERDOCVTBL
OLESERVERDOC	struct
lpvtbl	LPOLESERVERDOCVTBL	?
OLESERVERDOC	ends

ifdef __cplusplus 
endif 
ifdef WIN16 
	include poppack.inc
endif 
endif 

;--- errors: 0
;--- end of file ---