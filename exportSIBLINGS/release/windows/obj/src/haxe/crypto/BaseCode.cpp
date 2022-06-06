#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9ec72c1fa0ba7179_33_new,"haxe.crypto.BaseCode","new",0xd63c60f5,"haxe.crypto.BaseCode.new","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",33,0x52da3542)
HX_LOCAL_STACK_FRAME(_hx_pos_9ec72c1fa0ba7179_72_initTable,"haxe.crypto.BaseCode","initTable",0xa1288133,"haxe.crypto.BaseCode.initTable","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",72,0x52da3542)
HX_LOCAL_STACK_FRAME(_hx_pos_9ec72c1fa0ba7179_81_decodeBytes,"haxe.crypto.BaseCode","decodeBytes",0x152c41f2,"haxe.crypto.BaseCode.decodeBytes","C:\\HaxeToolkit\\haxe\\std/haxe/crypto/BaseCode.hx",81,0x52da3542)
namespace haxe{
namespace crypto{

void BaseCode_obj::__construct( ::haxe::io::Bytes base){
            	HX_STACKFRAME(&_hx_pos_9ec72c1fa0ba7179_33_new)
HXLINE(  34)		int len = base->length;
HXLINE(  35)		int nbits = 1;
HXLINE(  36)		while((len > (1 << nbits))){
HXLINE(  37)			nbits = (nbits + 1);
            		}
HXLINE(  38)		bool _hx_tmp;
HXDLIN(  38)		if ((nbits <= 8)) {
HXLINE(  38)			_hx_tmp = (len != (1 << nbits));
            		}
            		else {
HXLINE(  38)			_hx_tmp = true;
            		}
HXDLIN(  38)		if (_hx_tmp) {
HXLINE(  39)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("BaseCode : base length must be a power of two.",78,b6,c8,ca)));
            		}
HXLINE(  40)		this->base = base;
HXLINE(  41)		this->nbits = nbits;
            	}

Dynamic BaseCode_obj::__CreateEmpty() { return new BaseCode_obj; }

void *BaseCode_obj::_hx_vtable = 0;

Dynamic BaseCode_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseCode_obj > _hx_result = new BaseCode_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BaseCode_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x34980465;
}

void BaseCode_obj::initTable(){
            	HX_STACKFRAME(&_hx_pos_9ec72c1fa0ba7179_72_initTable)
HXLINE(  73)		::Array< int > tbl = ::Array_obj< int >::__new();
HXLINE(  74)		{
HXLINE(  74)			int _g = 0;
HXDLIN(  74)			while((_g < 256)){
HXLINE(  74)				_g = (_g + 1);
HXDLIN(  74)				int i = (_g - 1);
HXLINE(  75)				tbl[i] = -1;
            			}
            		}
HXLINE(  76)		{
HXLINE(  76)			int _g1 = 0;
HXDLIN(  76)			int _g2 = this->base->length;
HXDLIN(  76)			while((_g1 < _g2)){
HXLINE(  76)				_g1 = (_g1 + 1);
HXDLIN(  76)				int i = (_g1 - 1);
HXLINE(  77)				tbl[( (int)(this->base->b->__get(i)) )] = i;
            			}
            		}
HXLINE(  78)		this->tbl = tbl;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseCode_obj,initTable,(void))

 ::haxe::io::Bytes BaseCode_obj::decodeBytes( ::haxe::io::Bytes b){
            	HX_STACKFRAME(&_hx_pos_9ec72c1fa0ba7179_81_decodeBytes)
HXLINE(  85)		int nbits = this->nbits;
HXLINE(  86)		 ::haxe::io::Bytes base = this->base;
HXLINE(  87)		if (::hx::IsNull( this->tbl )) {
HXLINE(  88)			this->initTable();
            		}
HXLINE(  89)		::Array< int > tbl = this->tbl;
HXLINE(  90)		int size = ((b->length * nbits) >> 3);
HXLINE(  91)		 ::haxe::io::Bytes out = ::haxe::io::Bytes_obj::alloc(size);
HXLINE(  92)		int buf = 0;
HXLINE(  93)		int curbits = 0;
HXLINE(  94)		int pin = 0;
HXLINE(  95)		int pout = 0;
HXLINE(  96)		while((pout < size)){
HXLINE(  97)			while((curbits < 8)){
HXLINE(  98)				curbits = (curbits + nbits);
HXLINE(  99)				buf = (buf << nbits);
HXLINE( 100)				pin = (pin + 1);
HXDLIN( 100)				int i = tbl->__get(( (int)(b->b->__get((pin - 1))) ));
HXLINE( 101)				if ((i == -1)) {
HXLINE( 102)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("BaseCode : invalid encoded char",f9,14,33,18)));
            				}
HXLINE( 103)				buf = (buf | i);
            			}
HXLINE( 105)			curbits = (curbits - 8);
HXLINE( 106)			{
HXLINE( 106)				pout = (pout + 1);
HXDLIN( 106)				out->b[(pout - 1)] = ( (unsigned char)(((buf >> curbits) & 255)) );
            			}
            		}
HXLINE( 108)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseCode_obj,decodeBytes,return )


::hx::ObjectPtr< BaseCode_obj > BaseCode_obj::__new( ::haxe::io::Bytes base) {
	::hx::ObjectPtr< BaseCode_obj > __this = new BaseCode_obj();
	__this->__construct(base);
	return __this;
}

::hx::ObjectPtr< BaseCode_obj > BaseCode_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes base) {
	BaseCode_obj *__this = (BaseCode_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseCode_obj), true, "haxe.crypto.BaseCode"));
	*(void **)__this = BaseCode_obj::_hx_vtable;
	__this->__construct(base);
	return __this;
}

BaseCode_obj::BaseCode_obj()
{
}

void BaseCode_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseCode);
	HX_MARK_MEMBER_NAME(base,"base");
	HX_MARK_MEMBER_NAME(nbits,"nbits");
	HX_MARK_MEMBER_NAME(tbl,"tbl");
	HX_MARK_END_CLASS();
}

void BaseCode_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(base,"base");
	HX_VISIT_MEMBER_NAME(nbits,"nbits");
	HX_VISIT_MEMBER_NAME(tbl,"tbl");
}

::hx::Val BaseCode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tbl") ) { return ::hx::Val( tbl ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { return ::hx::Val( base ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { return ::hx::Val( nbits ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initTable") ) { return ::hx::Val( initTable_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decodeBytes") ) { return ::hx::Val( decodeBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseCode_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tbl") ) { tbl=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { base=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nbits") ) { nbits=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseCode_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("base",11,e8,10,41));
	outFields->push(HX_("nbits",74,ca,2a,97));
	outFields->push(HX_("tbl",3e,5b,58,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseCode_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(BaseCode_obj,base),HX_("base",11,e8,10,41)},
	{::hx::fsInt,(int)offsetof(BaseCode_obj,nbits),HX_("nbits",74,ca,2a,97)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(BaseCode_obj,tbl),HX_("tbl",3e,5b,58,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseCode_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseCode_obj_sMemberFields[] = {
	HX_("base",11,e8,10,41),
	HX_("nbits",74,ca,2a,97),
	HX_("tbl",3e,5b,58,00),
	HX_("initTable",de,d2,75,26),
	HX_("decodeBytes",5d,94,b1,85),
	::String(null()) };

::hx::Class BaseCode_obj::__mClass;

void BaseCode_obj::__register()
{
	BaseCode_obj _hx_dummy;
	BaseCode_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.crypto.BaseCode",83,c2,f9,1c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseCode_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseCode_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseCode_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseCode_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace crypto
