#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StageData
#include <StageData.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_60a8bb2029d84628_34_loadDirectory,"StageData","loadDirectory",0x4a71c861,"StageData.loadDirectory","StageData.hx",34,0xe1269fd6)
HX_LOCAL_STACK_FRAME(_hx_pos_60a8bb2029d84628_72_getStageFile,"StageData","getStageFile",0xd040712a,"StageData.getStageFile","StageData.hx",72,0xe1269fd6)
HX_LOCAL_STACK_FRAME(_hx_pos_60a8bb2029d84628_33_boot,"StageData","boot",0x6bf10678,"StageData.boot","StageData.hx",33,0xe1269fd6)

void StageData_obj::__construct() { }

Dynamic StageData_obj::__CreateEmpty() { return new StageData_obj; }

void *StageData_obj::_hx_vtable = 0;

Dynamic StageData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StageData_obj > _hx_result = new StageData_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StageData_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x577d7928;
}

::String StageData_obj::forceNextDirectory;

void StageData_obj::loadDirectory( ::Dynamic SONG){
            	HX_STACKFRAME(&_hx_pos_60a8bb2029d84628_34_loadDirectory)
HXLINE(  35)		::String stage = HX_("",00,00,00,00);
HXLINE(  36)		if (::hx::IsNotNull( SONG->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic) )) {
HXLINE(  37)			stage = ( (::String)(SONG->__Field(HX_("stage",be,6a,0b,84),::hx::paccDynamic)) );
            		}
            		else {
HXLINE(  38)			if (::hx::IsNotNull( SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic) )) {
HXLINE(  39)				::String _hx_switch_0 = ::StringTools_obj::replace(( (::String)(SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase(),HX_(" ",20,00,00,00),HX_("-",2d,00,00,00));
            				if (  (_hx_switch_0==HX_("cocoa",09,9d,55,4a)) ||  (_hx_switch_0==HX_("eggnog",61,04,ba,f4)) ){
HXLINE(  50)					stage = HX_("mall",d4,3a,56,48);
HXDLIN(  50)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("devour",d7,79,7c,71)) ){
HXLINE(  44)					stage = HX_("spookyEvil",1f,2e,61,21);
HXDLIN(  44)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("encount",c6,cf,9c,ad)) ||  (_hx_switch_0==HX_("hungerstation",61,ec,52,08)) ||  (_hx_switch_0==HX_("more",95,df,60,48)) ){
HXLINE(  42)					stage = HX_("spooky",eb,bd,9e,c1);
HXDLIN(  42)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("blammed",96,02,00,3c)) ||  (_hx_switch_0==HX_("philly",28,77,5e,ef)) ||  (_hx_switch_0==HX_("philly-nice",22,2e,26,44)) ||  (_hx_switch_0==HX_("pico",e5,e8,57,4a)) ){
HXLINE(  46)					stage = HX_("philly",28,77,5e,ef);
HXDLIN(  46)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("high",62,37,0e,45)) ||  (_hx_switch_0==HX_("milf",d6,4c,5c,48)) ||  (_hx_switch_0==HX_("satin-panties",fe,64,00,d1)) ){
HXLINE(  48)					stage = HX_("limo",1f,17,b3,47);
HXDLIN(  48)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("roses",04,6c,64,ed)) ||  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  54)					stage = HX_("school",74,b8,c8,40);
HXDLIN(  54)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  56)					stage = HX_("schoolEvil",28,a1,f5,f7);
HXDLIN(  56)					goto _hx_goto_0;
            				}
            				if (  (_hx_switch_0==HX_("winter-horrorland",9d,39,f4,1e)) ){
HXLINE(  52)					stage = HX_("mallEvil",88,d3,e3,a7);
HXDLIN(  52)					goto _hx_goto_0;
            				}
            				/* default */{
HXLINE(  58)					stage = HX_("stage",be,6a,0b,84);
            				}
            				_hx_goto_0:;
            			}
            			else {
HXLINE(  61)				stage = HX_("stage",be,6a,0b,84);
            			}
            		}
HXLINE(  64)		 ::Dynamic stageFile = ::StageData_obj::getStageFile(stage);
HXLINE(  65)		if (::hx::IsNull( stageFile )) {
HXLINE(  66)			::StageData_obj::forceNextDirectory = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  68)			::StageData_obj::forceNextDirectory = ( (::String)(stageFile->__Field(HX_("directory",6d,f2,44,10),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageData_obj,loadDirectory,(void))

 ::Dynamic StageData_obj::getStageFile(::String stage){
            	HX_GC_STACKFRAME(&_hx_pos_60a8bb2029d84628_72_getStageFile)
HXLINE(  73)		::String rawJson = null();
HXLINE(  74)		::String file = ((HX_("stages/",9a,7a,ca,2d) + stage) + HX_(".json",56,f1,d6,c2));
HXDLIN(  74)		if (::hx::IsNull( file )) {
HXLINE(  74)			file = HX_("",00,00,00,00);
            		}
HXDLIN(  74)		::String path = (HX_("assets/",4c,2a,dc,36) + file);
HXLINE(  77)		::String modPath = ::Paths_obj::modFolders(((HX_("stages/",9a,7a,ca,2d) + stage) + HX_(".json",56,f1,d6,c2)));
HXLINE(  78)		if (::sys::FileSystem_obj::exists(modPath)) {
HXLINE(  79)			rawJson = ::sys::io::File_obj::getContent(modPath);
            		}
            		else {
HXLINE(  80)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  81)				rawJson = ::sys::io::File_obj::getContent(path);
            			}
            			else {
HXLINE(  90)				return null();
            			}
            		}
HXLINE(  92)		return  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StageData_obj,getStageFile,return )


StageData_obj::StageData_obj()
{
}

bool StageData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"getStageFile") ) { outValue = getStageFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadDirectory") ) { outValue = loadDirectory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"forceNextDirectory") ) { outValue = ( forceNextDirectory ); return true; }
	}
	return false;
}

bool StageData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"forceNextDirectory") ) { forceNextDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *StageData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo StageData_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &StageData_obj::forceNextDirectory,HX_("forceNextDirectory",0f,1e,f1,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void StageData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageData_obj::forceNextDirectory,"forceNextDirectory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StageData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageData_obj::forceNextDirectory,"forceNextDirectory");
};

#endif

::hx::Class StageData_obj::__mClass;

static ::String StageData_obj_sStaticFields[] = {
	HX_("forceNextDirectory",0f,1e,f1,a7),
	HX_("loadDirectory",67,c3,aa,92),
	HX_("getStageFile",e4,38,16,03),
	::String(null())
};

void StageData_obj::__register()
{
	StageData_obj _hx_dummy;
	StageData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StageData",e8,03,3a,94);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageData_obj::__GetStatic;
	__mClass->mSetStaticField = &StageData_obj::__SetStatic;
	__mClass->mMarkFunc = StageData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StageData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< StageData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StageData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StageData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StageData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StageData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_60a8bb2029d84628_33_boot)
HXDLIN(  33)		forceNextDirectory = null();
            	}
}

