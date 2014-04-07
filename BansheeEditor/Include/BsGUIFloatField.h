#pragma once

#include "BsEditorPrerequisites.h"
#include "BsGUIElementContainer.h"

namespace BansheeEditor
{
	class BS_ED_EXPORT GUIFloatField : public BS::GUIElementContainer
	{
		struct PrivatelyConstruct {};

	public:
		static const CM::String& getGUITypeName();

		static GUIFloatField* create(BS::GUIWidget& parent, const BS::GUIContent& labelContent, 
			const BS::GUIOptions& layoutOptions, BS::GUIElementStyle* labelStyle = nullptr, BS::GUIElementStyle* inputBoxStyle = nullptr);

		static GUIFloatField* create(BS::GUIWidget& parent, const CM::HString& labelText, 
			const BS::GUIOptions& layoutOptions, BS::GUIElementStyle* labelStyle = nullptr, BS::GUIElementStyle* inputBoxStyle = nullptr);

		static GUIFloatField* create(BS::GUIWidget& parent, 
			const BS::GUIOptions& layoutOptions, BS::GUIElementStyle* labelStyle = nullptr, BS::GUIElementStyle* inputBoxStyle = nullptr);

		static GUIFloatField* create(BS::GUIWidget& parent, const BS::GUIContent& labelContent, 
			BS::GUIElementStyle* labelStyle = nullptr, BS::GUIElementStyle* inputBoxStyle = nullptr);

		static GUIFloatField* create(BS::GUIWidget& parent, const CM::HString& labelText, 
			BS::GUIElementStyle* labelStyle = nullptr, BS::GUIElementStyle* inputBoxStyle = nullptr);

		static GUIFloatField* create(BS::GUIWidget& parent, 
			BS::GUIElementStyle* labelStyle = nullptr, BS::GUIElementStyle* inputBoxStyle = nullptr);

		GUIFloatField(const PrivatelyConstruct& dummy, BS::GUIWidget& parent, const BS::GUIContent& labelContent, 
			BS::GUIElementStyle* labelStyle, BS::GUIElementStyle* inputBoxStyle, const BS::GUILayoutOptions& layoutOptions);

		GUIFloatField(const PrivatelyConstruct& dummy, BS::GUIWidget& parent, 
			BS::GUIElementStyle* labelStyle, BS::GUIElementStyle* inputBoxStyle, const BS::GUILayoutOptions& layoutOptions);

		float getValue() const;
		void setValue(float value);

		void setLabelWidth(CM::UINT32 value);

		void _updateLayoutInternal(CM::INT32 x, CM::INT32 y, CM::UINT32 width, CM::UINT32 height,
			CM::RectI clipRect, CM::UINT8 widgetDepth, CM::UINT16 areaDepth);

		CM::Vector2I _getOptimalSize() const;
	protected:
		virtual ~GUIFloatField();

		void updateClippedBounds();
	protected:
		static const float DRAG_SPEED;

		CM::UINT32 mLabelWidth;
		BS::GUILabel* mLabel;
		BS::GUIInputBox* mInputBox;
		CM::INT32 mLastDragPos;
		bool mIsDragging;
		bool mIsDragCursorSet;

		virtual bool mouseEvent(const BS::GUIMouseEvent& ev);

		static bool floatFilter(const CM::WString& str);
	};
}