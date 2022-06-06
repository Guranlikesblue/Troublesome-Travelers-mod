#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
namespace flixel{
namespace text{

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::NONE;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::OUTLINE;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::OUTLINE_FAST;

::flixel::text::FlxTextBorderStyle FlxTextBorderStyle_obj::SHADOW;

bool FlxTextBorderStyle_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NONE",b8,da,ca,33)) { outValue = FlxTextBorderStyle_obj::NONE; return true; }
	if (inName==HX_("OUTLINE",62,eb,91,61)) { outValue = FlxTextBorderStyle_obj::OUTLINE; return true; }
	if (inName==HX_("OUTLINE_FAST",d9,37,1b,3f)) { outValue = FlxTextBorderStyle_obj::OUTLINE_FAST; return true; }
	if (inName==HX_("SHADOW",e0,73,a3,cf)) { outValue = FlxTextBorderStyle_obj::SHADOW; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxTextBorderStyle_obj)

int FlxTextBorderStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("OUTLINE",62,eb,91,61)) return 2;
	if (inName==HX_("OUTLINE_FAST",d9,37,1b,3f)) return 3;
	if (inName==HX_("SHADOW",e0,73,a3,cf)) return 1;
	return super::__FindIndex(inName);
}

int FlxTextBorderStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return 0;
	if (inName==HX_("OUTLINE",62,eb,91,61)) return 0;
	if (inName==HX_("OUTLINE_FAST",d9,37,1b,3f)) return 0;
	if (inName==HX_("SHADOW",e0,73,a3,cf)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxTextBorderStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("NONE",b8,da,ca,33)) return NONE;
	if (inName==HX_("OUTLINE",62,eb,91,61)) return OUTLINE;
	if (inName==HX_("OUTLINE_FAST",d9,37,1b,3f)) return OUTLINE_FAST;
	if (inName==HX_("SHADOW",e0,73,a3,cf)) return SHADOW;
	return super::__Field(inName,inCallProp);
}

static ::String FlxTextBorderStyle_obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("SHADOW",e0,73,a3,cf),
	HX_("OUTLINE",62,eb,91,61),
	HX_("OUTLINE_FAST",d9,37,1b,3f),
	::String(null())
};

::hx::Class FlxTextBorderStyle_obj::__mClass;

Dynamic __Create_FlxTextBorderStyle_obj() { return new FlxTextBorderStyle_obj; }

void FlxTextBorderStyle_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.text.FlxTextBorderStyle",d5,5b,d9,83), ::hx::TCanCast< FlxTextBorderStyle_obj >,FlxTextBorderStyle_obj_sStaticFields,0,
	&__Create_FlxTextBorderStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFlxTextBorderStyle_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxTextBorderStyle_obj::__GetStatic;
}

void FlxTextBorderStyle_obj::__boot()
{
NONE = ::hx::CreateConstEnum< FlxTextBorderStyle_obj >(HX_("NONE",b8,da,ca,33),0);
OUTLINE = ::hx::CreateConstEnum< FlxTextBorderStyle_obj >(HX_("OUTLINE",62,eb,91,61),2);
OUTLINE_FAST = ::hx::CreateConstEnum< FlxTextBorderStyle_obj >(HX_("OUTLINE_FAST",d9,37,1b,3f),3);
SHADOW = ::hx::CreateConstEnum< FlxTextBorderStyle_obj >(HX_("SHADOW",e0,73,a3,cf),1);
}


} // end namespace flixel
} // end namespace text
