#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_APPLE_framebuffer_multisample
#include <lime/graphics/opengl/ext/APPLE_framebuffer_multisample.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0dc663a6fc7d5e27_4_new,"lime.graphics.opengl.ext.APPLE_framebuffer_multisample","new",0x083f8a9c,"lime.graphics.opengl.ext.APPLE_framebuffer_multisample.new","lime/graphics/opengl/ext/APPLE_framebuffer_multisample.hx",4,0x7558ecf6)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void APPLE_framebuffer_multisample_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_0dc663a6fc7d5e27_4_new)
HXLINE(  12)		this->READ_FRAMEBUFFER_BINDING_APPLE = 36010;
HXLINE(  11)		this->DRAW_FRAMEBUFFER_BINDING_APPLE = 36006;
HXLINE(  10)		this->DRAW_FRAMEBUFFER_APPLE = 36009;
HXLINE(   9)		this->READ_FRAMEBUFFER_APPLE = 36008;
HXLINE(   8)		this->MAX_SAMPLES_APPLE = 36183;
HXLINE(   7)		this->FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE = 36182;
HXLINE(   6)		this->RENDERBUFFER_SAMPLES_APPLE = 36011;
            	}

Dynamic APPLE_framebuffer_multisample_obj::__CreateEmpty() { return new APPLE_framebuffer_multisample_obj; }

void *APPLE_framebuffer_multisample_obj::_hx_vtable = 0;

Dynamic APPLE_framebuffer_multisample_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< APPLE_framebuffer_multisample_obj > _hx_result = new APPLE_framebuffer_multisample_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool APPLE_framebuffer_multisample_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2cc2c35a;
}


APPLE_framebuffer_multisample_obj::APPLE_framebuffer_multisample_obj()
{
}

::hx::Val APPLE_framebuffer_multisample_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_APPLE") ) { return ::hx::Val( MAX_SAMPLES_APPLE ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_APPLE") ) { return ::hx::Val( READ_FRAMEBUFFER_APPLE ); }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_APPLE") ) { return ::hx::Val( DRAW_FRAMEBUFFER_APPLE ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_APPLE") ) { return ::hx::Val( RENDERBUFFER_SAMPLES_APPLE ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_APPLE") ) { return ::hx::Val( DRAW_FRAMEBUFFER_BINDING_APPLE ); }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_APPLE") ) { return ::hx::Val( READ_FRAMEBUFFER_BINDING_APPLE ); }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE") ) { return ::hx::Val( FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val APPLE_framebuffer_multisample_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLES_APPLE") ) { MAX_SAMPLES_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_APPLE") ) { READ_FRAMEBUFFER_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_APPLE") ) { DRAW_FRAMEBUFFER_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_SAMPLES_APPLE") ) { RENDERBUFFER_SAMPLES_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"DRAW_FRAMEBUFFER_BINDING_APPLE") ) { DRAW_FRAMEBUFFER_BINDING_APPLE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"READ_FRAMEBUFFER_BINDING_APPLE") ) { READ_FRAMEBUFFER_BINDING_APPLE=inValue.Cast< int >(); return inValue; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE") ) { FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void APPLE_framebuffer_multisample_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("RENDERBUFFER_SAMPLES_APPLE",bb,d1,9e,08));
	outFields->push(HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE",cf,cb,0a,c6));
	outFields->push(HX_("MAX_SAMPLES_APPLE",e9,27,5b,b8));
	outFields->push(HX_("READ_FRAMEBUFFER_APPLE",9f,82,80,93));
	outFields->push(HX_("DRAW_FRAMEBUFFER_APPLE",cd,26,e5,bc));
	outFields->push(HX_("DRAW_FRAMEBUFFER_BINDING_APPLE",f3,81,e9,bf));
	outFields->push(HX_("READ_FRAMEBUFFER_BINDING_APPLE",c5,ff,df,03));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo APPLE_framebuffer_multisample_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,RENDERBUFFER_SAMPLES_APPLE),HX_("RENDERBUFFER_SAMPLES_APPLE",bb,d1,9e,08)},
	{::hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE),HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE",cf,cb,0a,c6)},
	{::hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,MAX_SAMPLES_APPLE),HX_("MAX_SAMPLES_APPLE",e9,27,5b,b8)},
	{::hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,READ_FRAMEBUFFER_APPLE),HX_("READ_FRAMEBUFFER_APPLE",9f,82,80,93)},
	{::hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,DRAW_FRAMEBUFFER_APPLE),HX_("DRAW_FRAMEBUFFER_APPLE",cd,26,e5,bc)},
	{::hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,DRAW_FRAMEBUFFER_BINDING_APPLE),HX_("DRAW_FRAMEBUFFER_BINDING_APPLE",f3,81,e9,bf)},
	{::hx::fsInt,(int)offsetof(APPLE_framebuffer_multisample_obj,READ_FRAMEBUFFER_BINDING_APPLE),HX_("READ_FRAMEBUFFER_BINDING_APPLE",c5,ff,df,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *APPLE_framebuffer_multisample_obj_sStaticStorageInfo = 0;
#endif

static ::String APPLE_framebuffer_multisample_obj_sMemberFields[] = {
	HX_("RENDERBUFFER_SAMPLES_APPLE",bb,d1,9e,08),
	HX_("FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE",cf,cb,0a,c6),
	HX_("MAX_SAMPLES_APPLE",e9,27,5b,b8),
	HX_("READ_FRAMEBUFFER_APPLE",9f,82,80,93),
	HX_("DRAW_FRAMEBUFFER_APPLE",cd,26,e5,bc),
	HX_("DRAW_FRAMEBUFFER_BINDING_APPLE",f3,81,e9,bf),
	HX_("READ_FRAMEBUFFER_BINDING_APPLE",c5,ff,df,03),
	::String(null()) };

::hx::Class APPLE_framebuffer_multisample_obj::__mClass;

void APPLE_framebuffer_multisample_obj::__register()
{
	APPLE_framebuffer_multisample_obj _hx_dummy;
	APPLE_framebuffer_multisample_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.APPLE_framebuffer_multisample",aa,4c,cf,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(APPLE_framebuffer_multisample_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< APPLE_framebuffer_multisample_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = APPLE_framebuffer_multisample_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = APPLE_framebuffer_multisample_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
