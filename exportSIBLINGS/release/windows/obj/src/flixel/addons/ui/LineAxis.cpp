#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_LineAxis
#include <flixel/addons/ui/LineAxis.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::LineAxis LineAxis_obj::HORIZONTAL;

::flixel::addons::ui::LineAxis LineAxis_obj::VERTICAL;

bool LineAxis_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) { outValue = LineAxis_obj::HORIZONTAL; return true; }
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) { outValue = LineAxis_obj::VERTICAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(LineAxis_obj)

int LineAxis_obj::__FindIndex(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 1;
	return super::__FindIndex(inName);
}

int LineAxis_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val LineAxis_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return HORIZONTAL;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String LineAxis_obj_sStaticFields[] = {
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("VERTICAL",76,4c,9b,c3),
	::String(null())
};

::hx::Class LineAxis_obj::__mClass;

Dynamic __Create_LineAxis_obj() { return new LineAxis_obj; }

void LineAxis_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.ui.LineAxis",06,c5,ca,e5), ::hx::TCanCast< LineAxis_obj >,LineAxis_obj_sStaticFields,0,
	&__Create_LineAxis_obj, &__Create,
	&super::__SGetClass(), &CreateLineAxis_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &LineAxis_obj::__GetStatic;
}

void LineAxis_obj::__boot()
{
HORIZONTAL = ::hx::CreateConstEnum< LineAxis_obj >(HX_("HORIZONTAL",e4,70,cd,07),0);
VERTICAL = ::hx::CreateConstEnum< LineAxis_obj >(HX_("VERTICAL",76,4c,9b,c3),1);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui
