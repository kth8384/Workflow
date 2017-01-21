/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

Source: ../Resources/Codegen/WorkflowAttributes.txt

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_WORKFLOWATTRIBUTES
#define VCZH_WORKFLOW_COMPILER_GENERATED_WORKFLOWATTRIBUTES

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

namespace calculator
{
	class Expression;
	class NumberExpression;
	class BinaryExpression;

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class WorkflowAttributes
	{
	public:

		::vl::WString Print(::vl::Ptr<::calculator::Expression> expr);
		::vl::vint32_t Evaluate(::vl::Ptr<::calculator::Expression> expr);
		::vl::WString main();

		static WorkflowAttributes& Instance();
	};
}

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			DECL_TYPE_INFO(::calculator::BinaryExpression)
			DECL_TYPE_INFO(::calculator::BinaryExpression::BinaryOperator)
			DECL_TYPE_INFO(::calculator::Expression)
			DECL_TYPE_INFO(::calculator::NumberExpression)
#endif

			extern bool LoadWorkflowAttributesTypes();
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
