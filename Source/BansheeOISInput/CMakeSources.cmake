set(BS_BANSHEEOISINPUT_INC_NOFILTER
	"Include/BsInputHandlerOIS.h"
	"Include/BsOISPrerequisites.h"
)

set(BS_BANSHEEOISINPUT_SRC_NOFILTER
	"Source/BsInputHandlerOIS.cpp"
	"Source/BsOISPlugin.cpp"
)

source_group("Header Files" FILES ${BS_BANSHEEOISINPUT_INC_NOFILTER})
source_group("Source Files" FILES ${BS_BANSHEEOISINPUT_SRC_NOFILTER})

set(BS_BANSHEEOISINPUT_SRC
	${BS_BANSHEEOISINPUT_INC_NOFILTER}
	${BS_BANSHEEOISINPUT_SRC_NOFILTER}
)