/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/WorkflowAttributes.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_WORKFLOWATTRIBUTES_NUMBEREXPRESSION
#define VCZH_WORKFLOW_COMPILER_GENERATED_WORKFLOWATTRIBUTES_NUMBEREXPRESSION

#include "WorkflowAttributes.h"

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

namespace calculator
{
	class NumberExpression : public ::calculator::Expression, public ::vl::reflection::Description<NumberExpression>
	{
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<NumberExpression>;
#endif
	private:
		::vl::vint32_t value = 0;
	public:
		::vl::vint32_t GetValue();
		void SetValue(::vl::vint32_t _value);
		NumberExpression(::vl::vint32_t _value);
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
