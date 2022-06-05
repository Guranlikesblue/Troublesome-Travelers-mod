#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilterShader
#include <openfl/filters/BitmapFilterShader.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_BlurAlphaShader
#include <openfl/filters/_GlowFilter/BlurAlphaShader.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6216d328fc85d16b_570_new,"openfl.filters._GlowFilter.BlurAlphaShader","new",0x982180f3,"openfl.filters._GlowFilter.BlurAlphaShader.new","openfl/filters/GlowFilter.hx",570,0x5f568606)
static const Float _hx_array_data_3a938b81_1[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_3a938b81_2[] = {
	(Float)0,(Float)0,(Float)0,(Float)0,
};
static const Float _hx_array_data_3a938b81_3[] = {
	(Float)1,
};
namespace openfl{
namespace filters{
namespace _GlowFilter{

void BlurAlphaShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6216d328fc85d16b_570_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\n\t\tuniform sampler2D openfl_Texture;\n\t\tuniform vec4 uColor;\n\t\tuniform float uStrength;\n\t\tvarying vec2 vTexCoord;\n\t\tvarying vec2 vBlurCoords[6];\n\n\t\tvoid main(void)\n\t\t{\n            vec4 texel = texture2D(openfl_Texture, vTexCoord);\n\n            vec3 contributions = vec3(0.00443, 0.05399, 0.24197);\n            vec3 top = vec3(\n                texture2D(openfl_Texture, vBlurCoords[0]).a,\n                texture2D(openfl_Texture, vBlurCoords[1]).a,\n                texture2D(openfl_Texture, vBlurCoords[2]).a\n            );\n            vec3 bottom = vec3(\n                texture2D(openfl_Texture, vBlurCoords[3]).a,\n                texture2D(openfl_Texture, vBlurCoords[4]).a,\n                texture2D(openfl_Texture, vBlurCoords[5]).a\n            );\n\n            float a = texel.a * 0.39894;\n\t\t\ta += dot(top, contributions.xyz);\n            a += dot(bottom, contributions.zyx);\n\n\t\t\tgl_FragColor = uColor * clamp(a * uStrength, 0.0, 1.0);\n\t\t}\n\t",78,ec,96,20);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\tuniform vec2 uRadius;\n\t\tvarying vec2 vTexCoord;\n\t\tvarying vec2 vBlurCoords[6];\n\n\t\tvoid main(void) {\n\n\t\t\tgl_Position = openfl_Matrix * openfl_Position;\n\t\t\tvTexCoord = openfl_TextureCoord;\n\n\t\t\tvec3 offset = vec3(0.5, 0.75, 1.0);\n\t\t\tvec2 r = uRadius / openfl_TextureSize;\n\t\t\tvBlurCoords[0] = openfl_TextureCoord - r * offset.z;\n\t\t\tvBlurCoords[1] = openfl_TextureCoord - r * offset.y;\n\t\t\tvBlurCoords[2] = openfl_TextureCoord - r * offset.x;\n\t\t\tvBlurCoords[3] = openfl_TextureCoord + r * offset.x;\n\t\t\tvBlurCoords[4] = openfl_TextureCoord + r * offset.y;\n\t\t\tvBlurCoords[5] = openfl_TextureCoord + r * offset.z;\n\t\t}\n\t",42,b1,4c,72);
            		}
HXLINE( 571)		super::__construct(null());
HXLINE( 573)		this->uRadius->value = ::Array_obj< Float >::fromData( _hx_array_data_3a938b81_1,2);
HXLINE( 574)		this->uColor->value = ::Array_obj< Float >::fromData( _hx_array_data_3a938b81_2,4);
HXLINE( 575)		this->uStrength->value = ::Array_obj< Float >::fromData( _hx_array_data_3a938b81_3,1);
HXLINE( 511)		this->_hx___isGenerated = true;
HXDLIN( 511)		this->_hx___initGL();
            	}

Dynamic BlurAlphaShader_obj::__CreateEmpty() { return new BlurAlphaShader_obj; }

void *BlurAlphaShader_obj::_hx_vtable = 0;

Dynamic BlurAlphaShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlurAlphaShader_obj > _hx_result = new BlurAlphaShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlurAlphaShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x253b4db3) {
		if (inClassId<=(int)0x1b23b3a3) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1b23b3a3;
		} else {
			return inClassId==(int)0x253b4db3;
		}
	} else {
		return inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< BlurAlphaShader_obj > BlurAlphaShader_obj::__new() {
	::hx::ObjectPtr< BlurAlphaShader_obj > __this = new BlurAlphaShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BlurAlphaShader_obj > BlurAlphaShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BlurAlphaShader_obj *__this = (BlurAlphaShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlurAlphaShader_obj), true, "openfl.filters._GlowFilter.BlurAlphaShader"));
	*(void **)__this = BlurAlphaShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BlurAlphaShader_obj::BlurAlphaShader_obj()
{
}

void BlurAlphaShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BlurAlphaShader);
	HX_MARK_MEMBER_NAME(uRadius,"uRadius");
	HX_MARK_MEMBER_NAME(uColor,"uColor");
	HX_MARK_MEMBER_NAME(uStrength,"uStrength");
	 ::openfl::filters::BitmapFilterShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BlurAlphaShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uRadius,"uRadius");
	HX_VISIT_MEMBER_NAME(uColor,"uColor");
	HX_VISIT_MEMBER_NAME(uStrength,"uStrength");
	 ::openfl::filters::BitmapFilterShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BlurAlphaShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uColor") ) { return ::hx::Val( uColor ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { return ::hx::Val( uRadius ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uStrength") ) { return ::hx::Val( uStrength ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BlurAlphaShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uColor") ) { uColor=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uRadius") ) { uRadius=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"uStrength") ) { uStrength=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlurAlphaShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uRadius",a7,8a,da,e6));
	outFields->push(HX_("uColor",ae,18,4b,a5));
	outFields->push(HX_("uStrength",16,8c,95,d0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BlurAlphaShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlurAlphaShader_obj,uRadius),HX_("uRadius",a7,8a,da,e6)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlurAlphaShader_obj,uColor),HX_("uColor",ae,18,4b,a5)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(BlurAlphaShader_obj,uStrength),HX_("uStrength",16,8c,95,d0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BlurAlphaShader_obj_sStaticStorageInfo = 0;
#endif

static ::String BlurAlphaShader_obj_sMemberFields[] = {
	HX_("uRadius",a7,8a,da,e6),
	HX_("uColor",ae,18,4b,a5),
	HX_("uStrength",16,8c,95,d0),
	::String(null()) };

::hx::Class BlurAlphaShader_obj::__mClass;

void BlurAlphaShader_obj::__register()
{
	BlurAlphaShader_obj _hx_dummy;
	BlurAlphaShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.filters._GlowFilter.BlurAlphaShader",81,8b,93,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlurAlphaShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlurAlphaShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlurAlphaShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlurAlphaShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
} // end namespace _GlowFilter
