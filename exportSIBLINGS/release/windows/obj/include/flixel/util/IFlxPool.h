#ifndef INCLUDED_flixel_util_IFlxPool
#define INCLUDED_flixel_util_IFlxPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,IFlxPool)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES IFlxPool_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx_preAllocate)(int numObjects); 
		static inline void preAllocate( ::Dynamic _hx_,int numObjects) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxPool_obj *>(_hx_.mPtr->_hx_getInterface(0x5a90a383)))->_hx_preAllocate)(numObjects);
		}
		::cpp::VirtualArray (::hx::Object :: *_hx_clear)(); 
		static inline ::cpp::VirtualArray clear( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::util::IFlxPool_obj *>(_hx_.mPtr->_hx_getInterface(0x5a90a383)))->_hx_clear)();
		}
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_IFlxPool */ 
