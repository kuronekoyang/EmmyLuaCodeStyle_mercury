#pragma once

enum class FormatElementType
{
	FormatElement,
	IndentElement,
	StatementElement,
	TextElement,
	ExpressionElement,
	AlignmentLayoutElement,
	KeepLayoutElement,
	AlignToFirstElement,
	SubExpressionElement,
	LongExpressionLayoutElement,
	NoIndentElement,
	IndentOnLineBreakElement,
	PlaceholderElement,
	AlignIfLayoutElement,
	StringLiteralElement,

	ControlStart,
	KeepLineElement,
	MinLineElement,
	KeepBlankElement,
	LineElement,
	AlignmentElement,
	AlignToElement,
	KeepElement,
	MaxSpaceElement
	
};