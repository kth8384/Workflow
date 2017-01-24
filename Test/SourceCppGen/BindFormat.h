/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/BindFormat.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_BINDFORMAT
#define VCZH_WORKFLOW_COMPILER_GENERATED_BINDFORMAT

#include "../Source/CppTypes.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace vl_workflow_global
{
	class __vwsnc1_BindFormat_main__vl_reflection_description_IValueSubscription;
	class __vwsnc2_BindFormat_main_Subscribe__vl_reflection_description_IValueListener;
}

/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class BindFormat
	{
	public:

		::vl::WString s;

		void Callback(const ::vl::reflection::description::Value& value);
		::vl::WString main();

		static BindFormat& Instance();
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
