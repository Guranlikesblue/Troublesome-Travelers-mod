#include <hxcpp.h>

#ifndef INCLUDED___ASSET__OPENFL__flixel_fonts_nokiafc22_ttf
#include <__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED___ASSET__flixel_fonts_nokiafc22_ttf
#include <__ASSET__flixel_fonts_nokiafc22_ttf.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_78712a569baebf83_1035_new,"__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf","new",0xcba1a9da,"__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf.new","ManifestResources.hx",1035,0xf77aa668)

void __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_78712a569baebf83_1035_new)
HXDLIN(1035)		this->_hx___fromLimeFont( ::__ASSET__flixel_fonts_nokiafc22_ttf_obj::__alloc( HX_CTX ));
HXDLIN(1035)		super::__construct(null());
            	}

Dynamic __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::__CreateEmpty() { return new __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj; }

void *__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::_hx_vtable = 0;

Dynamic __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj > _hx_result = new __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x40cee131) {
		if (inClassId<=(int)0x12d0aa2c) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x12d0aa2c;
		} else {
			return inClassId==(int)0x40cee131;
		}
	} else {
		return inClassId==(int)0x539c3b44;
	}
}


::hx::ObjectPtr< __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj > __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::__new() {
	::hx::ObjectPtr< __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj > __this = new __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj > __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::__alloc(::hx::Ctx *_hx_ctx) {
	__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj *__this = (__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj), true, "__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf"));
	*(void **)__this = __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj_sStaticStorageInfo = 0;
#endif

::hx::Class __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::__mClass;

void __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::__register()
{
	__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj _hx_dummy;
	__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("__ASSET__OPENFL__flixel_fonts_nokiafc22_ttf",e8,74,25,26);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__OPENFL__flixel_fonts_nokiafc22_ttf_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

