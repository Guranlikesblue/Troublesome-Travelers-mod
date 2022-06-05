#include <hxcpp.h>

#ifndef INCLUDED_flixel_tile_FlxTilemapAutoTiling
#include <flixel/tile/FlxTilemapAutoTiling.h>
#endif
namespace flixel{
namespace tile{

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::ALT;

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::AUTO;

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::FULL;

::flixel::tile::FlxTilemapAutoTiling FlxTilemapAutoTiling_obj::OFF;

bool FlxTilemapAutoTiling_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALT",09,95,31,00)) { outValue = FlxTilemapAutoTiling_obj::ALT; return true; }
	if (inName==HX_("AUTO",6f,a7,37,2b)) { outValue = FlxTilemapAutoTiling_obj::AUTO; return true; }
	if (inName==HX_("FULL",8f,b1,85,2e)) { outValue = FlxTilemapAutoTiling_obj::FULL; return true; }
	if (inName==HX_("OFF",4f,2f,3c,00)) { outValue = FlxTilemapAutoTiling_obj::OFF; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxTilemapAutoTiling_obj)

int FlxTilemapAutoTiling_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ALT",09,95,31,00)) return 2;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 1;
	if (inName==HX_("FULL",8f,b1,85,2e)) return 3;
	if (inName==HX_("OFF",4f,2f,3c,00)) return 0;
	return super::__FindIndex(inName);
}

int FlxTilemapAutoTiling_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ALT",09,95,31,00)) return 0;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return 0;
	if (inName==HX_("FULL",8f,b1,85,2e)) return 0;
	if (inName==HX_("OFF",4f,2f,3c,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxTilemapAutoTiling_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ALT",09,95,31,00)) return ALT;
	if (inName==HX_("AUTO",6f,a7,37,2b)) return AUTO;
	if (inName==HX_("FULL",8f,b1,85,2e)) return FULL;
	if (inName==HX_("OFF",4f,2f,3c,00)) return OFF;
	return super::__Field(inName,inCallProp);
}

static ::String FlxTilemapAutoTiling_obj_sStaticFields[] = {
	HX_("OFF",4f,2f,3c,00),
	HX_("AUTO",6f,a7,37,2b),
	HX_("ALT",09,95,31,00),
	HX_("FULL",8f,b1,85,2e),
	::String(null())
};

::hx::Class FlxTilemapAutoTiling_obj::__mClass;

Dynamic __Create_FlxTilemapAutoTiling_obj() { return new FlxTilemapAutoTiling_obj; }

void FlxTilemapAutoTiling_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.tile.FlxTilemapAutoTiling",84,9e,85,97), ::hx::TCanCast< FlxTilemapAutoTiling_obj >,FlxTilemapAutoTiling_obj_sStaticFields,0,
	&__Create_FlxTilemapAutoTiling_obj, &__Create,
	&super::__SGetClass(), &CreateFlxTilemapAutoTiling_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxTilemapAutoTiling_obj::__GetStatic;
}

void FlxTilemapAutoTiling_obj::__boot()
{
ALT = ::hx::CreateConstEnum< FlxTilemapAutoTiling_obj >(HX_("ALT",09,95,31,00),2);
AUTO = ::hx::CreateConstEnum< FlxTilemapAutoTiling_obj >(HX_("AUTO",6f,a7,37,2b),1);
FULL = ::hx::CreateConstEnum< FlxTilemapAutoTiling_obj >(HX_("FULL",8f,b1,85,2e),3);
OFF = ::hx::CreateConstEnum< FlxTilemapAutoTiling_obj >(HX_("OFF",4f,2f,3c,00),0);
}


} // end namespace flixel
} // end namespace tile
