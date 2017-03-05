/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
Parser::WfExpression.parser.txt

This file is generated by: Vczh Parser Generator
***********************************************************************/

#include "../../Import/Vlpp.h"
#include "WfExpression_Copy.h"

namespace vl
{
	namespace workflow
	{
		namespace copy_visitor
		{

/***********************************************************************
TypeVisitor
***********************************************************************/

			// CopyFields ----------------------------------------

			void TypeVisitor::CopyFields(WfPredefinedType* from, WfPredefinedType* to)
			{
			}

			void TypeVisitor::CopyFields(WfType* from, WfType* to)
			{
			}

			void TypeVisitor::CopyFields(WfTopQualifiedType* from, WfTopQualifiedType* to)
			{
			}

			void TypeVisitor::CopyFields(WfReferenceType* from, WfReferenceType* to)
			{
			}

			void TypeVisitor::CopyFields(WfRawPointerType* from, WfRawPointerType* to)
			{
			}

			void TypeVisitor::CopyFields(WfSharedPointerType* from, WfSharedPointerType* to)
			{
			}

			void TypeVisitor::CopyFields(WfNullableType* from, WfNullableType* to)
			{
			}

			void TypeVisitor::CopyFields(WfEnumerableType* from, WfEnumerableType* to)
			{
			}

			void TypeVisitor::CopyFields(WfMapType* from, WfMapType* to)
			{
			}

			void TypeVisitor::CopyFields(WfFunctionType* from, WfFunctionType* to)
			{
			}

			void TypeVisitor::CopyFields(WfChildType* from, WfChildType* to)
			{
			}

			// CreateField ---------------------------------------

			// Visitor Members -----------------------------------

			void TypeVisitor::Visit(WfPredefinedType* node)
			{
			}

			void TypeVisitor::Visit(WfTopQualifiedType* node)
			{
			}

			void TypeVisitor::Visit(WfReferenceType* node)
			{
			}

			void TypeVisitor::Visit(WfRawPointerType* node)
			{
			}

			void TypeVisitor::Visit(WfSharedPointerType* node)
			{
			}

			void TypeVisitor::Visit(WfNullableType* node)
			{
			}

			void TypeVisitor::Visit(WfEnumerableType* node)
			{
			}

			void TypeVisitor::Visit(WfMapType* node)
			{
			}

			void TypeVisitor::Visit(WfFunctionType* node)
			{
			}

			void TypeVisitor::Visit(WfChildType* node)
			{
			}

/***********************************************************************
ExpressionVisitor
***********************************************************************/

			// CopyFields ----------------------------------------

			void ExpressionVisitor::CopyFields(WfThisExpression* from, WfThisExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfExpression* from, WfExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfTopQualifiedExpression* from, WfTopQualifiedExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfReferenceExpression* from, WfReferenceExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfOrderedNameExpression* from, WfOrderedNameExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfOrderedLambdaExpression* from, WfOrderedLambdaExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfMemberExpression* from, WfMemberExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfChildExpression* from, WfChildExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfLiteralExpression* from, WfLiteralExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfFloatingExpression* from, WfFloatingExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfIntegerExpression* from, WfIntegerExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfStringExpression* from, WfStringExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfUnaryExpression* from, WfUnaryExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfBinaryExpression* from, WfBinaryExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfLetExpression* from, WfLetExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfIfExpression* from, WfIfExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfRangeExpression* from, WfRangeExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfSetTestingExpression* from, WfSetTestingExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfConstructorExpression* from, WfConstructorExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfInferExpression* from, WfInferExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfTypeCastingExpression* from, WfTypeCastingExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfTypeTestingExpression* from, WfTypeTestingExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfTypeOfTypeExpression* from, WfTypeOfTypeExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfTypeOfExpressionExpression* from, WfTypeOfExpressionExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfAttachEventExpression* from, WfAttachEventExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfDetachEventExpression* from, WfDetachEventExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfObserveExpression* from, WfObserveExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfCallExpression* from, WfCallExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfFunctionExpression* from, WfFunctionExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfNewClassExpression* from, WfNewClassExpression* to)
			{
			}

			void ExpressionVisitor::CopyFields(WfNewInterfaceExpression* from, WfNewInterfaceExpression* to)
			{
			}

			// CreateField ---------------------------------------

			vl::Ptr<WfLetVariable> ExpressionVisitor::CreateField(vl::Ptr<WfLetVariable> from)
			{
			}

			vl::Ptr<WfConstructorArgument> ExpressionVisitor::CreateField(vl::Ptr<WfConstructorArgument> from)
			{
			}

			vl::Ptr<WfFunctionDeclaration> ExpressionVisitor::CreateField(vl::Ptr<WfFunctionDeclaration> from)
			{
			}

			vl::Ptr<WfClassMember> ExpressionVisitor::CreateField(vl::Ptr<WfClassMember> from)
			{
			}

			// Visitor Members -----------------------------------

			void ExpressionVisitor::Visit(WfThisExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTopQualifiedExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfReferenceExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfOrderedNameExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfOrderedLambdaExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfMemberExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfChildExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfLiteralExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfFloatingExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfIntegerExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfStringExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfUnaryExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfBinaryExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfLetExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfIfExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfRangeExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfSetTestingExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfConstructorExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfInferExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTypeCastingExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTypeTestingExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTypeOfTypeExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfTypeOfExpressionExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfAttachEventExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfDetachEventExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfObserveExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfCallExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfVirtualExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfFunctionExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfNewClassExpression* node)
			{
			}

			void ExpressionVisitor::Visit(WfNewInterfaceExpression* node)
			{
			}

/***********************************************************************
VirtualExpressionVisitor
***********************************************************************/

			// CopyFields ----------------------------------------

			void VirtualExpressionVisitor::CopyFields(WfBindExpression* from, WfBindExpression* to)
			{
			}

			void VirtualExpressionVisitor::CopyFields(WfVirtualExpression* from, WfVirtualExpression* to)
			{
			}

			void VirtualExpressionVisitor::CopyFields(WfExpression* from, WfExpression* to)
			{
			}

			void VirtualExpressionVisitor::CopyFields(WfFormatExpression* from, WfFormatExpression* to)
			{
			}

			// CreateField ---------------------------------------

			// Visitor Members -----------------------------------

			void VirtualExpressionVisitor::Visit(WfBindExpression* node)
			{
			}

			void VirtualExpressionVisitor::Visit(WfFormatExpression* node)
			{
			}

/***********************************************************************
StatementVisitor
***********************************************************************/

			// CopyFields ----------------------------------------

			void StatementVisitor::CopyFields(WfBreakStatement* from, WfBreakStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfStatement* from, WfStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfContinueStatement* from, WfContinueStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfReturnStatement* from, WfReturnStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfDeleteStatement* from, WfDeleteStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfRaiseExceptionStatement* from, WfRaiseExceptionStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfIfStatement* from, WfIfStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfSwitchStatement* from, WfSwitchStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfWhileStatement* from, WfWhileStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfForEachStatement* from, WfForEachStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfTryStatement* from, WfTryStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfBlockStatement* from, WfBlockStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfExpressionStatement* from, WfExpressionStatement* to)
			{
			}

			void StatementVisitor::CopyFields(WfVariableStatement* from, WfVariableStatement* to)
			{
			}

			// CreateField ---------------------------------------

			vl::Ptr<WfSwitchCase> StatementVisitor::CreateField(vl::Ptr<WfSwitchCase> from)
			{
			}

			vl::Ptr<WfVariableDeclaration> StatementVisitor::CreateField(vl::Ptr<WfVariableDeclaration> from)
			{
			}

			// Visitor Members -----------------------------------

			void StatementVisitor::Visit(WfBreakStatement* node)
			{
			}

			void StatementVisitor::Visit(WfContinueStatement* node)
			{
			}

			void StatementVisitor::Visit(WfReturnStatement* node)
			{
			}

			void StatementVisitor::Visit(WfDeleteStatement* node)
			{
			}

			void StatementVisitor::Visit(WfRaiseExceptionStatement* node)
			{
			}

			void StatementVisitor::Visit(WfIfStatement* node)
			{
			}

			void StatementVisitor::Visit(WfSwitchStatement* node)
			{
			}

			void StatementVisitor::Visit(WfWhileStatement* node)
			{
			}

			void StatementVisitor::Visit(WfForEachStatement* node)
			{
			}

			void StatementVisitor::Visit(WfTryStatement* node)
			{
			}

			void StatementVisitor::Visit(WfBlockStatement* node)
			{
			}

			void StatementVisitor::Visit(WfExpressionStatement* node)
			{
			}

			void StatementVisitor::Visit(WfVariableStatement* node)
			{
			}

/***********************************************************************
DeclarationVisitor
***********************************************************************/

			// CopyFields ----------------------------------------

			void DeclarationVisitor::CopyFields(WfNamespaceDeclaration* from, WfNamespaceDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfDeclaration* from, WfDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfFunctionDeclaration* from, WfFunctionDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfVariableDeclaration* from, WfVariableDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfEventDeclaration* from, WfEventDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfPropertyDeclaration* from, WfPropertyDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfConstructorDeclaration* from, WfConstructorDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfDestructorDeclaration* from, WfDestructorDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfClassDeclaration* from, WfClassDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfEnumDeclaration* from, WfEnumDeclaration* to)
			{
			}

			void DeclarationVisitor::CopyFields(WfStructDeclaration* from, WfStructDeclaration* to)
			{
			}

			// CreateField ---------------------------------------

			vl::Ptr<WfAttribute> DeclarationVisitor::CreateField(vl::Ptr<WfAttribute> from)
			{
			}

			vl::Ptr<WfFunctionArgument> DeclarationVisitor::CreateField(vl::Ptr<WfFunctionArgument> from)
			{
			}

			vl::Ptr<WfBaseConstructorCall> DeclarationVisitor::CreateField(vl::Ptr<WfBaseConstructorCall> from)
			{
			}

			vl::Ptr<WfClassMember> DeclarationVisitor::CreateField(vl::Ptr<WfClassMember> from)
			{
			}

			vl::Ptr<WfEnumItem> DeclarationVisitor::CreateField(vl::Ptr<WfEnumItem> from)
			{
			}

			vl::Ptr<WfStructMember> DeclarationVisitor::CreateField(vl::Ptr<WfStructMember> from)
			{
			}

			// Visitor Members -----------------------------------

			void DeclarationVisitor::Visit(WfNamespaceDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfFunctionDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfVariableDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfEventDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfPropertyDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfConstructorDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfDestructorDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfClassDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfEnumDeclaration* node)
			{
			}

			void DeclarationVisitor::Visit(WfStructDeclaration* node)
			{
			}

/***********************************************************************
ModuleUsingFragmentVisitor
***********************************************************************/

			// CopyFields ----------------------------------------

			void ModuleUsingFragmentVisitor::CopyFields(WfModuleUsingNameFragment* from, WfModuleUsingNameFragment* to)
			{
			}

			void ModuleUsingFragmentVisitor::CopyFields(WfModuleUsingFragment* from, WfModuleUsingFragment* to)
			{
			}

			void ModuleUsingFragmentVisitor::CopyFields(WfModuleUsingWildCardFragment* from, WfModuleUsingWildCardFragment* to)
			{
			}

			// CreateField ---------------------------------------

			// Visitor Members -----------------------------------

			void ModuleUsingFragmentVisitor::Visit(WfModuleUsingNameFragment* node)
			{
			}

			void ModuleUsingFragmentVisitor::Visit(WfModuleUsingWildCardFragment* node)
			{
			}
		}
	}
}
